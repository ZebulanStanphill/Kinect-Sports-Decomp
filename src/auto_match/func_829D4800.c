typedef unsigned int uint;
extern int fn_82A1F2F8(void);

typedef struct { uint a; int b; } S2;
typedef struct { int base; S2 *s; } S1;

void fn_829D4800(S1 *p)
{
  if (p->s->a > 0x19999999 || p->s->b == -1) {
    p->s->a = 0;
    p->s->b = 0;
  }
  p->s->b++;
  p->s->a += fn_82A1F2F8() - p->base;
}
