extern int fn_82B7BBD8();
extern int fn_82BA02A8();


void fn_82BBC2C0(int param_1)

{
  int lVar1;
  int *piVar2;
  int iVar3;
  
  fn_82BA02A8(*(unsigned int *)(param_1 + 0x754),"Interpolator Declarations:\n");
  lVar1 = 0;
  piVar2 = (int *)(param_1 + 0x390);
  iVar3 = param_1 + 0x650;
  do {
    if (((unsigned int)*piVar2 != 0) && (piVar2[0x10] != 0x12)) {
      fn_82B7BBD8(*(unsigned int *)(param_1 + 0x754),lVar1,piVar2[0x10],piVar2[0x20],
                   *(unsigned int *)(*piVar2 + 0x30),iVar3 + -0x100,iVar3,iVar3 + -0x200);
    }
    lVar1 = lVar1 + 1;
    iVar3 = iVar3 + 0x10;
    piVar2 = piVar2 + 1;
  } while ((int)lVar1 < 0x10);
  return;
}

