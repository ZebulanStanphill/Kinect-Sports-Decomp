extern int fn_82E3C5F8(unsigned,unsigned,void *);
int fn_82EE5338(unsigned p,unsigned n,unsigned short *out) {
 unsigned short *tmp[4]; int hr;
 if (*(unsigned *)(p+12)==0) hr=0xc00d36b6;
 else { if (out==0) return 0x80070057;
  if ((n & 0xffff) >= *(unsigned *)(p+0x88)) return 0x80070057;
  fn_82E3C5F8(p+0x48,n & 0xffff,tmp); hr=0; *out=*tmp[0];
 }
 return hr;
}