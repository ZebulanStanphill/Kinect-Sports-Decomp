extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_828E5660();


void fn_82237058(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  fn_828E5660((double)fStack_30,param_2,param_2,*(unsigned int *)(param_1 + 8),
                    *(unsigned int *)(param_1 + 0xc));
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  fn_828E5660((double)fStack_2c,param_2);
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  fn_828E5660((double)fStack_28,param_2);
  return;
}

