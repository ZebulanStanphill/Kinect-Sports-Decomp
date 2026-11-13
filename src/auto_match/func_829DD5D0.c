typedef unsigned char bool;
extern int fn_82A1DDC0();


bool fn_829DD5D0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = *param_1;
  if (0x95 < uVar1) {
    fn_82A1DDC0(param_1 + param_1[0x97] + 1,param_2,4);
    param_1[0x97] = (param_1[0x97] + 1) % 0x96;
  }
  else {
    *param_1 = uVar1 + 1;
    fn_82A1DDC0(param_1 + ((param_1[0x97] + uVar1 + 1) - 1) % 0x96 + 1,param_2,4);
  }
  return 0x95 >= uVar1;
}

