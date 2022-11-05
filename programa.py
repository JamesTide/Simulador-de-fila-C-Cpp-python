media = int(5)
resp= int(input("voce esta na fila 1-sim 2-nao\n"))
while resp==1:
  fila = int(input("Qual o tamanho da fila? \n"))
  tempo = int(fila * media)
  horas = int(tempo / 60)
  minutos = int(tempo % 60)
  if tempo <+ 10:
    print("voce será atendido logo")
  else:
    print("Voce sera atendido em",horas,"horas e",minutos,"minutos\n")
  resp= int(input("voce ainda esta na fila 1-sim 2-nao\n"))
  if resp==2:
    print("Agradecemos sua paciencia!")
print("va para fila")