// 直接插入排序
//8,6,9,5,2,1
void Insertsort(int data[], int n)
{
  int i,j;
  int tmp;
  for(i=1;i<n;i++){
    if(data[i]<data[i-1]){
      tmp = data[i]; data[i] = data[i-1];
      for(j=i-1;j>=0;j--){
        if(data[j]>tmp){
          data[j+1] = data[j];
        }
      }
      data[j+1]=tmp;
    }
  }
}


// 直接插入排序
//8,6,9,5,2,1

//8,8,9,5,2,1 temp = 6;
//6,8,9,5,2,1

//6,8,9,5,2,1 temp = 5; i =3; j=1;
//6,8,9,9,2,1 temp = 5; i =3; j=1;
//6,8,8,9,2,1 temp = 5; i =3; j=1;
//6,6,8,9,2,1 temp = 5; i =3; j=0;
//5,6,8,9,2,1 temp = 5; i =3; j=-1;

void Insertsort(int data[],int n)
{
  for(int i = 1;i<keys.length;i++)
  {
    if(keys[i]<keys[i-1]){
      int tmp = keys[i];
      keys[i] = keys[i-1];
      for(j=i-2;j>=0&&temp<keys[j];j--){
        data[j+1] = data[j];
      }
      data[j+1] = temp;
    }
  }
}
