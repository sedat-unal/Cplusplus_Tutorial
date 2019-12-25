#include <stdio.h>

struct mesafe{
    int metre;
    int santimetre;
};

struct mesafe MesafeTopla(struct mesafe m1, struct mesafe m2){
    struct mesafe m3;
    m3.santimetre = m1.santimetre + m2.santimetre;
    m3.metre = m1.metre + m2.metre;

    if (m3.santimetre >= 100){
        m3.santimetre = m3.santimetre %100;
        m3.metre++;
        return m3;
    }
    
};

int main(){

    struct mesafe m1 = {99,85};
    struct mesafe m2 = {102,37};
    struct mesafe m3 = MesafeTopla(m1,m2);
    
    printf("%d.%d metre\n", m3.metre,m3.santimetre);

    return 0;
}
