extern int fn_8300F178(void);
extern int fn_8300F208(void *, void *, unsigned short);
extern void *lbl_832642E4;
struct Msg { short unknown; short type; int value; char rest[40]; };
void fn_82FE6AF8(int x) { struct Msg m; unsigned short n; m.type=0x12; m.value=x; n=fn_8300F178(); fn_8300F208(lbl_832642E4,&m,n); }
