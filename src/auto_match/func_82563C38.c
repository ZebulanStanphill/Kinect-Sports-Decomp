typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82CE6010();
extern unsigned int lbl_821962C0;
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorConditionalSelect();


void fn_82563C38(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int in_register_00010430;
  unsigned int in_register_00010434;
  unsigned int in_register_00010438;
  unsigned int in_vr67;
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [48];
  unsigned char auStack_30 [48];
  
  puVar1 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  fn_82CE6010(auStack_60,0xffffffff82196750);
  (**(int (***)())(**(int **)(param_1 + 0x10) + 0x1c))
            ((double)ltcg_pool_0_0f,*(int **)(param_1 + 0x10),auStack_60);
  puVar1 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  vectorConditionalSelect(in_vs32,in_vs45,in_vs42);
  vectorConditionalSelect(in_vs44,in_vs43,in_vs41);
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_00010430;
  puVar1[1] = in_register_00010434;
  puVar1[2] = in_register_00010438;
  puVar1[3] = in_vr67;
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  return;
}

