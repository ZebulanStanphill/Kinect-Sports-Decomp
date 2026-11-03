typedef struct Iface_82F34438 Iface_82F34438;
typedef struct VT_82F34438 {
  char pad[0x8c];
  int (*f8c)(Iface_82F34438 *, unsigned, int *);
} VT_82F34438;
struct Iface_82F34438 { VT_82F34438 *vt; };

typedef struct Obj_82F34438 {
  int f0;
  unsigned f4;
  unsigned f8;
  unsigned *fc;
} Obj_82F34438;

int fn_82F34438(Obj_82F34438 *o, Iface_82F34438 *p, int *out)
{
  int a = 0;
  int hr = 0xC00D36B4;
  unsigned i;
  if (p == 0) {
    hr = 0x80004003;
  } else {
    for (i = 0; i < o->f8; i++) {
      if (p->vt->f8c(p, o->fc[i], &a) == 0) {
        hr = 0;
        goto done;
      }
    }
    if (o->f4 != 0) {
      if (p->vt->f8c(p, o->f4, &a) == 0)
        hr = 0;
    }
done:
    if (out != 0)
      *out = 0;
  }
  return hr;
}
