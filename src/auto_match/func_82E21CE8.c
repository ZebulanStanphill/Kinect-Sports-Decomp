typedef struct Obj Obj;
typedef struct { void *f[6]; int (*g)(Obj *); } VT;
struct Obj { VT *vt; };

int fn_82E21CE8(Obj *o, unsigned char *buf, int n)
{
  int i = 0;
  if (0 < n) {
    do {
      buf[i] ^= o->vt->g(o);
      i++;
    } while (i < n);
  }
  return 1;
}
