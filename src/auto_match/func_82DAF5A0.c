struct Child_82DAF5A0;
typedef struct { int f[4]; void (*f10)(void *, void *); } VTA_82DAF5A0;
typedef struct { VTA_82DAF5A0 *vt; } Svc_82DAF5A0;
typedef struct { int f[5]; void (*f14)(struct Child_82DAF5A0 *); void (*f18)(struct Child_82DAF5A0 *); } VTC_82DAF5A0;
typedef struct Child_82DAF5A0 { VTC_82DAF5A0 *vt; int pad[9]; unsigned state; } Child_82DAF5A0;
typedef struct { int pad[2]; Child_82DAF5A0 *child; } Obj_82DAF5A0;
extern Svc_82DAF5A0 *fn_82D839C0(Obj_82DAF5A0 *);
extern void fn_82D02610(int);

void fn_82DAF5A0(Obj_82DAF5A0 *o)
{
  if (fn_82D839C0(o) != 0) {
    int n = 10;
    unsigned s = o->child->state;
    while (s != 0 && 0 < n--) {
      Svc_82DAF5A0 *svc = fn_82D839C0(o);
      svc->vt->f10(svc, o);
      fn_82D02610(0);
      s = o->child->state;
      if (s == 0 || s == 2) o->child->vt->f14(o->child);
      s = o->child->state;
      if (s == 0 || s == 3) o->child->vt->f18(o->child);
      s = o->child->state;
    }
  }
}
