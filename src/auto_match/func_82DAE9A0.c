#define TBLr 0
extern int fn_82DAD5A8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DAE9A0(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x16c);
  piVar9 = (int *)(param_1 + 0x168);
  uVar4 = uVar7;
  while (uVar7 = uVar7 - 1, -1 < (__int64)uVar7) {
    uVar8 = uVar4;
    if ((int)*(unsigned int *)(param_1 + 0x16c) < (int)uVar4) {
      uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x16c);
      uVar7 = (uVar8 - uVar4) + uVar7;
    }
    iVar6 = (int)((uVar7 & 0xffffffff) << 2);
    uVar4 = uVar8;
    if (*(int *)(*piVar9 + iVar6) != 0) {
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar5 + 4);
      if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
        *puVar1 = "TtpostSimCb";
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
      }
      piVar2 = *(int **)(*piVar9 + iVar6);
      (**(int (***)())(*piVar2 + 4))(piVar2,param_1);
      iVar6 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar6 + 4);
      if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
      }
    }
  }
  fn_82DAD5A8(piVar9);
  return;
}

