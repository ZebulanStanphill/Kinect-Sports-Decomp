#define TBLr 0
extern unsigned int *auStack_80;
extern unsigned int *auStack_f0;
extern int fn_82DCC2C0();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


char * fn_82D4BCB0(char *param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned char auStack_f0 [64];
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned char auStack_80 [16];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcMopp";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uStack_5c = *(unsigned int *)(param_2 + 0x1c);
  puVar1 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uStack_70 = *puVar1;
  uStack_6c = puVar1[1];
  uStack_68 = puVar1[2];
  uStack_64 = puVar1[3];
  uStack_60 = *(unsigned int *)(param_2 + 0x18);
  uStack_b0 = 0;
  uStack_ac = 0;
  lVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x34) + 0x10;
  if ((unsigned __int64)*(unsigned int *)(param_2 + 0x34) == 0) {
    lVar4 = 0;
  }
  uStack_58 = uStack_5c;
  fn_82DCC2C0(param_1,auStack_f0,lVar4,auStack_80,param_3,param_4);
  iVar3 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar3 + -1;
  if (*param_1 != '\0') {
    *(unsigned int *)((iVar3 + 7) * 4 + param_4) = 0;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return param_1;
}

