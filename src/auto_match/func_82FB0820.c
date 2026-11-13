extern int fn_83007620();
extern int fn_83008F08();


unsigned __int64 fn_82FB0820(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar2;
  unsigned __int64 uVar1;
  
  cVar2 = fn_83007620();
  if (cVar2 == '\0') {
    if ((*(int *)(param_1 + 0x14) != 0) &&
       (cVar2 = fn_83008F08(*(int *)(param_1 + 0x14),param_2,param_3), cVar2 != '\0')) {
      return 1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

