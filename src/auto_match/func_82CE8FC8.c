typedef unsigned char bool;
#define true 1
#define false 0
#define TBLr 0
extern int fn_82CE86F0();
extern int fn_82CE9810();
extern int fn_82CE98C8();
extern int fn_82CE9978();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


unsigned __int64 fn_82CE8FC8(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar4;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = "TtGetNextJob";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  bVar3 = true;
  do {
    RtlEnterCriticalSection(param_1);
    iVar6 = -1;
    iVar5 = *(int *)(param_1 + 0x1c);
    if (bVar3) {
      *(short *)(param_2 * 2 + iVar5) = *(short *)(param_2 * 2 + iVar5) + -1;
      iVar6 = fn_82CE86F0(param_1,param_4);
      if (param_3 == 0) {
        fn_82CE98C8();
      }
      else {
        fn_82CE9810(iVar6 * 0x14 + iVar5 + 0x2c);
      }
      bVar3 = false;
    }
    uVar4 = fn_82CE9978(param_1,iVar6,iVar5,param_5,param_4);
  } while ((int)uVar4 == -1);
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  return uVar4;
}

