int max(int *a,int n)
{
  int m,j;
  m=a[0];
  for(j=0;j<n;j++)
  {
    if(a[j]>m)
    m=a[j];
  }
  return m;
}
int sum(int * a,int n)
{
  int s,i;
  s=0;
  for(i=0;i<n;i++)
  {
    s+=a[i];
  }
  return s;
}
