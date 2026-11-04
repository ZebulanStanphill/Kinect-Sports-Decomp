typedef struct Arr_8305EBE0 { char pad[0x28]; int f28; int *f2c; int count; } Arr_8305EBE0;
extern void fn_8305EB60(Arr_8305EBE0 *, int);
extern void fn_8305F778(int, int, void *);
extern int fn_83060570(int, void *);
extern unsigned char fn_83066C10(int, void *, int, void *, float);

unsigned char fn_8305EBE0(Arr_8305EBE0 *a, int b, int c, float x, Arr_8305EBE0 *d)
{
  char tmp[0x10];
  int i;
  Arr_8305EBE0 *self = a;
  fn_8305EB60(d, a->count);
  for (i = 0; i < a->count; i++) {
    fn_8305F778(a->f28, self->f2c[i], tmp);
    if (fn_83066C10(b, tmp, c, tmp, x) == 0) return 0;
    d->f2c[i] = fn_83060570(d->f28, tmp);
  }
  return 1;
}
