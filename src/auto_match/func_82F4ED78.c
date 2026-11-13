extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82F4ED10();
extern int fn_82F538A0();
extern int fn_82F538B0();
extern int fn_82F538C8();
extern int fn_82F538E0();
extern int fn_82F597F0();
extern int fn_8306ED70();


void fn_82F4ED78(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 in_stack_00000050;
  unsigned __int64 in_stack_00000058;
  int in_stack_00000064;
  int in_stack_00000074;
  int in_stack_0000007c;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  if (in_stack_00000064 != 0) {
    iVar3 = fn_82F538A0(auStack_70,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040,param_2);
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    fn_82F597F0(param_3,param_4,param_5,param_6,param_7,param_8,in_stack_00000050,in_stack_00000058
                );
    puVar1 = (unsigned int *)(in_r0 + in_stack_00000064 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    fn_82F4ED10(auStack_70,param_1);
    puVar1 = (unsigned int *)(in_r0 + in_stack_00000064 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    fn_8306ED70();
    puVar1 = (unsigned int *)(in_r0 + in_stack_00000064 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  if (in_stack_00000074 != 0) {
    iVar3 = fn_82F538B0(auStack_70,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040,param_2);
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + in_stack_00000074 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    fn_82F4ED10(auStack_60,param_1);
    puVar1 = (unsigned int *)(in_r0 + in_stack_00000074 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    fn_8306ED70();
    puVar1 = (unsigned int *)(in_r0 + in_stack_00000074 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  if (in_stack_0000007c != 0) {
    iVar3 = fn_82F538C8(auStack_60,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040,param_2);
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + in_stack_0000007c & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    if (*(char *)(param_1 + 0xcb1) != '\0') {
      *(float *)(in_stack_0000007c + 4) = -*(float *)(in_stack_0000007c + 4);
      *(float *)(in_stack_0000007c + 8) = -*(float *)(in_stack_0000007c + 8);
    }
  }
  fn_82F538E0((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040,param_2);
  return;
}

