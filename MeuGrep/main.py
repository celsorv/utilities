#
# Aponta linhas do arquivo que contém a string informada
#

def meuGrep(filename, string):

    hFile = open(filename, 'r', encoding = 'UTF-8')

    for line in hFile:
        if string in line:
            print('--->>', line)
            
    hFile.close()

print('\n---------')

meuGrep('teste_string.txt', 'interior')

print('-----------')
