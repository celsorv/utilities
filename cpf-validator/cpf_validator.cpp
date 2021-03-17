/*********
 * CPF number validator 
 *
 * Note: CPF is the Brazilian individual taxpayer registry identification
 * 
 * UNIVESP - www.univesp.br
 * Computer Engineering
 * Professional training in computing discipline
 */

#include <iostream>
#include <cctype>
#include <cstring>
#include "cpf_validator.h"

using namespace std;

bool CpfValidator::isValid(char* number) {

    if (strlen(number) != 11) return false;

    for (int cycle = 0; cycle < 2; cycle++) {

        int limit_index = cycle == 0 ? 9 : 10;
        int base_weight = limit_index + 1;

        int temp = 0;

        for (int index = 0; index < limit_index; index++) {
            temp += valueOf(number[index]) * (base_weight - index);
        }

        temp %= 11;
        int digit = temp < 2 ? 0 : 11 - temp;

        if (digit != valueOf(number[limit_index]))
            return false;

    }

    return true;
}

char CpfValidator::valueOf(char c) {
    if (!isdigit(c)) throw "it's not a number!";
    return c - '0';
}
