extern void fn_8280ADB0(void *a, void *b, void *c);

typedef struct { float v[3]; } Vec3;
typedef struct { Vec3 *data; int pad[5]; int count; } Arr;

void fn_8305F7C0(Arr *p, void *m)
{
  int i;
  for (i = 0; i < p->count; i++) {
    Vec3 *d = p->data;
    fn_8280ADB0(m, d + i, d + i);
  }
}
