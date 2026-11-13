void fn_827B14A8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = *(int *)(param_1 + 0x6c) + 4;
  uVar1 = *(int *)(param_1 + 0x6c) + 5;
  *(char *)(*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar2 & 0xfff)) = (char)param_2;
  *(char *)(*(int *)((uVar1 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar1 & 0xfff)) = (char)((unsigned int)param_2 >> 8);
  uVar2 = *(int *)(param_1 + 0x6c) + 6;
  uVar1 = *(int *)(param_1 + 0x6c) + 7;
  *(char *)(*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar2 & 0xfff)) = (char)param_3;
  *(char *)(*(int *)((uVar1 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar1 & 0xfff)) = (char)((unsigned int)param_3 >> 8);
  uVar2 = *(int *)(param_1 + 0x6c) + 8;
  uVar1 = *(int *)(param_1 + 0x6c) + 9;
  *(char *)(*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar2 & 0xfff)) = (char)param_4;
  *(char *)(*(int *)((uVar1 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar1 & 0xfff)) = (char)((unsigned int)param_4 >> 8);
  return;
}

