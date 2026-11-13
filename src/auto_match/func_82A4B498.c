typedef unsigned char bool;
#define true 1
extern int fn_82A4B0D8();
extern int fn_82A59DB0();
extern int fn_82A5CC60();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82A4B498(__int64 param_1,unsigned int param_2)

{
  bool bVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  char in_RESERVE;
  
  iVar5 = (int)param_1;
  fn_82A59DB0(*(unsigned int *)(iVar5 + 0x48),param_2 & 1);
  lVar9 = param_1 + 0x1c;
  (**(int (***)())(*(int *)(iVar5 + 0x1c) + 8))(lVar9);
  uVar6 = fn_82A5CC60(*(unsigned int *)(iVar5 + 0x4c));
  iVar7 = (int)uVar6;
  if (-1 < iVar7) {
    uVar6 = fn_82A4B0D8(param_1,((param_2 & 1) == 0) + '\x01',0);
    iVar7 = (int)uVar6;
    if (-1 < iVar7) goto LAB_82a4b568;
  }
  bVar1 = iVar7 == 0;
  param_1 = param_1 + 0x40;
  do {
    puVar8 = (unsigned int *)param_1;
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)uVar2,0,param_1);
        *puVar8 = uVar4;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar6,0,param_1);
      *puVar8 = uVar4;
      bVar1 = true;
    }
  } while (!bVar1);
  if ((-1 < (int)uVar2) && (piVar3 = *(int **)(iVar5 + 0x50), piVar3 != (int *)0x0)) {
    (**(int (***)())(*piVar3 + 8))(piVar3,uVar6);
  }
LAB_82a4b568:
  (**(int (***)())(*(int *)lVar9 + 0x14))(lVar9);
  return 0;
}

