#include <stdio.h>
#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char *argv[]) {
//	int L, S, D, i;
//	scanf("%d%d", &L, &S);
//	D = L - S;
//	for(i = 2; i < D; i = i + 2){
//		int y = 4, x = 2;
//	
//		while(x != 0){
//			y--;
//			while(y == 0){
//				x = x + 2; 
//				printf("%d%d", x , y);
//			}
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//using namespace std;
 
int a , b , c , T ;
 
int ex( a ,  b , x , y )
{
    if(  b == 0 )
    {
        x = 1 ;
        y = 0 ;
        return a; 
    }
    else
    {
        int u = ex( b , a % b , y , x );
        y -= x *( a/b );
        return u ;
    }
}
 
int main()
{
//    scanf("%d", &T );
//    int h;
//    for( h = 1 ; h <= T ; ++ h )
//    {
        scanf("%d%d%d", &a , &b ,&c );
        int x = 0 ,y  = 0 ;
        int p = ex( a, b , x , y );//求最小公??和?足 a*x+b*y=gcd(a,b) 的 x 和 y
        x = x * ( c / p );
        y = y * ( c / p );
        printf("%d\n%d", x, y);//?里只?出特解
        /*通解
            for(int i = -10000 ; i <= 100000 ; ++ i ) {
                y0 = y - a/p*i;
                x0 = x + b/p*i;
            }
        */
//    }
}
