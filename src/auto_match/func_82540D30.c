extern int fn_82A1DD38();


void fn_82540D30(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  unsigned int *in_stack_00000084;
  unsigned int *in_stack_0000008c;
  int in_stack_00000094;
  
  *(unsigned int *)(param_1 + 0xaaa4) = param_2;
  if (param_4 != 0) {
    puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0xaac0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (param_3 != 0) {
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0xaab0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (param_7 != 0) {
    puVar1 = (unsigned int *)(in_r0 + param_7 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0xaaf0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (param_6 != 0) {
    puVar1 = (unsigned int *)(in_r0 + param_6 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0xaae0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (param_5 != 0) {
    puVar1 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0xaad0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if ((param_8 & 0xffffffff) != 0) {
    fn_82A1DD38(param_1 + 0xab00,param_8,0x20);
  }
  if (in_stack_00000054 != 0) {
    fn_82A1DD38(param_1 + 0xab20,in_stack_00000054,0x20);
  }
  if (in_stack_0000005c != 0) {
    fn_82A1DD38(param_1 + 0xab40,in_stack_0000005c,0x20);
  }
  if (in_stack_00000064 != 0) {
    fn_82A1DD38(param_1 + 0xab60,in_stack_00000064,0x10);
  }
  if (in_stack_0000006c != 0) {
    *(int *)(param_1 + 0xac30) = in_stack_0000006c;
  }
  if (in_stack_00000074 != 0) {
    puVar1 = (unsigned int *)(in_r0 + in_stack_00000074 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0xabf0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (in_stack_0000007c != 0) {
    puVar1 = (unsigned int *)(in_r0 + in_stack_0000007c & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0xac00U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (in_stack_00000084 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0xac10) = *in_stack_00000084;
  }
  if (in_stack_0000008c != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0xac14) = *in_stack_0000008c;
  }
  if (in_stack_00000094 != 0) {
    puVar1 = (unsigned int *)(in_r0 + in_stack_00000094 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0xac20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  return;
}

