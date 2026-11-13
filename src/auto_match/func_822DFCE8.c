typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822315A0();
extern int fn_822CEE40();
extern unsigned int lbl_831CD630;
extern unsigned int lbl_831DCD58;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_822DFCE8(double param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if ((double)lbl_831CD630 < param_1) {
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    return 1;
  }
  if (param_4 < 0x18) {
    iVar2 = *(int *)(&lbl_831DCD58 + param_4 * 4);
  }
  else {
    iVar2 = 6;
  }
  uVar3 = 1;
  if (iVar2 < 1) goto LAB_822dfe38;
  if (iVar2 < 3) {
    iVar2 = fn_822CEE40(*(unsigned int *)(param_2 + 0x14));
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x268) == 0)) {
      uVar3 = -((unsigned __int64)(*(unsigned int *)(*(int *)(param_2 + 0x10) + 0x1fc) < 2) - 1);
      goto LAB_822dfe38;
    }
  }
  else {
    if (iVar2 != 4) goto LAB_822dfe38;
    if (param_4 != 0x10) {
      if (param_4 == 0xf) {
        if ((*(int *)(*param_3 + 0x2130) == 0) ||
           (bVar1 = true, *(int *)(*(int *)(*param_3 + 0x2130) + 0x24) == 0)) {
          bVar1 = false;
        }
        if (((unsigned int)LZCOUNT((unsigned int)(*(int *)(*(int *)(param_2 + 0x14) + 0x24) != 0)) >> 5 == 0) ||
           (!bVar1)) {
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          uVar3 = (unsigned __int64)((-lbl_83265A28 & ~lbl_83265A28) >> 0x1f);
          goto LAB_822dfe38;
        }
      }
      uVar3 = 0;
      goto LAB_822dfe38;
    }
  }
  uVar3 = 1;
LAB_822dfe38:
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return uVar3;
}

