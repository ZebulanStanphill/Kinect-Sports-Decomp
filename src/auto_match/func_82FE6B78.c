extern unsigned int lbl_832642E4; extern int fn_8300F188(void); extern void fn_8300F208(unsigned int, void *, int);
struct P { short unused; short kind; int x; int y; char pad[32]; };
void fn_82FE6B78(int a,int b) { struct P p; unsigned short v; p.y=b;p.x=a;p.kind=20; v=fn_8300F188(); fn_8300F208(lbl_832642E4,&p,v); }
