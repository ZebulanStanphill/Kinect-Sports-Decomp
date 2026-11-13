extern int fn_8267BE38();
extern int fn_8267C540();
extern int fn_82687270();
extern int fn_8269A608();
extern int fn_826A0A70();
extern int fn_826BF548();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82006850;
extern unsigned int lbl_82006B48;
extern unsigned int lbl_82006B9C;
extern unsigned int lbl_82006BA8;


void fn_826A1370(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  *param_1 = &lbl_82006BA8;
  param_1[3] = &lbl_82006B9C;
  param_1[0x1a] = &lbl_82006B48;
  if (param_1[0x20] != 0) {
    *(unsigned int *)(param_1[0x20] + 4) = 0;
  }
  if (param_1[0x21] != 0) {
    fn_8267BE38();
  }
  fn_826A0A70(param_1 + 0x22);
  puVar1 = (unsigned int *)param_1[0x20];
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
    if ((__int64)((unsigned __int64)uVar2 - 1) < 1) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  if (param_1[0x1f] != 0) {
    fn_82687270();
  }
  fn_826BF548(param_1 + 0x1a);
  *param_1 = &lbl_82006850;
  param_1[3] = &lbl_82005700;
  fn_8267C540(param_1);
  return;
}

