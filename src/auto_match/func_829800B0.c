extern void *fn_82930318(int);
extern void *fn_829304E0(void *, void *, int, const char *);
extern void *fn_829315D8(void *, void *, void *);

typedef struct { int pad[7]; int f1c; } State_829800B0;
typedef struct { int pad[0x1e]; State_829800B0 *state; } Self_829800B0;

void *fn_829800B0(Self_829800B0 *self, void *a, void *b)
{
  void *mem;
  int *obj;
  void *child;

  self->state->f1c = 1;
  mem = fn_82930318(0x14);
  if (mem != 0) {
    obj = (int *)fn_829304E0(mem, 0, 0, "Attributes");
  } else {
    obj = 0;
  }
  if (obj == 0) {
    return 0;
  }
  mem = fn_82930318(0x18);
  if (mem != 0) {
    child = fn_829315D8(mem, a, b);
  } else {
    child = 0;
  }
  if (child == 0) {
    return 0;
  }
  obj[2] = (int)child;
  return obj;
}
