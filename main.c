#include <stdlib.h>
#include <stdio.h>

int main(){
int m_count,n,ostacha,chastka;

printf("Enter n, it must be 1 < n < 150\n");
scanf("%d",&n);

for(int i = 1;i<=n;i++){
    ostacha = n % i;
    chastka = n / i;
    if(ostacha == chastka){
        m_count += 1;
    }

}

printf("\nKilkist rivnuh dilnukiv: %d",m_count);


return 0;
}


