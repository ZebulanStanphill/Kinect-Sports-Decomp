typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8225C238();
extern int fn_82526608();
extern int fn_8265C9E0();
extern int fn_82829120();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_40;
extern unsigned int stack0x0000001c;


void fn_8225D400(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iStack0000001c;
  int iStack_40;
  int aiStack_3c [15];
  
  iStack0000001c = param_2;
  iStack_40 = param_2;
  fn_82829120(aiStack_3c,param_1 + 0x48,&iStack_40);
  if (aiStack_3c[0] == *(int *)(param_1 + 0x4c)) {
    iVar4 = fn_8265C9E0(0x410);
    if (iVar4 != 0) {
      *(unsigned int *)(iVar4 + 0x404) = 0;
      *(unsigned int *)(iVar4 + 0x408) = 0;
      *(unsigned int *)(iVar4 + 0x40c) = 3;
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(iVar4,0,1000);
    }
    iVar4 = 0;
    aiStack_3c[0] = param_2;
    puVar5 = (unsigned int *)fn_82526608(param_1 + 0x48,aiStack_3c);
    *puVar5 = 0;
  }
  else {
    iVar4 = *(int *)(aiStack_3c[0] + 0x10);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_82A1DD38(iVar4,param_3,1000);
    *(unsigned int *)(iVar4 + 0x404) = 1;
    *(unsigned int *)(iVar4 + 0x408) = 1;
  }
  puVar1 = *(unsigned char **)(param_1 + 0x24);
  puVar6 = (unsigned int *)(param_1 + 0x20);
  if ((puVar1 <= &stack0x0000001c) || (bVar3 = true, &stack0x0000001c < (unsigned char *)*puVar6)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = *puVar6;
    if (puVar1 == *(unsigned char **)(param_1 + 0x28)) {
      fn_8225C238(puVar6);
    }
    if (*(unsigned int **)(param_1 + 0x24) != (unsigned int *)0x0) {
      **(unsigned int **)(param_1 + 0x24) =
           *(unsigned int *)(((int)((int)&stack0x0000001c + -uVar2) >> 2) * 4 + *puVar6);
    }
  }
  else {
    if (puVar1 == *(unsigned char **)(param_1 + 0x28)) {
      fn_8225C238(puVar6);
    }
    if (*(int **)(param_1 + 0x24) != (int *)0x0) {
      **(int **)(param_1 + 0x24) = param_2;
    }
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  return;
}

