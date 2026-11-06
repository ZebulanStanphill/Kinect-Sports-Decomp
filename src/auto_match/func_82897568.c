typedef struct VT_82897568 {
  void *s0, *s1, *s2;
  void (*init)(void *);
} VT_82897568;

typedef struct Src_82897568 {
  int a, b;
  unsigned int count;
} Src_82897568;

typedef struct Obj_82897568 {
  VT_82897568 *vt;
  int f4;
  int *data;
  int f0c;
  Src_82897568 *src;
} Obj_82897568;

extern void *fn_8265CA60(unsigned int);

void fn_82897568(Obj_82897568 *o, Src_82897568 *src, int arg)
{
  unsigned int n;
  unsigned int sz;
  unsigned int i;

  o->src = src;
  o->f4 = arg;
  n = src->count;
  if (n != 0) {
    sz = n * 4;
    if (n > 0x3fffffff) {
      sz = 0xffffffff;
    }
    o->data = (int *)fn_8265CA60(sz);
  } else {
    o->data = 0;
  }
  if (o->data != 0 && n != 0) {
    for (i = 0; i < n; i++) {
      o->data[i] = 0;
    }
  }
  o->vt->init(o);
}
