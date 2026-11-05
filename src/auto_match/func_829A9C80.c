extern int fn_82958950(int,int);
int fn_829A9C80(int p,double x) {
 int hr=fn_82958950(p,2);
 if(hr>=0) {
   hr=0;
   *(unsigned *)(*(int *)(p+0x114)*4+*(int *)(p+0x110))=((unsigned *)&x)[1];
   *(unsigned *)((*(int *)(p+0x114)+1)*4+*(int *)(p+0x110))=((unsigned *)&x)[0];
   *(int *)(p+0x114)+=2;
 }
 return hr;
}
