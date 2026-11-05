extern int fn_82A2A618(int, int, int);
extern int fn_82A1F470(void);
unsigned int fn_82BFEAD8(int a, int b) {
 unsigned int r;
 if (fn_82A2A618(a,b,0)==0) {
  r=fn_82A1F470();
  if ((int)r>0) r = r & 0xffff | 0x80070000;
 } else r=0;
 return r;
}
