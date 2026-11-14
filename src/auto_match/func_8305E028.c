typedef struct Arr_8305E028 { char pad[0x28]; int f28; int *f2c; int count; } Arr_8305E028;
extern unsigned int fn_8305F770(int);
extern void fn_8305F778(int, int, void *);
extern void *fn_83065B90(unsigned int size);
extern void fn_83065BA8(void *);
extern void *memset(void *, int, unsigned int);

int fn_8305E028(Arr_8305E028 *a)
{
  int ok = 1;
  int *counts;
  int i;
  char tmp[0x10];

  if (a->count < 3) {
    return 0;
  }
  counts = fn_83065B90(fn_8305F770(a->f28) * 4);
  memset(counts, 0, fn_8305F770(a->f28) * 4);
  for (i = 0; i < a->count; i++) {
    fn_8305F778(a->f28, a->f2c[i], tmp);
    if (++counts[a->f2c[i]] > 1) {
      ok = 0;
      break;
    }
  }
  fn_83065BA8(counts);
  return ok;
}
