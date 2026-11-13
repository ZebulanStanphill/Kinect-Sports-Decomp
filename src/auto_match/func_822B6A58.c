extern unsigned int *auStack_20;
extern int fn_8255E0B0();


int fn_822B6A58(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_20 [1];
  
  iVar1 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(iVar1 + 0x4c);
  puVar3 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  if (iVar2 != 0) {
    if ((*(int *)(iVar1 + 0x8c0) != 0) &&
       (*(int *)((*(int *)(iVar2 + 0x44) + 0x20) * 4 + *(int *)(iVar1 + 0x8c0)) != 0)) {
      fn_8255E0B0(iVar1,param_3,auStack_20);
    }
  }
  puVar3 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  return param_1;
}

