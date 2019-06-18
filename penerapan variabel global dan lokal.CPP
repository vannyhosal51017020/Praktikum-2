#include <iostream.h>
#include <conio.h>
float z = 9.0;             // Global variabel
int i = 10;

void tampilkan_lagi(void);
main()
{
float p = 2.0; //Lokal terhadap main()
cout<< i << " " << p << " " << z << "\n";
tampilkan_lagi();
//return 0;
getch();
}

void tampilkan_lagi (void)
{
int j = 5.0; //Lokal terhadap tampilkanLagiQ
cout << j << " " << z << "\n";
//Error, tidak dapat menampilkan variabel p
//cout << p << "n";
return;
getch();
}
