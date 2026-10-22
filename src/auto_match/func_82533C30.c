typedef void *(*vfn)();

extern int *lbl_8327F850;
extern void fn_82230300(void *p, int a, int b);
extern void fn_82240378(void *a, void *b);
extern void fn_82864898(void *p);
extern void fn_828648B8(void *a, void *b);
extern unsigned int lbl_821C3F6C;
extern unsigned int lbl_821C3FC4;

void fn_82533C30(void **param_1)
{
  char auStack_80[32];
  char auStack_60[32];
  char auStack_40[40];
  void *uVar1;

  *param_1 = &lbl_821C3FC4;
  uVar1 = (*(vfn *)(*(int *)param_1[2] + 0x44))(auStack_40, param_1[2]);
  fn_828648B8(auStack_80, uVar1);
  fn_82240378(auStack_60, auStack_80);
  fn_82230300(auStack_80, 1, 0);
  fn_82864898(auStack_40);
  (*(vfn *)(*lbl_8327F850 + 0x2c))(lbl_8327F850, param_1 + 2);
  fn_82230300(auStack_60, 1, 0);
  *param_1 = &lbl_821C3F6C;
}
