extern void *fn_8267B890(int, unsigned int, int);
extern void fn_8267BE38(void *);
extern void *memcpy(void *, const void *, unsigned int);

typedef struct Desc_8277B540 { int x; unsigned int elem; } Desc_8277B540;
typedef struct Vec_8277B540 {
  unsigned int minCap;
  unsigned int cap;
  void *data;
  Desc_8277B540 *desc;
  int alloc;
} Vec_8277B540;

void fn_8277B540(Vec_8277B540 *v, unsigned int n, unsigned char exact)
{
  unsigned int cap = v->cap;
  void *p;
  if (n != cap) {
    if (v->desc->x != 0) {
      if (n < v->minCap) {
        n = v->minCap;
      }
      if (n > cap || (exact != 0 && cap != n)) {
        if (n != 0) {
          p = fn_8267B890(v->alloc, v->desc->elem * n, 0);
        } else {
          p = 0;
        }
        if (v->data != 0) {
          if (p != 0) {
            memcpy(p, v->data, v->desc->elem * v->minCap);
          }
          fn_8267BE38(v->data);
        }
        v->cap = n;
        v->data = p;
      }
    }
  }
}
