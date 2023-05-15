#include <stdio.h>

int binarySearch(int dizi[], int ilk, int son, int sayi) {
    while (ilk <= son) {
        int orta = (ilk + son) / 2;

        if (dizi[orta] == sayi)
            return orta;  // Eleman bulunduðunda dizinin indisini döndürür

        if (dizi[orta] < sayi)
            ilk = orta + 1;  // Aranan elemaný saðdaki yarýda ara
        else
            son = orta - 1;  // Aranan elemaný soldaki yarýda ara
    }

    return -1;  // Eleman bulunamazsa -1 döndürür
}

int main() {
    int dizi1[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int boyut = sizeof(dizi1) / sizeof(dizi1[0]);

    int sayi;
    printf("Aranacak elemani girin: ");
    scanf("%d", &sayi);

    int sonuc = binarySearch(dizi1, 0, boyut - 1, sayi);

    printf(sonuc == -1 ? "Eleman bulunamadi.\n" : "Eleman %d indisinde bulundu.\n", sonuc);

    return 0;
}

