typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_8288B460(int param_1,int param_2,char param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = param_2 - (unsigned int)*(unsigned char *)(param_1 + 0x5c);
  if (0xff < uVar2) {
    uVar2 = uVar2 + 0x100;
  }
  if ((uVar2 == 0) && (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (uVar3 = 1, 0x7f < uVar2)) {
    uVar3 = 0;
  }
  return uVar3;
}

