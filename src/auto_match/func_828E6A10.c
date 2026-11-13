extern int fn_8289DDD0();
extern int fn_8289DF30();


unsigned __int64 fn_828E6A10(int *param_1)

{
  int iVar1;
  char cVar3;
  unsigned __int64 uVar2;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (cVar3 = fn_8289DDD0(iVar1), cVar3 != '\0')) {
    if ((int *)*param_1 != (int *)0x0) {
      uVar2 = (**(int (***)())(*(int *)*param_1 + 4))();
      fn_8289DF30(iVar1);
      return uVar2;
    }
    fn_8289DF30(iVar1);
  }
  return 0;
}

