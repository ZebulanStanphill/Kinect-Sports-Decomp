typedef struct { unsigned __int64 lo, hi; } V16;
#define TBLr 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_68;
extern V16 vectorSubtractFloatingPoint();


char * fn_82D4A0E8(char *param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int in_r0;
  int iVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 *puVar6;
  __int64 lVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = "TtrcConvTransl";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  puVar5 = &uStack_68;
  puVar6 = (unsigned __int64 *)(param_3 + -8);
  lVar7 = 6;
  do {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorSubtractFloatingPoint(in_vs44,in_vs45);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  piVar2 = *(int **)(param_2 + 0x18);
  puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100a0;
  puVar1[1] = in_register_000100a4;
  puVar1[2] = in_register_000100a8;
  puVar1[3] = in_vr10;
  (**(int (***)())(*piVar2 + 0x20))(param_1,piVar2,auStack_60,param_4);
  iVar4 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar4 + -1;
  if (*param_1 != '\0') {
    *(unsigned int *)((iVar4 + 7) * 4 + param_4) = 0;
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  return param_1;
}

