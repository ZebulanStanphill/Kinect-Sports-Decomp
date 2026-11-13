#define TBLr 0
extern int fn_82DBF878();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DBFB80(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  __int64 lVar7;
  
  piVar6 = (int *)(*(int *)(param_1 + 4) + 0x20);
  uVar5 = (unsigned __int64)*(unsigned short *)(*(int *)(param_1 + 4) + 0x24) - 1;
  if (-1 < (__int64)uVar5) {
    lVar7 = (uVar5 & 0x3fffffff) << 2;
    do {
      if (*(int *)((int)lVar7 + *piVar6) != 0) {
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
          *puVar1 = "TtconBrokenCb";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        }
        piVar2 = *(int **)((int)lVar7 + *piVar6);
        (**(int (***)())(*piVar2 + 0x10))(piVar2,param_1);
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        }
      }
      uVar5 = uVar5 - 1;
      lVar7 = lVar7 + -4;
    } while (-1 < (__int64)uVar5);
  }
  fn_82DBF878(piVar6);
  return;
}

