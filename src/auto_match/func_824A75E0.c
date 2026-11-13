extern int fn_82536288();
extern int fn_82536358();


void fn_824A75E0(int param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x34);
  if (uVar2 != 0) {
    cVar1 = fn_82536358(uVar2);
    if (cVar1 != '\0') {
      (**(int (***)())*(unsigned int *)uVar2)(uVar2);
      fn_82536288((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) + 0x34);
    }
    *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x34) = 0;
  }
  return;
}

