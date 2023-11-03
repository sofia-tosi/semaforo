#include <stdio.h>
#include <unistd.h>
void setSemV(){
  printf("semaforo veicoli verde\n");
  sleep(1);
  printf("semaforo veicoli arancione\n");
  sleep(1);
  printf("semaforo veicoli rosso\n\n");
  sleep(1);
}
  void setSemP(){
    printf("semaforo pedoni rosso\n");
    sleep(1);
    printf("semaforo pedoni verde\n");
    sleep(1);
    printf("semaforo pedoni arancione\n");
    sleep(1);
    printf("semaforo pedoni rosso\n\n");
    sleep(1);
  }

int main() {

  for(;;){
    char c = getchar();
    
    if(c == 'x'){
      return 0;
    }
      setSemV();
      setSemP();
  }
  
  return 0;
}