/*
 *  misc.cpp
 *
 *Contiene funzioni varie
 */

 void copyArray(float *src, float *dest, int inPos, int dim) {    //copia i valori di un array in un altro
   //src: vettore di partenza
   //dest: vettore di arrivo
   //inPos: posizione iniziale da cui iniziare la copia
   //dim: dimensione del vettore
   //A͟T͟T͟E͟N͟Z͟I͟O͟N͟E͟ ͟A͟G͟L͟I͟ ͟O͟V͟E͟R͟F͟L͟O͟W͟

    for(int i = inPos;i < dim;i++)
        dest[i]=src[i];
}

bool compareVector(float *a, float *b, float approx) {    //compara due vettori con un certo grado di approssimaizione
  //a[], b[]: vettori da comparare
  //approx: approssimazione

    if  (((a[0] < (b[0]+approx))&&(a[0] > (b[0]-approx))) &&
        ((a[1] < (b[1]+approx))&&(a[1] > (b[1]-approx))) &&
        ((a[2] < (b[2]+approx))&&(a[2] > (b[2]-approx))))
        return true;
    else
        return false;
}

void assign(float vec[], float x, float y, float z) {   //assegna tre valori ad un vettore
  //vec[]: vettore da riempire
  //x, y, z: parametri da assegnare
  //SOLO PER VETTORI DI FLOAT DI DIMENSIONE 3
  //farlo per vettori di dimesione generica è inutile e consuma memoria, just FYI

    vec[0]=x;
    vec[1]=y;
    vec[2]=z;
}

float dist(float targetPos[]) {   //ritorna la distanza tra il nostro satellite e un punto
  //targetPos[]: punto da misurare

    float tempVec[3];

    getMyPos(myPos);

	  mathVecSubtract(tempVec,targetPos,myPos,3);    //per la spiegazione consultare le slide disponibili nei tutorial

	  return (mathVecMagnitude(tempVec,3));
}

char ourColor() {     //ritorna il colore del nostro satellite come 'B' o 'R'
  getMyPos();
  if(myPos[1] > 0)
    return 'B';
    
  return 'R';
}
