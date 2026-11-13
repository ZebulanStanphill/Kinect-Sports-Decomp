extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();


int * fn_82CF6150(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  iVar1 = fn_82CE5410();
  if ((param_1[2] & 0x3fffffffU) < 0x40) {
    uVar2 = (param_1[2] & 0x3fffffffU) << 1;
    if (uVar2 < 0x41) {
      uVar2 = 0x40;
    }
    fn_82CE6310(*(unsigned int *)(iVar1 + 0x14),param_1,uVar2,1);
  }
  iVar1 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x14),param_1,1);
  }
  *(unsigned char *)(param_1[1] + *param_1) = 0;
  param_1[1] = param_1[1] + 1;
  return param_1;
}

