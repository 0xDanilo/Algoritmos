def potencia(base, expoente):
    if expoente == 0:
        return 1
    else:
        return base * potencia(base, expoente - 1)
    
#Recebe os números escolhidos pelo usuário e converte para inteiros (Int):
numeroBase = input("Digite o numero base: ")
numeroBase = int(numeroBase)
numeroExpoente = input("Digite o número do expoente: ")
numeroExpoente = int(numeroExpoente)

resultado = potencia(numeroBase, numeroExpoente)

#Converte o resultado para Hexadecimal
resultadoHex = hex(resultado)

print(f"O resultado é {resultado}.")
print(f"Em hexadecimal é {resultadoHex}")
