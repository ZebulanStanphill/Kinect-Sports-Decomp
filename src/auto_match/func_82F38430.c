extern int fn_82F37588();
extern int fn_82F37C28();


void fn_82F38430(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int * apiStack_40;
  
  uVar1 = *(unsigned int *)(param_1 + 0xf4);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      fn_82F37C28(param_1 + 0x8c,uVar2,&apiStack_40);
      if ((int *)*apiStack_40 != (int *)0x0) {
        (**(int (***)())(*(int *)*apiStack_40 + 8))();
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  fn_82F37588(param_1 + 0x8c,0);
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(unsigned int *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  return;
}

