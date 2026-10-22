typedef struct Iface Iface;
typedef struct {
  void *f0, *f4, *f8, *fc;
  void (*fn10)(Iface *self, void *arg);
} IfaceVtbl;
struct Iface { IfaceVtbl *vt; };

typedef struct { char pad[0xc]; Iface *obj; } Node;
typedef struct { void *a; void *b; Node *node; } Iter;
typedef struct { int v[4]; } Res;

extern char lbl_831BC7F4[];
extern void fn_83014FE0(Iter *it, void *map, void *key);
extern void fn_83015CF8(Res *r, void *map, Iter *it);

int fn_830154F0(char *self, void *key)
{
  Iter it;
  Res r;

  fn_83014FE0(&it, self + 4, key);
  if (it.node != 0) {
    Iface *p = it.node->obj;
    if (p != 0) {
      p->vt->fn10(p, lbl_831BC7F4);
    }
    fn_83015CF8(&r, self + 4, &it);
  }
  return 1;
}
