typedef unsigned char bool;
extern int fn_82A1BB18();
extern int fn_82A4B0D8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A4B188(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar5 = (int)param_1;
  lVar9 = param_1 + 0x10;
  (**(int (***)())(*(int *)(iVar5 + 0x10) + 8))(lVar9);
  lVar7 = param_1 + 0x34;
  do {
    puVar8 = (unsigned int *)lVar7;
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar7);
        *puVar8 = uVar4;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(param_2,0,lVar7);
      *puVar8 = uVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (-1 < (int)uVar1) {
    if (*(int *)(iVar5 + 0xc) != 0) {
      iVar2 = *(int *)(*(int *)(iVar5 + 0x3c) + 0x10);
      iVar6 = fn_82A1BB18();
      if (iVar6 == iVar2) {
        fn_82A4B0D8(param_1 + -0xc,1,0);
      }
      else {
        (**(int (***)())(*(int *)(iVar5 + -0xc) + 0x3c))();
      }
    }
    piVar3 = *(int **)(iVar5 + 0x44);
    if (piVar3 != (int *)0x0) {
      (**(int (***)())(*piVar3 + 8))(piVar3,param_2);
    }
  }
  (**(int (***)())(*(int *)lVar9 + 0x14))(lVar9);
  return;
}

