#set heading(numbering: "(I)")
#show heading: it => [
  #set align(center)
  #set text(font: "Inria Serif")
  \~ #emph(it.body)
     #counter(heading).display(
       it.numbering
     ) \~
]

= ¿Qué fue lo que aprendiste?

= Programa de deteccion basica de hijo/padre

= Programa de bfs en forks
La creacion de hilos recursivamente forza dfs, por lo que se necesito usar sleep
para asegurarse de que los hijos imprimirian primero que todos los nietos(incluyendo hijos
de otros hijos creados antes del actual). No es una solucion elegente.
E
= Proceso que crea n procesos
Se aprendio el orden de ejecucion de los hilos. 
Ejecutar n forks de seguido no funcionaria, por lo que simplemente forzamos a los hijos a morir antes de crear uno nuevo.

