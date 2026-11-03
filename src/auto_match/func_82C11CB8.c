typedef struct { int a, b, c, d; } V4_82C11CB8;
extern int fn_82C10E58(int, int, unsigned char **);

static __forceinline void Zero4(V4_82C11CB8 *s)
{
  s->a = 0;
  s->b = 0;
  s->c = 0;
  s->d = 0;
}

int fn_82C11CB8(int param_1, int param_2, V4_82C11CB8 *param_3, int param_4)
{
  int hr;
  unsigned char *e;

  e = 0;
  hr = fn_82C10E58(*(int *)(param_1 + 0x48), param_2, &e);
  if (hr >= 0) {
    *e = (unsigned char)param_2;
    Zero4((V4_82C11CB8 *)(e + 4));
    *(int *)(e + 0x14) = 0;
    *(int *)(e + 0x18) = 0;
    *(int *)(e + 0x1c) = 0;
    *(int *)(e + 0x20) = 0;
    *(int *)(e + 0x24) = 1;
    *(int *)(e + 0x28) = param_4;
    {
      V4_82C11CB8 *d = (V4_82C11CB8 *)(e + 4);
      d->a = param_3->a;
      d->b = param_3->b;
      d->c = param_3->c;
      d->d = param_3->d;
    }
    *(unsigned short *)(param_1 + 0x4c) = *(unsigned short *)(param_1 + 0x4c) + 1;
  }
  return hr;
}
