extern unsigned int *auStack_30;
extern int fn_82319068();
extern int fn_82359C18();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern unsigned int lbl_821AF1C8;
extern unsigned int lbl_821AF790;
extern unsigned int lbl_821C7FB8;


void fn_823155B8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned char auStack_30 [16];
  
  puVar1 = (unsigned int *)param_1[0x174];
  *param_1 = &lbl_821AF790;
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    param_1[0x174] = 0;
  }
  if (param_1[0xdc] != 0) {
    fn_8251FA58();
    param_1[0xdc] = 0;
  }
  fn_82359C18(param_1 + 0x19c);
  param_1[0x19a] = &lbl_821C7FB8;
  if (param_1[0x171] != 0) {
    fn_8251FA58();
    param_1[0x171] = 0;
  }
  if (param_1[0x172] != 0) {
    fn_8251FA58();
    param_1[0x172] = 0;
  }
  fn_82319068(auStack_30,param_1 + 0x16d,*(unsigned int *)param_1[0x16e]);
  fn_8265CA20(param_1[0x16e]);
  *param_1 = &lbl_821AF1C8;
  return;
}

