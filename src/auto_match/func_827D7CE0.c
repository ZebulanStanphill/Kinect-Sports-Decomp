extern int fn_827D67A8(void *);
extern int fn_827D6880(void *);
extern int fn_827DEF08(void *, void *);
extern int fn_827D7AD0(void *);
int fn_827D7CE0(char *p) {
 int r=fn_827D67A8(p);
 r=fn_827D6880(p)+r;
 r=fn_827DEF08(p+0x110,p)+r;
 return fn_827D7AD0(p)+r;
}
