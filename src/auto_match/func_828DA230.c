extern unsigned int *auStack_28;
extern int fn_82381BC0();
extern int fn_828D9A58();
extern int fn_828D9E68();


void fn_828DA230(__int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  int aiStack_30 [2];
  unsigned char auStack_28 [16];
  
  aiStack_30[0] = **(int **)(param_2 + 0x210);
  if ((int *)aiStack_30[0] != *(int **)(param_2 + 0x210)) {
    do {
      uVar1 = fn_828D9A58(auStack_28,*(unsigned int *)(aiStack_30[0] + 0x10));
      fn_828D9E68(param_1 + 0x84,uVar1);
      fn_82381BC0(aiStack_30);
    } while (aiStack_30[0] != *(int *)(param_2 + 0x210));
  }
  return;
}

