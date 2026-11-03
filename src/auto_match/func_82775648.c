typedef struct Dev_82775648 Dev_82775648;
typedef struct {
  int pad[10];
  void (*f28)(Dev_82775648 *, int);
  int pad2[0xf];
  void (*f68)(Dev_82775648 *, int, unsigned, int, int, int, int, void *);
} VT_82775648;
struct Dev_82775648 { VT_82775648 *vt; };
typedef struct { int pad0[3]; Dev_82775648 *dev; } Holder_82775648;
typedef struct { int pad[5]; unsigned kind; int f18; int pad1c; int f20; int f24; int pad28[3]; } Ent_82775648;
typedef struct { Ent_82775648 **tab; int idx; } Iter_82775648;
typedef struct { int pad0; int f4; unsigned f8; } Y_82775648;
typedef struct { int pad0[2]; Y_82775648 *y; unsigned owner; } X_82775648;
typedef struct { int ref; unsigned char b; } Cur_82775648;

extern void fn_826A9420(Iter_82775648 *, void *);
extern unsigned char fn_826A8E58(Iter_82775648 *, void *);
extern void fn_826A93B0(Iter_82775648 *);

void fn_82775648(unsigned param_1, X_82775648 *param_2, Holder_82775648 **param_3, int param_4, int param_5)
{
  Y_82775648 *y;
  Dev_82775648 *dev;
  Iter_82775648 it;
  int endp[2];
  Cur_82775648 cur;
  unsigned n;
  Ent_82775648 *e;

  if (param_2 != 0 && param_2->owner == param_1) {
    y = param_2->y;
    if (y != 0 && y->f8 > 0) {
      dev = (*param_3)->dev;
      dev->vt->f28(dev, param_5);
      cur.ref = (int)y + 0x1c;
      cur.b = 0;
      n = 0;
      endp[0] = 0;
      endp[1] = 0;
      do {
        fn_826A9420(&it, y);
        while (fn_826A8E58(&it, endp) == 0) {
          e = (Ent_82775648 *)((char *)*it.tab + it.idx * 0x20);
          if (e->kind == n) {
            dev->vt->f68(dev, y->f4, y->f8, e->f18, e->f20, e->f24, param_4, &cur);
          }
          fn_826A93B0(&it);
        }
        n = n + 1;
      } while (n < 2);
    }
  }
}
