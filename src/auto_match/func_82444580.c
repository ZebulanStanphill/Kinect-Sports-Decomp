typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern unsigned int *auStack_80;
extern unsigned int fStack_30;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern int fn_8243D2D8();
extern int fn_824451C8();
extern int fn_82445810();
extern int fn_82445DD0();
extern int fn_82453B80();
extern int fn_82526C70();
extern unsigned int lbl_821B9BC8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831E4E38;
extern unsigned int lbl_8329EA20;
extern unsigned int uStack_2c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern V16 vectorConditionalSelect();


void fn_82444580(int param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int *puVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_80 [16];
  unsigned int uStack_70;
  float fStack_6c;
  float fStack_68;
  struct { unsigned int first; float second; } stack_pair_60;

  float fStack_58;
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [16];
  float fStack_30;
  unsigned char uStack_2c;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if ((*(char *)(iVar2 + 0x2c) == '\0') || (*(int *)(iVar2 + 0xd4) != 0)) {
    if (*(char *)(iVar2 + 0x2c) == '\0') {
      iVar2 = fn_82445DD0(param_1,param_2,0);
      if (iVar2 == 0) {
        return;
      }
      puVar3 = (unsigned int *)(*(int *)(param_1 + 4) + 8);
      if (0xf < *(unsigned int *)(*(int *)(param_1 + 4) + 0x1c)) {
        puVar3 = (unsigned int *)*puVar3;
      }
      fn_82526C70(&ppuStack_50,0x20,0xffffffff821b0c70,puVar3,0xffffffff821b9a08);
      stack_pair_60.first = lbl_831E4E38;
      fStack_58 = ltcg_pool_0_0f;
      uVar4 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x24);
      puVar3 = (unsigned int *)((unsigned int)(&lbl_8329EA20 + in_r0) & 0xfffffff0);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
      fStack_68 = ltcg_pool_0_0f;
      fStack_6c = ltcg_pool_0_0f;
      uStack_70 = lbl_831E4E38;
      stack_pair_60.second = ltcg_pool_0_0f;
      puVar1 = (unsigned int *)((int)&uStack_70 + in_r0 & 0xfffffff0);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      fn_8243D2D8(uVar4,&ppuStack_50,&uStack_70,&stack_pair_60.first);
      return;
    }
    if (*(int *)(iVar2 + 0xd4) == 0) {
      return;
    }
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x174) + 0x5c) + 0x1d4) == -1) {
      uVar4 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_2 + 0x174) + 0x5c);
      uVar4 = *(unsigned int *)(*(int *)(iVar2 + 0x1d4) * 4 + *(int *)(iVar2 + 0x1c4));
    }
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    fStack_30 = ltcg_pool_0_0f;
    uStack_4c = 0;
    ppuStack_50 = &lbl_821B9BC8;
    uStack_48 = 3;
    uStack_44 = 0;
    uStack_2c = 0;
    iVar2 = fn_82453B80(uVar4,2,&ppuStack_50);
    if (iVar2 == 0) {
      return;
    }
    *(unsigned char *)(*(int *)(param_1 + 0x14) + 0x2c) = 0;
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    puVar1 = (unsigned int *)(*(int *)(param_1 + 0x14) + 0x80U & 0xfffffff0);
    *puVar1 = *puVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    auStack_80[0] = uStack_2c;
  }
  else {
    if (*(float *)(iVar2 + 0x3c) == ltcg_pool_0_0f) {
      fn_82445810();
      return;
    }
    iVar2 = fn_82445DD0(param_1,param_2,auStack_80);
    if (iVar2 == 0) {
      return;
    }
    puVar3 = (unsigned int *)((unsigned int)(&lbl_8329EA20 + in_r0) & 0xfffffff0);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
    puVar1 = (unsigned int *)(*(int *)(param_1 + 0x14) + 0x80U & 0xfffffff0);
    *puVar1 = *puVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(unsigned char *)(*(int *)(param_1 + 0x14) + 0x2c) = 0;
  }
  fn_824451C8(param_1,param_2,auStack_80[0]);
  return;
}

