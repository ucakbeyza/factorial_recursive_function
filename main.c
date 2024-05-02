#include <stdio.h>

//  Faktöriyel hesaplaması sonucunda büyük sayılar elde edebileceğimiz için bu türü kullanıyoruz.
unsigned long long faktoriyel(int n) {
    // Temel durum: n sıfırsa 1 döndür
    if (n == 0) {
        return 1;
    }
    // Recursive çağrı: n-1 için faktoriyel fonksiyonunu çağır
    return n * faktoriyel(n - 1);
}

int main() {
    int sayi;
    printf("Faktoriyelini hesaplamak istediğiniz sayıyı girin: ");
    scanf("%d", &sayi);

    // Negatif sayılar için kontrol
    if (sayi < 0) {
        printf("Negatif sayıların faktöriyeli tanımsızdır.\n");
    } else {
        // Faktöriyel hesabı ve sonucun yazdırılması
        unsigned long long sonuc = faktoriyel(sayi);
        printf("%d! = %llu\n", sayi, sonuc);
    }

    return 0;
}
