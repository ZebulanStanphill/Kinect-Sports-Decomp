#define true 1
extern unsigned int *auStack_30;
extern int fn_82ACAF10();
extern int fn_82ACAE18();


unsigned __int64 fn_82ACB228(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_30;

  uVar2 = (param_2 & 0x3fffffff) << 2;
  while( true ) {
    if ((int)param_4 < 1) {
      uVar2 = fn_82ACAE18((unsigned int *)(param_1 + 4),uVar2 + 3,&auStack_30);
    }
    else {
      uVar2 = fn_82ACAF10();
    }
    if ((unsigned int)uVar2 == 0xffffffff) {
      return 0xffffffffffffffff;
    }
    if ((param_3 & 0xffffffff) == 1) break;
    uVar3 = (unsigned __int64)auStack_30;
    if ((param_3 & 0xffffffff) <=
        (((0x4a2932934dcU >> (uVar3 & 0x7f)) >> (uVar3 & 0x7f)) >> (uVar3 & 0x7f) & 7)) {
      uVar3 = ~uVar3;
      goto LAB_82acb300;
    }
    puVar1 = *(unsigned int **)(param_1 + 4);
    uVar2 = uVar2 + param_4 & 0xfffffffc;
    if ((~(unsigned int)puVar1 & 1) == 0) {
      uVar3 = 0x1f;
    }
    else {
      uVar3 = ((unsigned __int64)*puVar1 & 0x7ffffff) * 0x20 - 1;
    }
    if ((uVar3 & 0xffffffff) < (uVar2 + param_3 & 0xffffffff)) {
      return 0xffffffffffffffff;
    }
  }
  uVar3 = (unsigned __int64)(unsigned int)(1 << ((unsigned int)uVar2 & 3));
LAB_82acb300:
  return (uVar2 & 0x3ffffffc) << 2 | uVar3 & 0xffffffff0000000f;
}
