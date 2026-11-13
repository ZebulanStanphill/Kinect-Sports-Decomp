extern int fn_82FF5CB8();
extern int fn_8301B6D8();


unsigned __int64 fn_8301B970(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  char cVar3;
  
  iVar2 = fn_82FF5CB8(param_2 + 0x24,param_3);
  if (iVar2 == 1) {
    cVar3 = *(char *)(param_2 + 0x31) + -1;
    *(char *)(param_2 + 0x31) = cVar3;
    if ((*(char *)(param_2 + 0x30) == '\0') && (cVar3 == '\0')) {
      uVar1 = fn_8301B6D8(param_1,param_2);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0x29;
  }
  return uVar1;
}

