extern unsigned int lbl_832642E4; extern int fn_8300F110(void); extern void fn_8300F208(unsigned int, void *, int);
struct P { short unused; short kind; int x; int y; char pad[32]; };
void fn_82FE6A48(int a,int b) { struct P p; unsigned short v; p.x=b;p.y=a;p.kind=5; v=fn_8300F110(); fn_8300F208(lbl_832642E4,&p,v); }
