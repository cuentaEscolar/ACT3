
#set heading(numbering: "(I)")
#show heading: it => [
  #set align(center)

  \~ #emph(it.body)
     #counter(heading).display(
       it.numbering
     ) \~
]

= ¿Qué fue lo que aprendiste?

= Programa de deteccion basica de hijo/padre
Regalado: no aprendi nada, pero reforce lo visto en clase. Despues de este programa, me fue intuitivo el manejo de la pid en el resto de los problemas. 

= Programa de bfs en forks/ $0, 1, 1, 2, 2 ,2 ,2 ...$
Regalado: La creacion de hilos recursivamente forza dfs, por lo que se necesito usar sleep
para asegurarse de que los hijos imprimirian primero que todos los nietos(incluyendo hijos
de otros hijos creados antes del actual). No es una solucion elegante para nada; me interesaria saber como se suponia que lo resolvieramos.

= Proceso que crea n procesos
Regalado: Se aprendio el orden de ejecucion de los hilos. 
Ejecutar n forks de seguido no funcionaria para este problema, por lo que simplemente forzamos a los hijos a morir antes de crear uno nuevo. Se hizo claro uno de los posibles usos que tienen wait y exit.

= Proceso que llama a system
Regalado: Me parecio que la manera mas sensata de hacer esto seria con readline para leer el argumento y invocar un hijo para encargarse de ejecutar el proceso. Es lo que hace una shell y me parecio lo correcto. Tuve un par de problemas con strcmp pero despues de leer la documentacion, no hubo ningun otro problema. 


= Proceso hijo que llama a system
Regalado: Por accidente resolvi este problema en el inciso 4.

Normalmente no usaria goto s para todo pero se me hizo mas intuitivo saber lo que estaba pasando si lo ponia asi.
No me gusto mi manejo de memoria ; creo que no es elegante la solucion a la que llegue.  

