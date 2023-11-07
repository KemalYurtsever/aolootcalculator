#include <stdio.h>

int main() {
    float gank_loot, repair, vergi, split;
    int people;
    
    printf("Gank lootu gir: ");
    scanf("%f", &gank_loot);
    
    printf("Repairları gir (sonuncu repairi girdikten sonra 0 enter bas): ");
    
    repair = 0;
    while (1) {
        float input;
        scanf("%f", &input);

        if (input == 0) {
            break;
        }

        repair += input;
    }

    printf("Kaç kişi: ");
    scanf("%d", &people);
    
    vergi = gank_loot * 12 / 100;
    split = (gank_loot - vergi - repair) / people;
    
    printf("VERILECEK SPLIT= %.2f", split);

    return 0;
}

	
