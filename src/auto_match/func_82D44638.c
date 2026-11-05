typedef struct Sub_82D44638 { struct { void *f0; unsigned char *(*f4)(void *, struct Sub_82D44638 *, int, int, int, int, int); } *vt; } Sub_82D44638;
typedef struct { char pad[0xc]; Sub_82D44638 sub; } Item_82D44638;
typedef struct { char pad[0x24]; Item_82D44638 **items; int count; } Obj_82D44638;
unsigned char *fn_82D44638(unsigned char *out, Obj_82D44638 *o, int p3, int p4, int p5, int p6, int p7)
{
  char tmp[16];
  int i;
  for (i = o->count - 1; i >= 0; i--) {
    Item_82D44638 *it = o->items[i];
    unsigned char *r = it->sub.vt->f4(tmp, &it->sub, p3, p4, p5, p6, p7);
    if (*r == 0) { *out = 0; return out; }
  }
  *out = 1;
  return out;
}