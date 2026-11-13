#define true 1
extern unsigned int *auStack_30;
extern int fn_82AE5340();
extern int fn_82AE52C8();


unsigned __int64 fn_82AE58D8(__int64 param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_30;

  while( true ) {
    if ((int)param_4 < 1) {
      uVar1 = fn_82AE52C8(param_1 + 4,param_2,&auStack_30);
    }
    else {
      uVar1 = fn_82AE5340();
    }
    if ((int)uVar1 == -1) {
      return 0xffffffffffffffff;
    }
    if ((param_3 & 0xffffffff) == 1) {
      return (uVar1 & 0xfffffff) << 4 | 1;
    }
    uVar2 = (unsigned __int64)auStack_30;
    if ((param_3 & 0xffffffff) <=
        (((0x4a2932934dcU >> (uVar2 & 0x7f)) >> (uVar2 & 0x7f)) >> (uVar2 & 0x7f) & 7)) break;
    param_2 = uVar1 + param_4;
    if (0x20 < (param_2 + param_3 & 0xffffffff)) {
      return 0xffffffffffffffff;
    }
  }
  return ~uVar2 & 1 | (uVar1 & 0xfffffff) << 4;
}
