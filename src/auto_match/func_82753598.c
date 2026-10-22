typedef struct { char *str; int v[7]; } Str;
extern void fn_8268AFB0(Str *s, void *a);
extern void fn_8268AFD8(Str *s);
extern void fn_8268B1F0(Str *s, char *t, int n);
extern char *fn_82752D38(void *a);
extern void fn_827532F0(void *a, char *s);
extern void *lbl_831E7E64;
extern char lbl_82196582[];

void fn_82753598(void *obj, char *a, char *b, char *c, char *d, char *e, void *f)
{
  Str s;
  char *p;

  if (obj != 0) {
    fn_8268AFB0(&s, lbl_831E7E64);
    fn_8268B1F0(&s, a, -1);
    fn_8268B1F0(&s, b, -1);
    fn_8268B1F0(&s, c, -1);
    fn_8268B1F0(&s, d, -1);
    fn_8268B1F0(&s, e, -1);
    fn_8268B1F0(&s, fn_82752D38(f), -1);
    p = s.str;
    if (p == 0) p = lbl_82196582;
    fn_827532F0(obj, p);
    fn_8268AFD8(&s);
  }
}
