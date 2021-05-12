#include <stdio.h>
#include <string.h>

int main(){
   char buku[100][100], temp[100];
   int i,j,n;

   printf("Masukan Jumlah Buku: ");
   scanf("%d",&n);
   
   for(i=0;i<n;i++){
      printf("Masukan Nama Buku: ");
      scanf("%s",buku[i]);
   }
   for(i=0;i<n;i++){
      for(j=0;j<n-i-1;j++){
         if(strcmp(buku[j],buku[j+1])>0){
            strcpy(temp,buku[j]);
            strcpy(buku[j],buku[j+1]);
            strcpy(buku[j+1],temp);
         }
      }
   }
   printf("Buku Setelah Diurutkan: ");
   for(i=0;i<n;i++){
      printf("%s\n",buku[i]);
   }
return 0;
}