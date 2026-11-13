extern unsigned int *auStack_30;
extern int fn_825BF5C0();


void fn_825BF7D8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_30 [16];
  
  if (**(int **)(param_1 + 4) != param_2) {
    uVar1 = *(unsigned int *)(param_2 + 4);
    do {
      uVar2 = (unsigned __int64)**(unsigned int **)(param_1 + 4);
      fn_825BF5C0(auStack_30,param_1,uVar2 + 8,uVar2);
    } while (uVar2 != uVar1);
  }
  return;
}

