typedef struct Obj Obj;
typedef void (*VFn)(Obj *);
struct Obj {
  VFn *vt;
};
extern Obj *lbl_8327F864;

void fn_82533DE0(void)
{
  Obj *o = lbl_8327F864;
  o->vt[13](o);
}
