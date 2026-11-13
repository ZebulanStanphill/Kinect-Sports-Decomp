extern unsigned int iStack_3c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 fn_83023618(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned short uVar3;
  unsigned int *puVar4;
  int lVar5;
  struct { unsigned int first; int second; unsigned third; unsigned rest[6]; } stack_pair_40;
  
  puVar4 = &stack_pair_40.first;
  stack_pair_40.first = 0;
  uVar1 = 1;
  lVar5 = 8;
  do {
    puVar4++;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar3 = *(unsigned short *)(param_1 + 0x3e) + 1;
  stack_pair_40.second = (unsigned int)*(unsigned short *)(param_1 + 0x4a) << 10;
  stack_pair_40.third = *(unsigned int *)((*(unsigned short *)(param_1 + 0x3e) + 0x10) * 4 + param_1);
  *(unsigned short *)(param_1 + 0x3e) = uVar3;
  if ((uVar3 & 0xffff) == 2) {
    *(unsigned short *)(param_1 + 0x3e) = 0;
  }
  *(unsigned short *)(param_1 + 0x48) = *(unsigned short *)(param_1 + 0x48) + 0xffffu;
  iVar2 = (*(int (**)())(**(int **)(param_1 + 0x34) + 0x54))(*(int **)(param_1 + 0x34),&stack_pair_40.first,0);
  if (iVar2 < 0) {
    uVar1 = 2;
  }
  return uVar1;
}

