#define TBLr 0
extern unsigned int *auStack_c0;
extern int fn_82CE86F0();
extern int fn_82CE9810();
extern int fn_82CE98C8();
extern int fn_82CE9978();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


unsigned __int64 fn_82CE8E78(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned char *pbVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar4;
  int aiStack_d0 [4];
  unsigned char auStack_c0 [112];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = "TtGetNextJob";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  do {
    RtlEnterCriticalSection(param_1);
    iVar7 = -1;
    iVar5 = *(int *)(param_1 + 0x1c);
    if (param_2 != 0) {
      iVar6 = (**(int (***)())(param_1 + 0x24))(param_1,iVar5,param_2,aiStack_d0);
      if (iVar6 == 0) {
        iVar7 = fn_82CE86F0(param_1,auStack_c0);
        if (aiStack_d0[0] == 0) {
          fn_82CE98C8();
        }
        else {
          fn_82CE9810(iVar7 * 0x14 + iVar5 + 0x2c,auStack_c0);
        }
      }
      pbVar3 = (unsigned char *)(param_2 + 1);
      param_2 = 0;
      iVar6 = (unsigned int)*pbVar3 * 2;
      *(short *)(iVar6 + iVar5) = *(short *)(iVar6 + iVar5) + -1;
    }
    uVar4 = fn_82CE9978(param_1,iVar7,iVar5,param_4,param_3);
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

