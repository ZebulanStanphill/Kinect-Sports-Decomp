extern unsigned int lbl_832642E4; extern int fn_8300F120(void); extern void fn_8300F208(unsigned int, void *, int);
struct P { short unused; short kind; int x; char pad[36]; };
void fn_82FE7148(void) { struct P p; unsigned short v; p.kind=7;p.x=-1; v=fn_8300F120(); fn_8300F208(lbl_832642E4,&p,v); }
