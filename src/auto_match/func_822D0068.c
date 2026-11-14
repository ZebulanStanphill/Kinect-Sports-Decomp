typedef struct {
  int first;
  void *second;
} Pair_822D0068;

typedef struct {
  unsigned char a[0x5c];
  unsigned char b[0x5c];
} Sub_822D0068;

typedef struct {
  void *vt;
  int a;
  int b;
  Sub_822D0068 sub;
} Obj_822D0068;

extern unsigned char fn_8223AAC0(void *);
extern void fn_822315A0(void *);
extern void XMemSet(void *dst, int value, unsigned int size);
extern void fn_822E37E0(Sub_822D0068 *sub, Pair_822D0068 *ref, unsigned int key);
extern char lbl_821AE598[];

Obj_822D0068 *fn_822D0068(Obj_822D0068 *self, Pair_822D0068 *src, unsigned int *key)
{
  Pair_822D0068 tmp;
  Pair_822D0068 arg;
  Sub_822D0068 *sub;
  void *s;
  int f;
  unsigned int k;

  self->a = 1;
  self->vt = lbl_821AE598;
  self->b = 1;
  sub = &self->sub;
  if (sub != 0) {
    s = src->second;
    f = src->first;
    tmp.first = 0;
    tmp.second = 0;
    if (s != 0 && fn_8223AAC0(s)) {
      tmp.second = s;
      tmp.first = f;
    }
    k = *key;
    XMemSet(sub->a, 0, 0x5c);
    XMemSet(sub->b, 0, 0x5c);
    arg.first = 0;
    arg.second = 0;
    if (tmp.second != 0 && fn_8223AAC0(tmp.second)) {
      arg.second = tmp.second;
      arg.first = tmp.first;
    }
    fn_822E37E0(sub, &arg, k);
    if (tmp.second != 0)
      fn_822315A0(tmp.second);
  }
  return self;
}
