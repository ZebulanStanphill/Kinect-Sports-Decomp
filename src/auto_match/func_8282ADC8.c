typedef struct {
  char pad[0x10];
  unsigned int *p10;
  unsigned int a14;
  unsigned int a18;
  unsigned int a1c;
  unsigned int a20;
} S;

extern int fn_82820EF8(unsigned int *p, int n);
extern int fn_82826568(int a, unsigned int b, unsigned int *out);
extern int fn_828295A8(unsigned int a, unsigned int *out);

void fn_8282ADC8(int param_1, S *s)
{
  unsigned int off;
  unsigned int a;
  unsigned int b;

  if (s->a14 != 0) {
    fn_82826568(param_1, s->a14, &a);
    fn_82826568(param_1, s->a18, &b);
    fn_828295A8(a, &off);
    s->p10 = (unsigned int *)(s->a1c + off);
    fn_82820EF8(s->p10, 4);
    s->a20 = *s->p10;
    fn_828295A8(b, &off);
    *s->p10 += off;
  }
}
