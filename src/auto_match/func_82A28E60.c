typedef unsigned char bool;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82A26C08();
extern int fn_82A27010();
extern int fn_82A27C30();
extern int fn_82A29104();
extern unsigned int uStack_48;
extern unsigned int uStack_8;


unsigned int fn_82A28E60(int param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  int iVar5;
  int *piVar6;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  unsigned char auStack_40 [56];
  unsigned int uStack_8;
  
  uStack_48 = 1;
  if (((*(unsigned int *)(param_1 + 0x14) & 0x40000) != 0) &&
     (uVar3 = KeGetCurrentProcessType(), *(unsigned char *)(param_1 + 0x17b) != uVar3)) {
    KeBugCheckEx(0xf4,param_1,uStack_8,0x1150,param_3);
  }
  if (param_3 == 0) {
    return 1;
  }
  bVar2 = ((*(unsigned int *)(param_1 + 0x18) | param_2) & 1) == 0;
  if (bVar2) {
    RtlEnterCriticalSection(*(unsigned int *)(param_1 + 0x580));
  }
  if ((*(unsigned char *)(param_3 + -0xb) & 8) != 0) {
    iVar5 = *(int *)(param_3 + -0x30);
    piVar6 = *(int **)(param_3 + -0x2c);
    *piVar6 = iVar5;
    *(int **)(iVar5 + 4) = piVar6;
    if (bVar2) {
      RtlLeaveCriticalSection(*(unsigned int *)(param_1 + 0x580));
    }
    iVar5 = NtFreeVirtualMemory(auStack_40,auStack_50,0x8000,*(unsigned int *)(param_1 + 0x590));
    uStack_48 = -(iVar5 >> 0x1f) - 1U & 1;
    goto LAB_82a290c4;
  }
  uVar3 = (unsigned int)*(unsigned short *)(param_3 + -0x10);
  puVar4 = (unsigned short *)fn_82A26C08(param_1,(unsigned short *)(param_3 + -0x10),auStack_50,0);
  if (uVar3 < 0x80) {
    *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar4 + 5) & 0x10;
    piVar6 = (int *)((uVar3 + 0x30) * 8 + param_1);
    if ((int *)*piVar6 == piVar6) {
      iVar5 = ((*puVar4 >> 5) + 0x58) * 4;
      *(unsigned int *)(iVar5 + param_1) = 1 << (*puVar4 & 0x1f) | *(unsigned int *)(iVar5 + param_1);
    }
    puVar1 = (unsigned int *)piVar6[1];
    *(int **)(puVar4 + 4) = piVar6;
    *(unsigned int **)(puVar4 + 6) = puVar1;
    *puVar1 = puVar4 + 4;
    piVar6[1] = (int)(puVar4 + 4);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  else {
    if ((*(unsigned int *)(param_1 + 0x28) <= uVar3) &&
       (*(unsigned int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x30) + uVar3)) {
      fn_82A27C30(param_1);
      goto LAB_82a290c4;
    }
    if (0xf000 < uVar3) {
      fn_82A27010(param_1);
      goto LAB_82a290c4;
    }
    *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar4 + 5) & 0x10;
    for (piVar6 = *(int **)(param_1 + 0x180);
        ((int *)(param_1 + 0x180) != piVar6 && (*(unsigned short *)(piVar6 + -2) < uVar3));
        piVar6 = (int *)*piVar6) {
    }
    puVar1 = (unsigned int *)piVar6[1];
    *(int **)(puVar4 + 4) = piVar6;
    *(unsigned int **)(puVar4 + 6) = puVar1;
    *puVar1 = puVar4 + 4;
    piVar6[1] = (int)(puVar4 + 4);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  *(unsigned int *)(param_1 + 0x30) = iVar5 + uVar3;
LAB_82a290c4:
  fn_82A29104();
  return uStack_48;
}

