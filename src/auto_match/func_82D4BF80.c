#define TBLr 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82DCC3F0();
extern unsigned int iStack_e4;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82D4BF80(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int auStack_f0 [3];
  int iStack_e4;
  unsigned char auStack_e0 [64];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcMopp";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  auStack_f0[0] = *(unsigned int *)(param_1 + 0x34);
  uStack_4c = *(unsigned int *)(param_1 + 0x1c);
  uStack_50 = *(unsigned int *)(param_1 + 0x18);
  auStack_f0[2] = *(unsigned int *)(param_3 + 8);
  lVar4 = 0;
  puVar1 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  uStack_60 = *puVar1;
  uStack_5c = puVar1[1];
  uStack_58 = puVar1[2];
  uStack_54 = puVar1[3];
  uStack_a0 = 0;
  uStack_9c = 0;
  auStack_f0[1] = 0;
  if (auStack_f0[0] != 0) {
    lVar4 = (unsigned __int64)auStack_f0[0] + 0x10;
  }
  iStack_e4 = param_3;
  uStack_48 = uStack_4c;
  fn_82DCC3F0(auStack_e0,lVar4,auStack_70,param_2,auStack_f0,param_4);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

