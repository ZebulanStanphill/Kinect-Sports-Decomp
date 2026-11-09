extern void fn_8249F6A0(void *);

typedef struct {
  char pad0[0x48];
  int a;
  int b;
  char pad1[0x30];
  float f;
} T;

typedef struct {
  char pad0[0x18];
  int v;
} S;

int fn_8249F628(S *s, T *t, int p3, int p4, int p5)
{
  int v;

  if (p5 != 0) {
    fn_8249F6A0(s);
    if (t != 0) {
      v = s->v;
      if (v != 0) {
        t->b = v;
        if (v != t->a) {
          t->f = 0.0f;
        }
      }
    }
  }
  return 1;
}
