extern int strncpy();


unsigned __int64 fn_8291C6F8(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  unsigned __int64 uVar2;
  char *pcVar3;
  
  if (param_2 < (char *)0x80000000) {
    strncpy(param_1,param_3,param_2);
    param_2[param_1 + -1] = '\0';
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar2 = -(unsigned __int64)(param_2 <= pcVar3 + (-1 - (int)param_3)) & 0xffffffff8007007a;
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

