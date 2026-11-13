typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82CE68B8();
extern int fn_82D8CD68();
extern int fn_82D99E00();
extern unsigned int uStack_68;
extern V16 vectorAddFloatingPoint();


void fn_82D94138(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [8];
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [24];
  
  uVar3 = (**(int (***)())(*param_1 + 0x14))();
  if (uVar3 == 0) {
    uStack_68 = *(unsigned __int64 *)(param_1 + 0x32);
    puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0xb0 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    vectorAddFloatingPoint(in_vs32,in_vs44);
    puVar1 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010090;
    puVar1[1] = in_register_00010094;
    puVar1[2] = in_register_00010098;
    puVar1[3] = in_vr9;
    vectorAddFloatingPoint(in_vs43,in_vs44);
    puVar1 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000100a0;
    puVar1[1] = in_register_000100a4;
    puVar1[2] = in_register_000100a8;
    puVar1[3] = in_vr10;
    fn_82D8CD68(param_1,auStack_80);
  }
  else if (uVar3 < 3) {
    puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0xb0 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x30) & 0xfffffff0);
    uVar15 = *puVar2;
    uVar16 = puVar2[1];
    uVar17 = puVar2[2];
    uVar18 = puVar2[3];
    puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x34) & 0xfffffff0);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    uVar13 = puVar2[2];
    uVar14 = puVar2[3];
    puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x38) & 0xfffffff0);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar1 = uVar15;
    puVar1[1] = uVar16;
    puVar1[2] = uVar17;
    puVar1[3] = uVar18;
    puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    fn_82CE68B8(auStack_60,param_2);
    fn_82D99E00(param_1,auStack_60);
  }
  return;
}

