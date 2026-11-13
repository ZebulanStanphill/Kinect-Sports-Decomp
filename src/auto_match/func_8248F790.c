extern int fn_8234F4F0();
extern int fn_8234FC08();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8265CA20();


unsigned __int64 fn_8248F790(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  
  iVar1 = *(int *)(*param_1 + 4);
  if (iVar1 != 0x5a) {
    if (iVar1 != 0x9b) {
      return 4;
    }
    iVar1 = *(int *)(param_2 + 0xd54);
    if (*(int *)(iVar1 + 4) == 0) {
      puVar4 = (unsigned int *)(*param_1 + 8);
      if ((puVar4 != (unsigned int *)0x0) &&
         (uVar6 = (unsigned __int64)*puVar4, uVar6 != (uVar6 - 1) + (unsigned __int64)(uVar6 == 0))) {
        uVar6 = fn_8251F720(puVar4,0);
        iVar2 = *(int *)(iVar1 + 0x14);
        if (iVar2 != 0) {
          fn_8234FC08(iVar2);
          fn_8265CA20(iVar2);
        }
        uVar3 = fn_8265C9E0(0x440);
        if ((uVar3 & 0xffffffff) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = fn_8234F4F0(uVar3,uVar6,*(unsigned int *)(iVar1 + 0x10));
        }
        *(unsigned int *)(iVar1 + 0x14) = uVar5;
        if ((uVar6 & 0xffffffff) != 0) {
          fn_8251FA58(uVar6);
        }
        *(unsigned int *)(iVar1 + 4) = 1;
        return 0;
      }
    }
    else {
      if ((*(int *)(iVar1 + 0x18) == 0) && (*(int *)(iVar1 + 0x14) != 0)) {
        return 0;
      }
      *(unsigned int *)(iVar1 + 4) = 0;
    }
  }
  return 3;
}

