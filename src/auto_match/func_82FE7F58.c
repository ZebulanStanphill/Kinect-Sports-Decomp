extern int fn_8300F1D8(void);
extern int fn_8300F208(void *, void *, unsigned short);
extern void *lbl_832642E4;
struct Msg { short unknown; short type; int value; char rest[40]; };
void fn_82FE7F58(int x) { struct Msg m; unsigned short n; m.type=0x1e; m.value=x; n=fn_8300F1D8(); fn_8300F208(lbl_832642E4,&m,n); }
