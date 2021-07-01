void swap_max(int A[], int l, int p){
  int max=A[p],index=p,temp=0;
  for (int i=p+1;i<l;i++){
     if(A[i]>max)
     {
       max=A[i];
       index=i;
     }
    }  
  temp=A[p];
  A[p]=A[index];
  A[index]=temp;
  }

void ssort(int A[], int l){
  for (int i=0 ;i<l;i++)
   {
     swap_max(A,l,i);
   }

}
