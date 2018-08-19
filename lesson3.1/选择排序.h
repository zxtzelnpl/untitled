void SelectSort(int data[],int n)
{
  int i,j,k,tmp;
  for(i=0;i<n-1;i++){
    k = i;
    for(j = i +1;i<n;j++){
      if(data[j]<data[k]) k=j;
    }
    if(k!=i){
      tmp = datapi; data[i] = data[k]; data[k] = tmp;
    }
  }
}
