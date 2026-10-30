extern void *memcpy(void *, const void *, unsigned);
extern int fn_8300F160(void);
extern void fn_8300F208(unsigned, void *, unsigned short);
extern unsigned lbl_832642E4;
void fn_82FE6CE8(unsigned a, const void *b) {
 struct { short x,y; unsigned a; char data[40]; } v;
 unsigned short n;
 v.a=a; v.y=15; memcpy(v.data,b,24);
 n=fn_8300F160(); fn_8300F208(lbl_832642E4,&v,n);
}
