#define true 1
extern unsigned int *auStack_30;
extern int fn_82AD0020();
extern int fn_82AE5188();


unsigned __int64 fn_82AD00E0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_30;
  
  uVar1 = (param_2 & 0x3fffffff) << 2;
  while( true ) {
    if ((int)param_4 < 1) {
      uVar1 = fn_82AE5188(param_1 + 8,uVar1 + 3,&auStack_30);
    }
    else {
      uVar1 = fn_82AD0020();
    }
    if ((unsigned int)uVar1 == 0xffffffff) {
      return 0xffffffffffffffff;
    }
    if ((param_3 & 0xffffffff) == 1) break;
    uVar2 = (unsigned __int64)auStack_30;
    if ((param_3 & 0xffffffff) <=
        (((0x4a2932934dcU >> (uVar2 & 0x7f)) >> (uVar2 & 0x7f)) >> (uVar2 & 0x7f) & 7)) {
      uVar2 = ~uVar2;
      goto LAB_82ad0190;
    }
    uVar1 = uVar1 + param_4 & 0xfffffffc;
    if (0x100 < (uVar1 + param_3 & 0xffffffff)) {
      return 0xffffffffffffffff;
    }
  }
  uVar2 = (unsigned __int64)(unsigned int)(1 << ((unsigned int)uVar1 & 3));
LAB_82ad0190:
  return (uVar1 & 0x3ffffffc) << 2 | uVar2 & 0xffffffff0000000f;
}

