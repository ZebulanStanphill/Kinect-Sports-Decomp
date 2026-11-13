struct O_82554DA8;
typedef struct VT_82554DA8 { void *pad[2]; void (*rel)(struct O_82554DA8 *); } VT_82554DA8;
typedef struct O_82554DA8 { VT_82554DA8 *vt; } O_82554DA8;
extern int lbl_8327FBB8[];
extern void fn_82522ED8(unsigned);
extern void fn_82555148(unsigned);

int fn_82554DA8(unsigned param_1)
{
  O_82554DA8 **pp = (O_82554DA8 **)&lbl_8327FBB8[-47];
  O_82554DA8 *o = *pp;
  if (o != 0) {
    lbl_8327FBB8[0] = 0;
    o->vt->rel(o);
    *pp = 0;
  }
  fn_82555148(param_1);
  fn_82522ED8(param_1);
  return 1;
}
