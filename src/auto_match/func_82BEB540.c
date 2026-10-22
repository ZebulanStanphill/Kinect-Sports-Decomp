typedef void (*fnptr)(void *);

struct vobj {
  struct { void (*dtor)(struct vobj *, int); } *vt;
};

struct obj {
  void *vt;
  int pad1[9];
  char sub[0x10];
  void *handle;
  int pad2[4];
  struct vobj *child;
};

extern void fn_82BE54C0(void *p);
extern void fn_82BEAED8(struct obj *p);
extern void fn_82BEB7A8(struct obj *p);
extern char lbl_820EAB18[];
extern fnptr lbl_831751CC;

void fn_82BEB540(struct obj *o)
{
  o->vt = lbl_820EAB18;
  fn_82BEAED8(o);
  if (o->handle != 0) {
    lbl_831751CC(o->handle);
    o->handle = 0;
  }
  if (o->child != 0) {
    o->child->vt->dtor(o->child, 1);
    o->child = 0;
  }
  fn_82BE54C0(o->sub);
  fn_82BEB7A8(o);
}
