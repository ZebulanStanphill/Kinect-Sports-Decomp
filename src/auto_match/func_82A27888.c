extern int fn_82A26800();
extern int fn_82A27010();
extern unsigned int stack0x0000003c;
extern unsigned int uStack0000003c;


unsigned __int64
RtlpInitializeHeapSegment(unsigned short *param_1,unsigned short *param_2,unsigned char param_3,unsigned int param_4,
             unsigned short *param_5,unsigned int param_6,unsigned int param_7)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned short uVar6;
  int iVar7;
  unsigned int uStack0000003c;
  int aiStack_60;
  
  uVar4 = param_7 - (int)param_5;
  uVar1 = (int)param_2 + 0x57U & 0xfffffff0;
  iVar7 = ((int)uVar4 >> 0x10) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 0xffff) != 0);
  if (param_1 == param_5) {
    uVar6 = *param_1;
  }
  else {
    uVar6 = 0;
  }
  if (uVar1 + 0x10 < param_6) {
LAB_82a27940:
    param_7 = param_7 - param_6;
    param_2[1] = uVar6;
    *param_2 = (short)((int)(uVar1 - (int)param_2) >> 4);
    *(unsigned char *)(param_2 + 2) = param_3;
    *(unsigned int *)(param_2 + 10) = param_4;
    uVar5 = (__int64)((int)param_7 >> 0x10) +
            (unsigned __int64)((int)param_7 < 0 && (param_7 & 0xffff) != 0);
    *(unsigned short **)(param_2 + 0xc) = param_1;
    *(unsigned short **)(param_2 + 0x10) = param_5;
    *(unsigned int *)(param_2 + 0x14) = uVar1;
    *(unsigned char *)((int)param_2 + 5) = 1;
    *(unsigned int *)(param_2 + 8) = 0xffeeffee;
    *(unsigned short **)(param_2 + 0x16) = param_5 + iVar7 * 0x8000;
    *(int *)(param_2 + 0x12) = iVar7;
    *(int *)(param_2 + 0x18) = (int)uVar5;
    uStack0000003c = param_6;
    if (uVar5 != 0) {
      fn_82A26800(param_2,param_6,(uVar5 & 0xffff) << 0x10);
    }
    *(unsigned short **)(param_1 + (param_3 + 0x18) * 2) = param_2;
    uVar6 = *param_2;
    *(unsigned char *)(uVar1 + 5) = 0x10;
    *(unsigned int *)(param_2 + 0x20) = uVar1;
    *(unsigned char *)(uVar1 + 4) = param_3;
    *(unsigned short *)(uVar1 + 2) = uVar6;
    fn_82A27010(param_1,uVar1,(int)(uStack0000003c - uVar1) >> 4);
    uVar2 = 1;
  }
  else {
    if (uVar1 + 0x10 < param_7) {
      aiStack_60 = (uVar1 - param_6) + 0x10;
      uStack0000003c = param_6;
      iVar3 = NtAllocateVirtualMemory
                        (&stack0x0000003c,&aiStack_60,0x60001000,4,*(unsigned int *)(param_1 + 0x2c8));
      if (-1 < iVar3) {
        param_6 = aiStack_60 + uStack0000003c;
        goto LAB_82a27940;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

