typedef struct S_8245F280 { char pad0[0x90]; int a[6]; int a8; int ac; int b0; int b4; int b8; int bc; int c0; char pad[0x544-0xc4]; int f544; int f548; } S_8245F280;
typedef struct Q_8245F280 { char pad[0x180]; int f180; } Q_8245F280;
typedef struct P_8245F280 { char pad[0xa0]; Q_8245F280 *p; char pad2[0x24]; S_8245F280 *s; } P_8245F280;
extern int fn_825603C8();
void fn_8245F280(P_8245F280 *param_1)
{
  S_8245F280 *s; Q_8245F280 *q;
  int i;
  q = param_1->p;
  if (q->f180 == 0) { fn_825603C8(0, q, 1); q->f180 = 1; }
  s = param_1->s;
  s->f548 = 0; s->f544 = 1; s->b8 = 3; s->ac = 0xc; s->b4 = 4; s->a8 = 6; s->c0 = 4; s->bc = 0;
  for (i = 0; i < 6; i++) s->a[i] = 0;
  s->b0 = 0;

}
