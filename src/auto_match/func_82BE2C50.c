extern void fn_82BE1EE0(void *a, int b);
extern void fn_82BE21A8(void *a, int b);
extern void fn_82BE5230(void *a);
extern void fn_82BE5340(void *a);
extern int fn_82BE5378(void *a);
extern void fn_82BE54C0(void *a);
extern void fn_82BEA1E8(void *a);
extern void fn_82BEB7A8(void *a);
extern char lbl_820E8D68[];
extern char lbl_820E8D6C[];
extern char lbl_820E8D78[];
extern char lbl_820E8D7C[];
extern char lbl_820EBE90[];

void fn_82BE2C50(int *param_1)
{
  int *puVar2;
  int *puVar3;

  param_1[0] = (int)lbl_820E8D6C;
  param_1[10] = (int)lbl_820E8D7C;
  param_1[0xc] = (int)lbl_820E8D68;
  puVar2 = param_1 + 0x5c;
  *(int *)((char *)param_1 + *(int *)(param_1[0xb] + 4) + 0x2c) = (int)lbl_820E8D78;
  param_1[0x60] = 0;
  fn_82BE5340(puVar2);
  while (param_1[0x5e] != 0) {
    fn_82BE1EE0(param_1, fn_82BE5378(puVar2));
  }
  puVar3 = param_1 + 0x58;
  fn_82BE5340(puVar3);
  while (param_1[0x5a] != 0) {
    fn_82BE21A8(param_1, fn_82BE5378(puVar3));
  }
  fn_82BE54C0(puVar2);
  fn_82BE54C0(puVar3);
  param_1[0x48] = (int)lbl_820EBE90;
  fn_82BE5230(param_1 + 0x48);
  param_1[0x42] = (int)lbl_820EBE90;
  fn_82BE5230(param_1 + 0x42);
  fn_82BE5230(param_1 + 0x38);
  fn_82BEA1E8(param_1 + 0x16);
  fn_82BE5230(param_1 + 0xe);
  fn_82BEB7A8(param_1);
}
