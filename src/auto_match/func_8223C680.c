typedef unsigned int size_t;
extern void *memcpy(void *d, const void *s, size_t n);

typedef struct {
  void *v[3];
  unsigned int size;
} Obj;

void fn_8223C680(Obj *o, int i, const void *src)
{
  unsigned int n = o->size;
  if (n <= 4) {
    void *tmp = 0;
    memcpy(&tmp, src, n);
    o->v[i + 2] = tmp;
  } else {
    memcpy(o->v[i + 2], src, n);
  }
}
