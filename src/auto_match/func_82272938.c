extern void fn_82837D98(void *, int, void **);

struct G { char pad[0x24]; void *def; };
extern struct G lbl_8326B370;

struct Obj { char pad[0x1a4]; void *tex; };
struct Src { char pad[0x14]; void *h; };
struct S { struct Obj *obj; int pad[0x35]; struct Src *src; int val; };

void fn_82272938(struct S *s, struct Src *src, int val)
{
  void *t;
  struct Obj *obj = s->obj;
  if (obj == 0) {
    return;
  }
  if (s->src != src) {
    s->src = src;
    if (src != 0) {
      fn_82837D98(src->h, 0, &t);
      obj = s->obj;
    }
    if (src == 0 || t == 0) {
      t = lbl_8326B370.def;
    }
    obj->tex = t;
  }
  s->val = val;
}
