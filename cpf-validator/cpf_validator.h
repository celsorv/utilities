/*********
 * CPF number validator 
 *
 * Note: CPF is the Brazilian individual taxpayer registry identification
 * 
 * UNIVESP - www.univesp.br
 * Computer Engineering
 * Professional training in computing discipline
 */

#ifndef CPF_VALIDATOR_H
#define CPF_VALIDATOR_H

class CpfValidator
{
public:
    bool isValid(char* number);

private:
    char valueOf(char c);

};

#endif