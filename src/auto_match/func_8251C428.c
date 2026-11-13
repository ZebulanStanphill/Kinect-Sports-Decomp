extern int fn_8288B760();
extern int fn_828A9210();
extern int fn_828A93C8();


void fn_8251C428(int param_1)

{
  char cVar2;
  unsigned __int64 uVar1;
  char acStack_20 [16];
  
  cVar2 = fn_8288B760();
  if ((cVar2 != '\0') && (cVar2 = fn_828A9210(param_1), cVar2 != '\0')) {
    acStack_20[0] = '\0';
    uVar1 = (**(int (***)())(**(int **)(param_1 + 0x10) + 0x6c))
                      (*(int **)(param_1 + 0x10),param_1,acStack_20);
    if (acStack_20[0] != '\0') {
      fn_828A93C8(param_1,uVar1);
    }
  }
  return;
}

