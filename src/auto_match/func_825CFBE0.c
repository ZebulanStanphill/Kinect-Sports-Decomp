#define true 1
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82545810();
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_8262F8D8();
extern int fn_8262FEC8();


void fn_825CFBE0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_82545950(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82545A90(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_82545950(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_82545A90(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_82545810(param_1 + 0x30);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  while( true ) {
    if (iVar4 == 0) {
      *(unsigned int *)(param_1 + 0x50) = 0;
      return;
    }
    iVar1 = *(int *)(iVar4 + 0x18);
    if (*(int *)(iVar4 + 0xc) != 0) {
      fn_8251FA58();
      *(unsigned int *)(iVar4 + 0xc) = 0;
    }
    if (*(int *)(iVar4 + 0x10) != 0) {
      fn_8251FA58();
      *(unsigned int *)(iVar4 + 0x10) = 0;
    }
    iVar2 = *(int *)(iVar4 + 4);
    if (iVar2 != 0) break;
    if (*(int *)(iVar4 + 8) != 0) {
      fn_8262FEC8();
      *(unsigned int *)(iVar4 + 8) = 0;
    }
    *(unsigned int *)(iVar4 + 0x18) = 0;
    fn_82522ED8(iVar4);
    iVar4 = iVar1;
  }
  uVar3 = *(unsigned int *)(iVar2 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
  fn_8262F8D8(iVar2,10,0,uVar3,0,uVar3,*(unsigned int *)(iVar2 + 0x1c) & 0x3fffffc,0);
}

