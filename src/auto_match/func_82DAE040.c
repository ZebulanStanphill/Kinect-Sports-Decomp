#define TBLr 0
extern int fn_82DAD5A8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DAE040(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x148) - 1;
  if (-1 < (__int64)uVar6) {
    lVar5 = (uVar6 & 0x3fffffff) << 2;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x144) + (int)lVar5);
      if (piVar2 != (int *)0x0) {
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
          *puVar1 = "TtconRepairedCb";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        }
        (**(int (***)())(*piVar2 + 0x14))(piVar2,param_2);
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        }
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -4;
    } while (-1 < (__int64)uVar6);
  }
  fn_82DAD5A8((int *)(param_1 + 0x144));
  return;
}

