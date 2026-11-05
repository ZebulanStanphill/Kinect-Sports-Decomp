extern void fn_82EF2CB8(void *,unsigned,void *);
unsigned fn_82EF3308(char *self,unsigned __int64 *out1,unsigned __int64 *out2) {
 unsigned result=0; unsigned __int64 size=44; struct { char *a,*b,*c; } tmp;
 if(*(unsigned *)(self+12)==0) result=0xc00d36b6;
 else {
  unsigned i; for(i=0;i<*(unsigned *)(self+0x264);i++) {
   fn_82EF2CB8(self+0x58,i,&tmp.a); size = ((unsigned)*(unsigned short *)(tmp.a+2)*2u + size) + 8;
   fn_82EF2CB8(self+0x58,i,&tmp.b); size = (unsigned)*(unsigned short *)(tmp.b+12)*2u+size;
   fn_82EF2CB8(self+0x58,i,&tmp.c); size += *(unsigned short *)(tmp.c+20);
  }
  if(out1) *out1=size; if(out2) *out2=size; *(unsigned __int64 *)(self+32)=size;
 }
 return result;
}
