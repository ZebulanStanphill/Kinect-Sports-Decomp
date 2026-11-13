extern int fn_82292518();
extern int fn_822933E8();
extern int fn_8265CA20();
extern int fn_82864898();
extern int fn_82864E90();


/* WARNING: Removing unreachable block (ram,0x822926dc) */

void fn_82292670(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_82292518();
  piVar3 = (int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x48)) {
    piVar2 = (int *)fn_82864E90();
    piVar2 = (int *)(**(int (***)())(*piVar2 + 0x18))();
    (**(int (***)())(*piVar2 + 0x10))(piVar2,piVar3);
  }
  iVar1 = *piVar3;
  if (iVar1 != *(int *)(param_1 + 0x48)) {
    fn_822933E8(iVar1,*(unsigned int *)(param_1 + 0x48));
    *(int *)(param_1 + 0x48) = iVar1;
  }
  if (*piVar3 != 0) {
    fn_822933E8(*piVar3,*(unsigned int *)(param_1 + 0x48));
    fn_8265CA20(*piVar3);
  }
  *piVar3 = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_8265CA20();
  }
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_8265CA20();
  }
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  fn_82864898(param_1);
  return;
}

