#Exo 1  -------------------------------------


#Le but est de calculer le produit (multiplication) de 2 nombres saisis


num1 = int(input("Choisissez la valeur de num1 : \n"))
num2 = int(input("Choisissez la valeur de num2 : \n"))

print(f"Le produit de num1 et num2 est de {num1 * num2}")



#Exo 2  -------------------------------------


#Le but est d'échanger la valeur de num3 et de num4


num3 = int(input("Choisissez la valeur de num3 : \n"))
num4 = int(input("Choisissez la valeur de num4 : \n"))


#Valeurs avant échange
print(f"Num3 vaut {num3} et Num4 vaut {num4}")


#échange avec la variable temporaire tmp

tmp = num3
num3 = num4
num4 = tmp


#Valeurs après échange
print(f"Num3 vaut {num3} et Num4 vaut {num4}")



#Exercice 3 ------------------------------

#Le but est d'afficher le plus grand de 3 valeurs saisies


num5 = int(input("Choisissez la valeur de num5 : \n"))
num6 = int(input("Choisissez la valeur de num6 : \n"))
num7 = int(input("Choisissez la valeur de num7 : \n"))




#Vérification des valeurs

if num5 > num6 and num5 > num7:
    print(f"{num5} est le plus grand\n")

elif num6 > num5 and num6 > num7:
    print(f"{num6} est le plus grand\n")

elif num7 > num5 and num7 > num6:
    print(f"{num7} est le plus grand\n")
else:
    print("ERREUR : Une égalité a été détectée\n")


