extern unsigned int *auStack_30;
extern int fn_82496B28();


void fn_82496D38(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_30 [16];
  
  if (**(int **)(param_1 + 4) != param_2) {
    uVar1 = *(unsigned int *)(param_2 + 4);
    do {
      uVar2 = (unsigned __int64)**(unsigned int **)(param_1 + 4);
      fn_82496B28(auStack_30,param_1,uVar2 + 0x10,uVar2);
    } while (uVar2 != uVar1);
  }
  return;
}

