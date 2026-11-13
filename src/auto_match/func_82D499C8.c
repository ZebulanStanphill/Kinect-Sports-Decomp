typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_240;
extern unsigned int lbl_82138740;
extern unsigned int lbl_82138750;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_82D499C8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned char auStack_240 [576];
  
  piVar6 = (int *)(param_2 + 0x10);
  iVar4 = (int)in_r0;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_82138750 + iVar4) & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(&lbl_82138740 + iVar4) & 0xfffffff0);
  uVar10 = *puVar2;
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  puVar2 = (unsigned int *)(iVar4 + param_5 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  puVar1 = (unsigned int *)(iVar4 + param_5 + 0x10 & 0xfffffff0);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  uVar3 = (**(int (***)())(*(int *)(param_2 + 0x10) + 8))(piVar6);
  iVar4 = (int)uVar3;
  while (iVar4 != -1) {
    piVar5 = (int *)(**(int (***)())(*piVar6 + 0x14))(piVar6,uVar3,auStack_240);
    (**(int (***)())(*piVar5 + 0x1c))(param_1,piVar5,param_3);
    vectorMinimumFloatingPoint(in_vs32,in_vs44);
    vectorMaximumFloatingPoint(in_vs45,in_vs43);
    puVar1 = (unsigned int *)((int)in_r0 + param_5 & 0xfffffff0);
    *puVar1 = in_register_000100a0;
    puVar1[1] = in_register_000100a4;
    puVar1[2] = in_register_000100a8;
    puVar1[3] = in_vr10;
    puVar1 = (unsigned int *)((int)in_r0 + param_5 + 0x10 & 0xfffffff0);
    *puVar1 = in_register_00010090;
    puVar1[1] = in_register_00010094;
    puVar1[2] = in_register_00010098;
    puVar1[3] = in_vr9;
    uVar3 = (**(int (***)())(*piVar6 + 0xc))(piVar6,uVar3);
    iVar4 = (int)uVar3;
  }
  return;
}

