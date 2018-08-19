int Bsearch(int r[],int low,int high, int key)
{
  int mid;
  while(low<=high){
    mid=(low+high)/2;
    if(key == r[mid]) return mid;
    else if(key<r[mid]) high = mid -1;
    else low = mid+1;
  }
  return -1;
}

int Bsearch_rec(int r[],int low,int high,int key)
{
  int mid;
  if(low<=high){
    mid = (low+high)/2;
    if(key == r[mid]) return mid;
    else if(key<r[mid]) return Bsearch_rec(r,low,mid-1,key);
    else return Bsearch_rec(r,mid+1,high,key);
  }
  return -1;
}
