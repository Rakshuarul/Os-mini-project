#include <stdio.h>
int main() {
    int b[]={50,120,80}, p[]={45,75,100};
    for(int i=0;i<3;i++) {
        int k=-1;
        for(int j=0;j<3;j++)
            if(b[j]>=p[i]&&(k<0||b[j]>b[k])) k=j;
        if(k<0) printf("%d MB -> WAIT\n",p[i]);
        else { b[k]-=p[i]; printf("%d MB -> B%d\n",p[i],k); }
    }
    return 0;
}
