#define true 1
extern int fn_82ADEDB8();
extern int fn_82AE5040();
extern int fn_82AE5400();


void fn_82AE7180(unsigned __int64 param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar2 = fn_82AE5040(param_2 + 8,uVar4 << 2);
    if (uVar2 == 0xffffffff) {
      return;
    }
    uVar2 = uVar2 >> 2;
    if (uVar2 == 0xffffffff) break;
    uVar3 = fn_82AE5400(param_2,(unsigned __int64)uVar2,1,4);
    uVar4 = 0x100;
    if (uVar3 != 0xffffffff) {
      uVar4 = (unsigned __int64)(uVar3 >> 4);
    }
    uVar1 = (unsigned __int64)uVar2 & 0x3ffffffc;
    fn_82ADEDB8(param_2,uVar1,(uVar4 + 3 & 0xfffffffc) - uVar1);
    if (0xff < uVar4) {
      return;
    }
  }
  return;
}

