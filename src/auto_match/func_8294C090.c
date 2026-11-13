extern int fn_8294C018();
extern int fn_82963370();
extern int fn_82963450();
extern int fn_829636A8();


unsigned __int64 fn_8294C090(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  uVar3 = (unsigned __int64)uVar1 & 0xfffff;
  if ((((uVar3 == (*(unsigned int **)(param_1 + 0x104))[3]) &&
       (iVar4 = fn_82963370(*(unsigned int *)(param_1 + 0x104)), iVar4 == 0)) &&
      ((iVar4 = fn_829636A8(*(unsigned int *)(param_1 + 0x104)), iVar4 == 0 ||
       (iVar4 = fn_82963450(*(unsigned int *)(param_1 + 0x104)), iVar4 != 0)))) &&
     ((uVar3 < 5 && ((uVar1 & 0xfffff) != 0)))) {
    uVar8 = 0;
    do {
      uVar5 = 0;
      uVar6 = (uVar3 - uVar8) - 1;
      if (uVar6 != 0) {
        lVar7 = 0;
        do {
          piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + (int)lVar7);
          if (*(unsigned int *)(*(int *)(piVar2[1] * 4 + *(int *)(param_1 + 0x14)) + 0x10) <
              *(unsigned int *)(*(int *)(*piVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x10)) {
            fn_8294C018(*(unsigned int *)(param_1 + 0x104));
          }
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 4;
        } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < uVar3);
    return 0;
  }
  return 1;
}

