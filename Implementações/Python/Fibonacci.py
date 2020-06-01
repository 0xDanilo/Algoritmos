
#Essa função encontra e improme a sequência até determinado número:
def fibonacci(quantidade):
    primeiroNum, segundoNum = 0, 1
    
    while primeiroNum < quantidade:
        print(primeiroNum, end=' ')
        primeiroNum, segundoNum = segundoNum, primeiroNum + segundoNum
    print()

#Essa outra impime a quantidade de digitos selicionados:

def fibonacci2(quantidade):
    primeiroNum, segundoNum = 0, 1

    for i in range(quantidade):
        print(primeiroNum, end=' ')
        primeiroNum, segundoNum = segundoNum, primeiroNum + segundoNum
        pass
    print()


numeroFibo = input("Digite um número para a série de Fibonacci:\n")      
numeroFibo = int(numeroFibo)

print(f"\nA sequência de Fibonacci até o numero {numeroFibo} é: ")
fibonacci(numeroFibo)

print(f"\nA sequência de Fibonacci para os primeiros {numeroFibo} números é: ")
fibonacci2(numeroFibo)