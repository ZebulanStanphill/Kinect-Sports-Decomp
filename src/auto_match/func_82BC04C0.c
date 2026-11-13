extern int fn_82BC0088();
extern int fn_82F68CC0();


void fn_82BC04C0(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar2;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  
  uVar3 = (*(int (**)())param_1[4])(param_2);
  iVar1 = *(int *)((*param_1 - 1U & uVar3) * 4 + param_1[2]);
  if ((iVar1 != 0) && (uVar8 = 0, *(int *)(iVar1 + 4) != 0)) {
    iVar7 = 0;
    do {
      if ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 4)) {
        puVar4 = (unsigned int *)(*(int *)(iVar1 + 8) + iVar7);
      }
      else {
        puVar4 = (unsigned int *)fn_82BC0088(iVar1,uVar8);
      }
      iVar5 = (*(int (**)())param_1[3])(*puVar4,param_2);
      uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 4);
      if (iVar5 == 0) {
        if (uVar6 <= (uVar8 & 0xffffffff)) {
          return;
        }
        *(int *)(iVar1 + 4) = (int)(uVar6 - 1);
        lVar2 = (uVar8 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(iVar1 + 8);
        fn_82F68CC0(lVar2,lVar2 + 4,((uVar6 - 1) - uVar8 & 0x3fffffff) << 2);
        return;
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
    } while ((uVar8 & 0xffffffff) < uVar6);
  }
  return;
}

