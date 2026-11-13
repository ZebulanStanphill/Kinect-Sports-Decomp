extern void *fn_8265C9E0(unsigned int);
extern void fn_82232B50(void *, void *);
extern void fn_8289D6D0(void *, int);
extern char lbl_82197080[];
extern char lbl_82198094[];

typedef struct Obj_822561F8 {
  void *vtbl;
  char pad4[0x9c8];
  void *vtbl9cc;
  char pad9d0[0x50];
  void *vtbla20;
} Obj_822561F8;

Obj_822561F8 *fn_822561F8(void *param_1)
{
  Obj_822561F8 *o;

  o = (Obj_822561F8 *)fn_8265C9E0(0xa74);
  if (o != 0) {
    fn_82232B50(o, param_1);
    o->vtbl = lbl_82198094;
    fn_8289D6D0(&o->vtbl9cc, 0);
    o->vtbl9cc = lbl_82197080;
    fn_8289D6D0(&o->vtbla20, 0);
    o->vtbla20 = lbl_82197080;
    return o;
  }
  return 0;
}
