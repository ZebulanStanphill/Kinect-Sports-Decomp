extern int fn_8288B760();
extern int fn_828A93C8();
extern int fn_828B29A0();
extern int fn_828B2BF8();


unsigned __int64 fn_8224C390(int param_1)

{
  char cVar2;
  unsigned __int64 uVar1;
  char acStack_20 [16];
  
  cVar2 = fn_8288B760();
  if (cVar2 != '\0') {
    uVar1 = fn_828B2BF8();
    cVar2 = fn_828B29A0(uVar1,param_1);
    if (cVar2 != '\0') {
      acStack_20[0] = '\0';
      uVar1 = (**(int (***)())(**(int **)(param_1 + 0x10) + 0x6c))
                        (*(int **)(param_1 + 0x10),param_1,acStack_20);
      if (acStack_20[0] != '\0') {
        fn_828A93C8(param_1,uVar1);
      }
    }
  }
  return 0;
}

