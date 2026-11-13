typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_30;
extern int fn_8268ADD8();
extern int fn_8268AE48();
extern int fn_8268BA10();
extern int fn_826BCD88();


unsigned __int64 fn_8273C948(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char auStack_30 [48];
  
  uVar2 = fn_8268ADD8(param_2,0,auStack_30);
  do {
    if (uVar2 == 0) {
      fn_8268BA10(param_1 + 0x30,param_2);
      fn_8268BA10(param_1 + 0x34,param_3);
      return 1;
    }
    if ((uVar2 & 0xffffffff) < 0x3d) {
      if (0x39 < (uVar2 & 0xffffffff)) {
        return 0;
      }
      if (0x21 < (uVar2 & 0xffffffff)) {
        if ((uVar2 & 0xffffffff) < 0x24) {
          return 0;
        }
        if (0x24 < (uVar2 & 0xffffffff)) {
          if ((uVar2 & 0xffffffff) < 0x28) {
            return 0;
          }
          bVar1 = (uVar2 & 0xffffffff) == 0x2c;
          goto LAB_8273c9d4;
        }
      }
    }
    else if (0x3d < (uVar2 & 0xffffffff)) {
      if ((uVar2 & 0xffffffff) < 0x40) {
        return 0;
      }
      if ((uVar2 & 0xffffffff) == 0x5c) {
        return 0;
      }
      bVar1 = (uVar2 & 0xffffffff) == 0x7e;
LAB_8273c9d4:
      if (bVar1) {
        return 0;
      }
    }
    iVar3 = fn_826BCD88(0xffffffff820094c8,uVar2 & 0xffff);
    if (iVar3 != 0) {
      return 0;
    }
    uVar2 = fn_8268AE48(param_2,auStack_30);
  } while( true );
}

