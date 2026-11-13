extern void fn_82A1DD38(void *, void *, unsigned);
typedef struct { char pad[0x692]; unsigned char b[6]; unsigned n; } Obj;
static __forceinline void swap2(unsigned char *p) { unsigned char t = p[0]; p[0] = p[1]; p[1] = t; }
void fn_8245C548(void *src, unsigned len, int unused, Obj *o0)
{
  Obj *o = o0; unsigned n = 5 - o->n;
  if (n >= len) n = len;
  if ((int)n > 0) {
    fn_82A1DD38(&o->b[o->n], src, n);
    o->n = o->n + n;
    swap2(&o->b[0]);
    swap2(&o->b[2]);
  }
}
