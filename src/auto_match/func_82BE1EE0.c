extern int fn_82BE5240();
extern int fn_82BE5320();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();
extern char lbl_82196582[];

typedef struct Obj_82BE1EE0 { struct { void (*f0)(struct Obj_82BE1EE0 *, int); } *vt; } Obj_82BE1EE0;

unsigned int fn_82BE1EE0(int param_1, Obj_82BE1EE0 *param_2)
{
  int iVar3;

  if (param_2 != 0) {
    if (param_2 == *(Obj_82BE1EE0 **)(param_1 + 0x180)) {
      *(int *)(param_1 + 0x180) = 0;
    }
    iVar3 = param_1 + 0x170;
    fn_82BE5340(iVar3);
    while (*(int *)(param_1 + 0x178) != 0) {
      if ((Obj_82BE1EE0 *)fn_82BE5378(iVar3) == param_2) {
        fn_82BE5398(iVar3, fn_82BE5320(iVar3, fn_82BE5378(iVar3)), 1);
        param_2->vt->f0(param_2, 1);
        return 0;
      }
      fn_82BE5350(iVar3);
    }
  }
  return fn_82BE5240(param_1, 300, lbl_82196582);
}
