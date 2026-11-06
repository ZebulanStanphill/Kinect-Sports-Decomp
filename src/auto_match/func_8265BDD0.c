extern unsigned int strlen(const char *);
extern char lbl_820014D4[];
extern void *fn_82F68BF0(unsigned int);
extern void fn_82F664B0(void *, unsigned int, const char *);
typedef struct Obj_8265BDD0 {
  void *vtbl;
  void *buf;
  unsigned char owned;
} Obj_8265BDD0;
Obj_8265BDD0 *fn_8265BDD0(Obj_8265BDD0 *o, const char **src)
{
  const char *s;
  unsigned int n;
  void *p;
  o->buf = 0;
  o->vtbl = lbl_820014D4;
  o->owned = 0;
  s = *src;
  if (s != 0) {
    n = strlen(s) + 1;
    p = fn_82F68BF0(n);
    o->buf = p;
    if (p != 0) {
      fn_82F664B0(p, n, s);
      o->owned = 1;
    }
  }
  return o;
}
