extern void fn_822337D0(void *, void *);
extern void *fn_8265C9E0(unsigned int);
extern void fn_8289D6D0(void *, int);
extern void fn_8289D7E8(void *, int);
extern void *lbl_82196DA8[];
extern void *lbl_82196E00[];
extern void *lbl_82197080[];
extern void *lbl_82197100[];

typedef struct Obj_82238B78 {
  void *vt; char pad[0x1e8]; void *vt1ec; char pad1[0x50]; void *vt240; char pad2[0x50]; void *vt294; char pad3[0x50]; void *vt2e8; char pad4[0x4c];
} Obj_82238B78;

Obj_82238B78 *fn_82238B78(void *param_1)
{
  Obj_82238B78 *p = (Obj_82238B78 *)fn_8265C9E0(0x33c);
  if (p != 0) {
    fn_822337D0(p, param_1);
    p->vt = lbl_82196E00;
    fn_8289D7E8(&p->vt1ec, 6);
    p->vt1ec = lbl_82196DA8;
    fn_8289D6D0(&p->vt240, 0);
    p->vt240 = lbl_82197080;
    fn_8289D6D0(&p->vt294, 0);
    p->vt294 = lbl_82197080;
    fn_8289D6D0(&p->vt2e8, 4);
    p->vt2e8 = lbl_82197100;
    return p;
  }
  return 0;
}
