#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x ;
    int a ;
    
    printf("请输入一个数，以计算小于这个数字的全部素数\n");
    scanf("%d",&a );
    
    printf("小于%d的素数有：\n",a);
    for ( x = 2 ; x < a ; x ++ ) {
        int i ;
        int Prime = 1 ;
        
        for (i = 2 ; i < x ; i++ ) {
            if ( x % i == 0 ) {
                Prime = 0 ;
                break ;
            }
        }
        
        if (Prime == 1) {
            printf("%d ",x );
        }
    }
    
    printf("\n");
    
    return 0;
    
}
