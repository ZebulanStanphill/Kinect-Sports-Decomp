typedef struct { char pad[0x50]; int f50; } Item_8285B258;
typedef struct {
  char pad0[0x34];
  void **arr1;
  unsigned short n1;
  unsigned short pad3a;
  unsigned short n;
  unsigned short pad3e;
  Item_8285B258 **arr2;
  unsigned short n2;
  char pad46[0xe];
  unsigned int f54;
  int f58;
  char pad5c[8];
  int base;
} Obj_8285B258;
extern void fn_8280ACD8(void *);
extern void fn_8285B1F0(void *, int);

void fn_8285B258(Obj_8285B258 *o, int off)
{
  char *r = (char *)(o->base + off);
  char *buf;
  int i;
  int p;
  unsigned int f54;
  buf = r + 0xb0;
  fn_8280ACD8(r + 0x10);
  fn_8280ACD8(r + 0x50);
  f54 = o->f54;
  *(char **)(r + 0x9c) = buf;
  *(int *)(r + 0x94) = 0;
  *(unsigned char *)(r + 0x98) = 0;
  *(unsigned int *)(r + 0x90) = f54;
  *(unsigned char *)(r + 0x99) = 0;
  p = (int)buf + o->n * 0xc;
  *(int *)(r + 0xa0) = p;
  p = p + (o->n + 1) * 0x10;
  *(int *)(r + 0xa4) = p;
  p = p + (o->n + 1) * 8;
  *(int *)(r + 0xa8) = p;
  *(int *)(r + 0xac) = o->f58 + p;
  for (i = 0; i < o->n1; i++) {
    fn_8285B1F0(o->arr1[i], off);
  }
  for (i = 0; i < o->n2; i++) {
    int *z = (int *)(o->arr2[i]->f50 + off);
    z[0] = 0;
    z[1] = 0;
  }
}
