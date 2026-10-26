typedef struct { int a, b; } E;
typedef struct { E *first; E *last; E *end; } Vec;
typedef struct { Vec v[6]; unsigned char pad[4]; unsigned char pad2; unsigned char count; } S;

static unsigned int size(Vec *v) { return v->last - v->first; }

int fn_8300D8E8(S *p)
{
  unsigned char i;

  for (i = 0; i < p->count; i++) {
    if (size(&p->v[i + 1]) > 0) {
      return 1;
    }
  }
  return 0;
}
