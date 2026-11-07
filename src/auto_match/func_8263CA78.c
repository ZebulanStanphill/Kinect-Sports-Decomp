typedef unsigned short ushort;
typedef unsigned int uint;
extern int fn_8263B758();


void fn_8263CA78(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if ((*param_1 & 0x40000000) != 0) {
    fn_8263B758(param_1[6],param_1[7] >> 0x1c,param_2);
  }
  else {
    uVar1 = param_1[10];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[5] = 0;
    *param_2 = uVar1;
    param_2[6] = (param_1[9] >> 0x12) + 1;
    param_2[7] = (param_1[9] >> 3 & 0x7fff) + 1;
    param_2[4] = *(ushort *)(param_1 + 6) & 3;
  }
  param_2[1] = 4;
  return;
}
