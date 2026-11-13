extern int fn_8262FBD8();
extern int fn_8262FEC8();
extern unsigned int lbl_821BEA4C;


void fn_8248B168(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[3];
  *param_1 = &lbl_821BEA4C;
  fn_8262FBD8(iVar1,*(unsigned int *)(iVar1 + 0x20) & 0xfffff000,*(unsigned int *)(iVar1 + 0x30) & 0xfffff000)
  ;
  fn_8262FEC8(param_1[3]);
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    fn_8262FBD8(iVar1,*(unsigned int *)(iVar1 + 0x20) & 0xfffff000,
                      *(unsigned int *)(iVar1 + 0x30) & 0xfffff000);
    fn_8262FEC8(param_1[6]);
  }
  fn_8262FEC8(param_1[1]);
  if (param_1[2] != 0) {
    fn_8262FEC8(param_1[2]);
  }
  return;
}

