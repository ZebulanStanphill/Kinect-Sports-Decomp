extern unsigned char fn_828ACCE8(void *a);

typedef struct A_828D4600 { char pad[0xa0]; int v; } A_828D4600;
typedef struct S_828D4600 {
  char pad[0x14];
  A_828D4600 *a;
  A_828D4600 *b;
  int c;
} S_828D4600;

int fn_828D4600(S_828D4600 *p)
{
  int r = 0;
  if (p->a->v == 0 || p->b->v == 0 || fn_828ACCE8(p->a) == 0 || p->c == -1) {
    r = 1;
  }
  return r;
}
