extern int fn_828E9D90(int);
extern int fn_828E9DA8(int);
extern unsigned fn_828E9FF8(int, int);
extern void fn_8257A9F0(void *vec, const int *val);

typedef struct {
    char pad[0x80];
    int mode;
    char vec[0x10];
} Obj_828DB7C0;

static __forceinline unsigned ReadBits(int w, int n)
{
  unsigned v;
  if (fn_828E9DA8(w) - fn_828E9D90(w) >= n) {
    v = fn_828E9FF8(w, n);
  } else {
    v = 0;
  }
  return v;
}

void fn_828DB7C0(Obj_828DB7C0 *o, int w)
{
  int v;

  o->mode = ReadBits(w, 2);
  switch (o->mode) {
  case 1:
    while (ReadBits(w, 1) != 0) {
      v = ReadBits(w, 0x10);
      fn_8257A9F0(o->vec, &v);
    }
    break;
  case 2:
    v = ReadBits(w, 0x10);
    fn_8257A9F0(o->vec, &v);
    break;
  }
}
