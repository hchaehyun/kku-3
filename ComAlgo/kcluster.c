#include <stdio.h>
#include <math.h>

typedef struct{
    double x, y;
} Point;

#define INF 1e+20
#define MAXPOINTS 1000

int CC[10];
int GC[MAXPOINTS];
Point pts[MAXPOINTS];

#define SQR(x) ((x)*(x))
#define DIST(p1, p2) sqrt(SQR(p1.x-p2.x)+SQR(p1.y-p2.y))

int argmax(double *D, int n){
    int i, imax;
    for(imax=0, i=1;i<n;i++)
        if(D[imax]<D[i]) imax = i;
    return imax;
}
int argmindist(Point x, int CC[], int numcenters){
    double Dt = INF, tmp;
    int j,ll;
    for(j =0; j<numcenters; j++){
        tmp=DIST(x, pts[CC[j]]);
        if(Dt > tmp) { Dt = tmp; ll = j;}
    }
    return ll;
}
int k_cluster(Point pts[], int npts, int CC[], int kclusters){
    int i,j,k,ll,s;
    double D[MAXPOINTS];
    Point cj,cl;
    for(j=1;j<kclusters;j++){
        for(i=0;i<npts;i++){
            D[i]=INF;
            for(ll=0;ll<j;ll++){
                cl=pts[CC[ll]];
                D[i]=fmin(D[i],DIST(pts[i],cl));
            }
        }
        s=argmax(D,npts);
        CC[j]=s; GC[s]=j;
    }
    for(i=0;i<npts;i++){
        ll = argmindist(pts[i], CC, kclusters);
        GC[i]=ll;
    }
}

int main()
{
    int i,j,kclusters,npts;
    kclusters=5;
    npts= 100   ;//MAXPOINTS;
    for(i=0;i < npts; i++)
       scanf("%lf%lf",&pts[i].x,&pts[i].y);

    k_cluster(pts, npts, CC, kclusters);
    for(i=0; i <npts; i++)
        printf("% 6.3f\t% 6.3f %5d\n",pts[i].x,pts[i].y,GC[i]);

}



/*
컴파일 시
gcc -o kcluster k-cluster.c -lm
./kcluster < cluster.dat
./kcluster < cluster.dat > k-cluster.out
순서대로 하고
jupyter notebook열어서 
pts=loadtxt 에서 파일 경로만 잘 맞춰주면 됨 
*/