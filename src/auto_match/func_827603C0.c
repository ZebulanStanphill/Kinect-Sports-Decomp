typedef struct S { int x0; unsigned char *x4; int x8, xc, x10, x14; unsigned int x18; unsigned int x1c; } S;
extern S *fn_82760050(S *p);
extern void fn_8275EB90(S *p);
static void adv(unsigned char **pp) { (*pp)++; }
static void adv2(unsigned char **pp, unsigned char *q) { *pp = q + 1; }
void fn_827603C0(S *p)
{
  if (p->x18 < p->x1c) {
    unsigned char *q = p->x4;
    if ((*q & 7) == 0) { unsigned char **pp = &p->x4; *pp = q + 1; p->x18++; fn_8275EB90(p); }
    else { p = fn_82760050(p); p->x18++; fn_8275EB90(p); }
  }
}
