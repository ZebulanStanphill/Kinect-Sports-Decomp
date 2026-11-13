extern int fn_8251FA58();
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_82552B50();
extern int fn_8262F8D8();
extern int fn_8262FEC8();
extern unsigned int lbl_821C6058;


void fn_82582FE0(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  *param_1 = &lbl_821C6058;
  if (param_1[0x3b] != 0) {
    fn_8262FEC8();
    param_1[0x3b] = 0;
  }
  iVar1 = param_1[0x26];
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
    fn_8262F8D8(iVar1,10,0,uVar2,0,uVar2,*(unsigned int *)(iVar1 + 0x1c) & 0x3fffffc,0);
  }
  if (param_1[0x29] != 0) {
    fn_82545950(param_1 + 0x29);
  }
  if (param_1[0x2a] != 0) {
    fn_82545A90(param_1 + 0x2a);
  }
  if (param_1[0x25] != 0) {
    fn_8251FA58();
    param_1[0x25] = 0;
  }
  iVar1 = param_1[0x21];
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
    fn_8262F8D8(iVar1,10,0,uVar2,0,uVar2,*(unsigned int *)(iVar1 + 0x1c) & 0x3fffffc,0);
  }
  if (param_1[0x23] != 0) {
    fn_82545950(param_1 + 0x23);
  }
  if (param_1[0x24] != 0) {
    fn_82545A90(param_1 + 0x24);
  }
  if (*(char *)((int)param_1 + 0x10e) != '\0') {
    fn_82552B50(param_1 + 0x3e,1);
  }
  return;
}

