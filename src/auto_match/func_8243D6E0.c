extern int fn_82381BC0();
extern int fn_8243DAE0();
extern int fn_82552AD8();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8243D6E0(unsigned __int64 param_1,int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int uStack0000001c;
  int aiStack_50 [2];
  int iStack_48;
  int iStack_44;
  
  puVar2 = *(unsigned int **)(param_2 + 4);
  uVar3 = 0;
  if ((int)(puVar2[1] - *puVar2) / 0x30 != 0) {
    lVar4 = 0;
    uStack0000001c = param_3;
    do {
      fn_8243DAE0(&iStack_48,(unsigned __int64)*puVar2 + lVar4 + 0x1c,&stack0x0000001c);
      iVar1 = iStack_44;
      aiStack_50[0] = iStack_48;
      while (aiStack_50[0] != iVar1) {
        if (*(int *)(*(int *)(aiStack_50[0] + 0x10) + 0x30) == 2) {
          fn_82552AD8(param_1,(unsigned __int64)*(unsigned int *)(*(int *)(aiStack_50[0] + 0x10) + 0x3c) *
                                    0xc + (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 4) + 0x14),param_4
                           );
        }
        fn_82381BC0(aiStack_50);
      }
      puVar2 = *(unsigned int **)(param_2 + 4);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x30;
    } while (uVar3 < (unsigned int)((int)(puVar2[1] - *puVar2) / 0x30));
  }
  return;
}

