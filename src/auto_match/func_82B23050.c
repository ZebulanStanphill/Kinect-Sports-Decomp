/* Reads the 2-bit field at bit `index` from two consecutive words; zero unless both are non-zero. */
static __forceinline int extract_82B23050(unsigned *data,unsigned index) {
 unsigned shift=index & 31;
 unsigned mask=((2 << ((index+1)&31))-1) & (~0u << shift);
 unsigned *p=data+((index>>5)*1);
 int value=(*p & mask) >> shift;
 if(value==0 || ((p[1]&mask)>>shift)==0) value=0;
 return value;
}
int fn_82B23050(unsigned *data,unsigned count) {
 int result=extract_82B23050(data,0);
 unsigned i;
 for(i=1;i<count;i++) {
  int value=extract_82B23050(data,i*2);
  if(result==0 || value==0) result=0;
 }
 return result;
}
