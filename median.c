int main()
{
int i,j,a[100],size,t;
printf("Enter the size of array:");
scanf("%d",&size);
printf("Enter the array elements:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}}
printf(" The median element is %d",a[size/2]);
return 0;
}
