extern int fn_82F68B74();
extern int fn_82F69348();
extern int fn_82F69390();
extern int fn_82F69420();
extern int fn_82F69860();
extern int fn_82F698B8();
extern int fn_82F6FA38();
extern int fn_82F80D88();
extern int fn_82F812C0();


unsigned __int64 fn_82F694D8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  uVar1 = *(unsigned int *)(**(int **)((int)param_4 + 4) + -4);
  uVar7 = (unsigned __int64)uVar1;
  if ((*(int *)(uVar1 + 0xc) != 0) && (iVar6 = *(int *)((int)param_2 + 4), iVar6 != 0)) {
    param_2 = (unsigned __int64)*(unsigned int *)(iVar6 + 4);
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  piVar4 = (int *)fn_82F68B74(param_1,param_2);
  iVar6 = (int)uVar7;
  if ((piVar4[1] & 0x66U) == 0) {
    if (*(int *)(iVar6 + 0xc) != 0) {
      if ((((*piVar4 == -0x1f928c9d) && (2 < (unsigned int)piVar4[4])) && (0x19930522 < (unsigned int)piVar4[5])) &&
         (*(int (***)())(piVar4[7] + 8) != (int (**)())0x0)) {
        uVar8 = (**(int (***)())(piVar4[7] + 8))(piVar4,param_2,param_3,param_4,uVar7);
        return uVar8;
      }
      fn_82F80D88(piVar4,param_2,param_3,param_4,uVar7,uVar10,uVar8,uVar9);
    }
  }
  else if ((*(int *)(iVar6 + 4) != 0) && ((int)uVar8 == 0)) {
    puVar3 = (unsigned int *)param_4;
    if (((piVar4[1] & 0x20U) == 0) || (iVar5 = fn_82F69348(), iVar5 == 0)) {
      fn_82F69420(param_2,param_4,uVar7);
      if (((*(int *)(iVar6 + 0xc) != 0) && (iVar6 = *(int *)(puVar3[2] + 4), iVar6 != 0)) &&
         (puVar2 = *(unsigned int **)(iVar6 + 8), puVar2 != (unsigned int *)0x0)) {
        fn_82F698B8(puVar2);
        iVar5 = fn_82F69860(*puVar2);
        if ((iVar5 != 0) && ((int (**)())puVar2[1] != (int (**)())0x0)) {
          (*(int (**)())puVar2[1])(*puVar2);
          *puVar2 = 0;
        }
        *(unsigned int *)(iVar6 + 8) = 0;
      }
    }
    else {
      iVar6 = fn_82F6FA38();
      if (*(int *)(iVar6 + 0x8c) == 0) {
        fn_82F812C0();
      }
      iVar6 = fn_82F6FA38();
      fn_82F69390(*(unsigned int *)(iVar6 + 0x8c),param_3);
      uVar1 = *puVar3;
      iVar6 = fn_82F6FA38();
      *(unsigned __int64 *)(*(int *)(iVar6 + 0x8c) + 0x30) = (unsigned __int64)uVar1;
      uVar1 = puVar3[1];
      iVar6 = fn_82F6FA38();
      *(unsigned __int64 *)(*(int *)(iVar6 + 0x8c) + 0x38) = (unsigned __int64)uVar1;
      uVar1 = puVar3[2];
      iVar6 = fn_82F6FA38();
      *(unsigned __int64 *)(*(int *)(iVar6 + 0x8c) + 0x40) = (unsigned __int64)uVar1;
      uVar8 = fn_82F69348();
      fn_82F69390(param_3,uVar8);
    }
  }
  return 1;
}

