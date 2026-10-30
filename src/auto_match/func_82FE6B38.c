extern int fn_8300F180(void);
extern int fn_8300F208(void *, void *, unsigned short);
extern void *lbl_832642E4;
struct Msg { short unknown; short type; int value; char rest[40]; };
void fn_82FE6B38(int x) { struct Msg m; unsigned short n; m.type=0x13; m.value=x; n=fn_8300F180(); fn_8300F208(lbl_832642E4,&m,n); }
