#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

main()
{
  int opc;
  printf ("seleccione 1 si quiere proceder con bfs o 2 para dfs");
  scanf("%d",&opc);
  if(opc==1)
  {
  bfs();  
    
  }
  if(opc==2){
  dfs();
  }
  
}
