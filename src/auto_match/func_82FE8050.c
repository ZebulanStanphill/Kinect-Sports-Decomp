extern unsigned int lbl_832642E4; extern int fn_8300F1C0(void); extern void fn_8300F208(unsigned int, void *, int);
struct P { short unused; short kind; unsigned char x; unsigned char y; char pad[36]; };
void fn_82FE8050(unsigned char a,unsigned char b) { struct P p; unsigned short v; p.x=a;p.y=b;p.kind=27; v=fn_8300F1C0(); fn_8300F208(lbl_832642E4,&p,v); }
