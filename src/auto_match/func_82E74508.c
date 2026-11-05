struct Iface_82E74508;
typedef struct { void *f0; void *f4; void (*release)(struct Iface_82E74508 *); } IfaceVt_82E74508;
typedef struct Iface_82E74508 { IfaceVt_82E74508 *vt; } Iface_82E74508;
typedef struct { void *vt; char pad[0x3c]; Iface_82E74508 *iface; char sub[1]; } Obj_82E74508;

extern char lbl_8215EF74[];
extern int fn_82E58A90(void *);
extern int fn_82E2D9C0(void *);
extern int fn_82E73028(void *);
extern int fn_82E73C58(void *, int);

void fn_82E74508(Obj_82E74508 *p)
{
  p->vt = lbl_8215EF74;
  if (p->iface != 0) {
    p->iface->vt->release(p->iface);
    p->iface = 0;
  }
  while (fn_82E73C58(p, 0) >= 0)
    ;
  fn_82E58A90(p->sub);
  fn_82E2D9C0(p->sub);
  fn_82E73028(p);
}
