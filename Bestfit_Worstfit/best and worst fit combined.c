#include <stdio.h>
int main() {
    int p[]={45,75,100};
    for(int w=0;w<2;w++) {
        int b[]={50,120,80};
        printf(w?"Worst Fit:\n":"Best Fit:\n");
        for(int i=0;i<3;i++) {
            int k=-1;
            for(int j=0;j<3;j++)
                if(b[j]>=p[i]&&(k<0||(w?b[j]>b[k]:b[j]<b[k]))) k=j;
            if(k<0) printf("%d MB -> WAIT\n",p[i]);
            else { b[k]-=p[i]; printf("%d MB -> B%d\n",p[i],k); }
        }
    }
    return 0;
}
