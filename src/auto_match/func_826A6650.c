unsigned char   fn_826A6650(char *param_1,char *param_2)

{
  unsigned char cVar1;
  unsigned char cVar2;
  unsigned __int64 uVar3;
  
  cVar1 = *param_2;
  cVar2 = *param_1;
  if (cVar2 != cVar1) {
    if (((cVar2 == '\x03') || (cVar2 == '\x04')) && ((cVar1 == '\x03' || (cVar1 == '\x04')))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 1;
}

