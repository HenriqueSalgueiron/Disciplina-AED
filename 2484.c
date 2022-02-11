#include <stdio.h>
#include <string.h>
int main() {
 char s[101];
 int x,y,c,sp;
 while(scanf("%s",s)!=EOF){
 c=strlen(s);
  for(y=0;y<=strlen(s)-1;y++){
   for(sp=0;sp<y;sp++){
     printf(" ");
    }
   for(x=0;x<c;x++){
    printf("%c",s[x]);
    if(x<c-1)
    printf(" ");
   }
   c--;
   printf("\n");
  }
  printf("\n");
 }
    return 0;
}
