#include <stdio.h>
int main(){
int r[] = {98,187,46,33,58,91,104,15};
int n=8,h=53,i,j,t,pos=h,seek=0;
for(i=0;i<n-1;i++){for(j=0;j<n-1-i;j++){
if(r[j]>r[j+1]){
t=r[j];
r[j]=r[j+1];
r[j+1]=t;
}
}
}
printf("order: %d",h);
for(i=0;i<n;i++){
if(r[i]>h){
seek+=r[i]-pos;pos=r[i];printf("->%d",pos);
}
}
seek+=199-pos;pos=199;printf("-> 199");
seek+=199;pos=0;printf("-> 0");
for(i=0;i<n && r[i]<h;i++){
seek+=r[i]-pos;pos=r[i];printf("-> %d",pos);
}
printf("\nTotal seek = %d\n",seek);
return 0;
}
