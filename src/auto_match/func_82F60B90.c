extern int fn_82F61BE8(void *,unsigned,unsigned,unsigned);
int fn_82F60B90(char *p,unsigned count,unsigned data) {
 int result;
 if(count==0 || data==0) result=0x82240403;
 else {
  result=fn_82F61BE8(p+4,count*0x500+0x60,data,0x3c);
  if(result==0) {
   *(unsigned *)(p+100)=count;
   *(unsigned *)(p+0x58)=0;
   *(unsigned *)(p+0x5c)=0;
   *(unsigned *)(p+0x60)=0;
  }
 }
 return result;
}
