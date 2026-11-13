extern int _invalid_parameter_noinfo();
extern int _errno();
extern int memset();


unsigned int fn_82F85880(unsigned int *param_1,unsigned char *param_2,unsigned int param_3,unsigned short param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  if ((param_2 == (unsigned char *)0x0) && (param_3 != 0)) {
    if (param_1 == (unsigned int *)0x0) {
      return 0;
    }
    uVar2 = 0;
  }
  else {
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = 0xffffffff;
    }
    if (0x7fffffff < param_3) {
      puVar1 = (unsigned int *)_errno();
      *puVar1 = 0x16;
      _invalid_parameter_noinfo();
      return 0x16;
    }
    if (0xff < param_4) {
      if ((param_2 != (unsigned char *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
        memset(param_2,0);
      }
      puVar1 = (unsigned int *)_errno();
      *puVar1 = 0x2a;
      puVar1 = (unsigned int *)_errno();
      return *puVar1;
    }
    if (param_2 != (unsigned char *)0x0) {
      if (param_3 == 0) {
        puVar1 = (unsigned int *)_errno();
        *puVar1 = 0x22;
        _invalid_parameter_noinfo();
        return 0x22;
      }
      *param_2 = (char)param_4;
    }
    if (param_1 == (unsigned int *)0x0) {
      return 0;
    }
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return 0;
}

