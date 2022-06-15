void ChangementA() { // changement d'état pour l'encodeur
  // on mesure A
  etatA = digitalRead(pinA);
  if (etatB && !sousMenuActivated) {
    compteurMenu--;   
  }
  else if (etatA && !sousMenuActivated) {
    compteurMenu++;     
  }
  
  if (etatB && sousMenuActivated)
  {
    compteurSousMenu--;
  }
  else if (etatA && sousMenuActivated)
  {
    compteurSousMenu++;
  }
}
