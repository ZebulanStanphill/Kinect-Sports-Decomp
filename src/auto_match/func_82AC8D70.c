typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE6D0();
extern int fn_82AE91E8();


unsigned __int64 fn_82AC8D70(unsigned __int64 param_1,unsigned int param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  char cVar5;
  int iVar3;
  unsigned int uVar4;
  
  if (((*(unsigned int *)(param_2 + 8) >> 5 & 1) == 0) && (cVar5 = fn_82AE91E8(param_2), cVar5 != '\0')) {
    uVar4 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
    if ((uVar4 == 0) || (bVar1 = true, 0x1f < uVar4)) {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = fn_82ABE6D0(param_2);
      if (iVar3 != 0) goto LAB_82ac8d90;
    }
    else {
      uVar4 = *(unsigned int *)((param_2 & 0xfffffffe) + 0x24);
      if (((uVar4 & 1) == 0) && (uVar4 = uVar4 & 0xfffffffe, uVar4 != 0x28)) {
        uVar4 = *(unsigned int *)(uVar4 - 0x20) >> 7 & 0x7f;
        if ((uVar4 == 0) || (bVar1 = true, 0x1f < uVar4)) {
          bVar1 = false;
        }
        if ((bVar1) && (uVar4 = fn_82ABE6D0(), param_2 == uVar4)) {
          return 0;
        }
      }
    }
    uVar2 = 1;
  }
  else {
LAB_82ac8d90:
    uVar2 = 0;
  }
  return uVar2;
}

