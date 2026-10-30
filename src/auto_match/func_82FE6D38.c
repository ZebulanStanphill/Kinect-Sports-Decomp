extern unsigned int lbl_832642E4; extern int fn_8300F168(void); extern void fn_8300F208(unsigned int, void *, int);
struct P { short unused; short kind; int x; unsigned char y; char pad[32]; };
void fn_82FE6D38(int a,unsigned char b) { struct P p; unsigned short v; p.x=a;p.y=b;p.kind=16; v=fn_8300F168(); fn_8300F208(lbl_832642E4,&p,v); }
