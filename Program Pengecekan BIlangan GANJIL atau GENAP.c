#include<stdio.h>

int main()
{
    int angka;
    printf("Program Pengecekan Bilangan GANJIL atau GENAP\n");
    printf("===============================================\n");
    printf("Masukan Angka : ");
    scanf("%d", &angka);
    if (angka % 2 == 0)
    {
        printf("Angka %d adalah bilangan GENAP", angka);
    }
    else {
        printf("Angka %d adalah bilangan GANJIL", angka);
    }
}
