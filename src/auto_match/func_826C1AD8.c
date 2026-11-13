extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_826A9040();
extern int fn_826BE288();
extern unsigned int lbl_8200612C;
extern unsigned int lbl_8200B5A8;
extern unsigned int lbl_82010118;
extern unsigned int lbl_82012A64;


void fn_826C1AD8(unsigned int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[10];
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82010118;
  if (iVar1 != 0) {
    fn_826BE288(iVar1);
    fn_8267BE38(iVar1);
  }
  if (((*(unsigned char *)(param_1 + 9) & 2) == 0) && (param_1[7] != 0)) {
    fn_826824B0();
  }
  param_1[7] = 0;
  if (((*(unsigned char *)(param_1 + 9) & 1) == 0) && (param_1[8] != 0)) {
    fn_826824B0();
  }
  param_1[8] = 0;
  fn_826A9040(param_1 + 6);
  param_1[4] = &lbl_8200B5A8;
  if (param_1[5] != 0) {
    fn_826824B0();
  }
  *param_1 = &lbl_8200612C;
  return;
}

