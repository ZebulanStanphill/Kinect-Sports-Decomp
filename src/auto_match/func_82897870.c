struct Obj_82897870;
typedef struct VT_82897870 {
  int s0;
  void (*f4)(struct Obj_82897870 *, int, int);
  int s8, sc, s10;
  void (*f14)(struct Obj_82897870 *, int);
  struct Obj_82897870 *(*f18)(struct Obj_82897870 *, unsigned int);
} VT_82897870;
typedef struct Obj_82897870 { VT_82897870 *vt; int ref; } Obj_82897870;
typedef struct Fac_82897870 { VT_82897870 *vt; char pad[0x38]; int lim; } Fac_82897870;
extern Fac_82897870 *fn_8288A398(void);
extern int fn_82897F68(int *, Obj_82897870 *);
extern int fn_828E9D90(int);
extern int fn_828E9DA8(int);
extern unsigned int fn_828E9FF8(int, int);
void fn_82897870(int param_1, int param_2, int param_3, int *param_4)
{
  int lim;
  unsigned int cnt;
  Obj_82897870 *obj;
  int t;
  fn_8288A398();
  t = (int)fn_8288A398();
  lim = *(int *)(t + 0x3c);
  if (lim <= fn_828E9DA8(param_3) - fn_828E9D90(param_3)) {
    cnt = fn_828E9FF8(param_3, lim);
  } else {
    cnt = 0;
  }
  obj = 0;
  if (cnt >= 1) {
    Fac_82897870 *f = fn_8288A398();
    obj = ((Obj_82897870 *(*)(Fac_82897870 *, unsigned int))f->vt->f18)(f, cnt);
  }
  obj->vt->f4(obj, param_2, param_3);
  if (param_4 != 0) {
    param_4[1] = 8;
    fn_82897F68(param_4 + 2, 0);
    fn_82897F68(param_4 + 2, obj);
    if (--obj->ref == 0) {
      obj->vt->f14(obj, 1);
    }
  } else if (cnt >= 1) {
    if (--obj->ref == 0) {
      obj->vt->f14(obj, 1);
    }
  }
}
