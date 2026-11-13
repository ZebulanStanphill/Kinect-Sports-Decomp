typedef unsigned char bool;
#define false 0


bool fn_8304E6F8(short *param_1)

{
  unsigned short uVar1;
  
  if ((((*param_1 == 0x69) && (uVar1 = param_1[1], uVar1 != 0)) && (uVar1 < 7)) && (param_1[7] == 4)
     ) {
    return param_1[6] == (unsigned short)(uVar1 * 0x24);
  }
  return false;
}

