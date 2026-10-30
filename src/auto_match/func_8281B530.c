extern unsigned int lbl_8320A764;
extern void fn_8281BC98(void *, unsigned int);
void fn_8281B530(void *p, unsigned int n) {
 ++lbl_8320A764;
 if (!n) fn_8281BC98(p,1); else fn_8281BC98(p,n);
}
