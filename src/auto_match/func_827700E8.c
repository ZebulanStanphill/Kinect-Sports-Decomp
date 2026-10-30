typedef struct { unsigned a; unsigned b; int c; } Key_827700E8;
extern void fn_8276FE30(void *, Key_827700E8 *);
extern void fn_8276FEA8(void *, int *);

void fn_827700E8(unsigned *p, unsigned a, unsigned b, int c)
{
  Key_827700E8 t;
  if (a == 0 || b == 0 || a > p[0] || b > p[1]) {
    fn_8276FEA8(p + 0x15, &c);
  } else {
    t.a = a;
    t.b = b;
    t.c = c;
    fn_8276FE30(p + 5, &t);
  }
}
