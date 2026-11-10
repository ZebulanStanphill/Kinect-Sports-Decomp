extern int fn_82EE1848(int,unsigned short);
int fn_82EE1940(int self) {
 int result=0;
 while(*(unsigned *)(self+0x254)!=0) {
  result=fn_82EE1848(self,(unsigned short)(*(unsigned *)(self+0x254)+0xffff));
  if(result<0)break;
 }
 return result;
}
