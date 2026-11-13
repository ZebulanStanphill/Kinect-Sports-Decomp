extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_820885A0;
extern unsigned int lbl_8208DD8C;
extern unsigned int lbl_8208DD90;
extern unsigned int lbl_82186E6C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82E34AF8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned short param_3,float *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = 0;
  if ((((param_3 < 0x167) && (0x160 < param_3)) && (param_3 != 0x163)) &&
     (((param_3 != 0x164 && (param_3 != 0x167)) &&
      (((int)param_2 != 0 && (param_4 != (float *)0x0)))))) {
    uVar2 = ((param_1 & 0x7fffffff) << 1) / (param_2 & 0xffffffff);
    trapWord(6,param_2,0);
    if (0x2edff < uVar2) {
      *param_4 = lbl_8208DD90 / (float)uVar2;
      return uVar1;
    }
    if (0x1f3ff < uVar2) {
      *param_4 = lbl_8208DD90 / (float)uVar2;
      return uVar1;
    }
    if (95999 < uVar2) {
      *param_4 = lbl_820885A0 / (float)uVar2;
      return uVar1;
    }
    if (79999 < uVar2) {
      *param_4 = lbl_82005718;
      return uVar1;
    }
    if (63999 < uVar2) {
      *param_4 = lbl_8208DD8C;
      return uVar1;
    }
    if (47999 < uVar2) {
      *param_4 = lbl_82186E6C;
      return uVar1;
    }
    if (39999 < uVar2) {
      *param_4 = lbl_82002C2C;
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

