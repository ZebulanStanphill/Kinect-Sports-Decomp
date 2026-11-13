struct Obj_82E174C8;
typedef struct VT_82E174C8 {
  int pad[4];
  unsigned int (*f10)(struct Obj_82E174C8 *, int);
} VT_82E174C8;
typedef struct Obj_82E174C8 {
  VT_82E174C8 *vt;
} Obj_82E174C8;
typedef struct Host_82E174C8 {
  char pad[0x1c];
  Obj_82E174C8 *f1c;
} Host_82E174C8;
extern unsigned int fn_82D00450(void *, int, int);

unsigned int fn_82E174C8(Host_82E174C8 *h, int a)
{
  unsigned int r;

  r = fn_82D00450((char *)h + 0xc, a, 0);
  if (r == 0) {
    if (h->f1c != 0) {
      r = h->f1c->vt->f10(h->f1c, a);
    } else {
      r = 0;
    }
  }
  return r;
}
