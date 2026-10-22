extern void fn_82C10B28(int, int, void *);

typedef struct { int x0; int x4; } E8;
typedef struct { char pad[0x18]; int x18; } E1C;
typedef struct {
  char pad[0x48];
  unsigned short n48;
  unsigned short n4a;
  E8 *p4c;
  E1C *p50;
} S;
typedef struct { char pad[0xe0]; int xe0; } T;

int fn_82C23AC8(int a, S *s, int c, T *t)
{
  unsigned short i;

  if (s->p4c != 0) {
    for (i = 0; i < s->n48; i++)
      fn_82C10B28(t->xe0, 0xb, &s->p4c[i].x4);
    fn_82C10B28(t->xe0, 0xb, &s->p4c);
  }
  if (s->p50 != 0) {
    for (i = 0; i < s->n4a; i++)
      fn_82C10B28(t->xe0, 0xb, &s->p50[i].x18);
    fn_82C10B28(t->xe0, 0xb, &s->p50);
  }
  return 0;
}
