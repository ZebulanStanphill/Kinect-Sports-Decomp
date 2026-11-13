extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82545950();
extern int fn_82545A90();


void fn_825F6898(int param_1)

{
  int iVar1;
  unsigned int iVar2;
  
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_82545950(param_1 + 8);
  }
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_82545A90(param_1 + 0xc);
  }
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    fn_8251FA58(*(unsigned int *)(param_1 + 0x18));
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    fn_8251FA58(*(unsigned int *)(param_1 + 0x1c));
    *(unsigned int *)(param_1 + 0x1c) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  iVar2 = *(unsigned int *)(param_1 + 4);
  while (iVar2 != 0) {
    iVar1 = *(unsigned int *)(iVar2 + 0x84);
    *(unsigned int *)(iVar2 + 0x84) = 0;
    fn_82522ED8(iVar2);
    iVar2 = iVar1;
  }
  *(unsigned int *)(param_1 + 0x24) = 0;
  fn_82522ED8(param_1);
  return;
}

