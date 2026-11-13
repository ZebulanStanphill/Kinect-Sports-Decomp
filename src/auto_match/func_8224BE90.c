#define true 1
extern int fn_828E9FF8();


unsigned __int64 fn_8224BE90(unsigned __int64 param_1,int param_2,unsigned int param_3,char param_4)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  while( true ) {
    cVar1 = fn_828E9FF8(param_1,8);
    if (cVar1 == '\0') break;
    if (param_3 <= uVar3) {
      uVar2 = 1;
    }
    else {
      *(char *)(uVar3 + param_2) = cVar1;
      uVar3 = uVar3 + 1;
    }
  }
  if (param_3 <= uVar3) {
    if (param_4 != '\0') {
      if (param_3 != 0) {
        *(unsigned char *)(param_2 + param_3 + -1) = 0;
      }
      uVar2 = 1;
    }
  }
  else {
    *(unsigned char *)(uVar3 + param_2) = 0;
  }
  return uVar2;
}

