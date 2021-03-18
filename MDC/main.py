def mdc(x, y):

    '''
    while y != 0:
        r = x % y
        x = y
        y = r

    return x
    '''

    while y:
        x, y = y, x % y

    return x

def mdc_recursivo(x, y):
    return x if not y else mdc(y, x % y)



print(mdc(20, 30))

print(mdc_recursivo(20, 30))
