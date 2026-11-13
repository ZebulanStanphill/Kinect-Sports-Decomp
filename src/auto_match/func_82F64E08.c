extern int _invalid_parameter_noinfo();
extern int fn_82F64D58();
extern int _errno();


unsigned int
fn_82F64E08(unsigned int *param_1,unsigned short *param_2,unsigned int param_3,unsigned __int64 param_4,unsigned int param_5)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar4 = 0;
  if (param_2 == (unsigned short *)0x0) {
    if (param_3 != 0) goto LAB_82f64e4c;
  }
  else {
    if (param_3 == 0) goto LAB_82f64e4c;
    *param_2 = 0;
  }
  if (param_1 != (unsigned int *)0x0) {
    *param_1 = 0;
  }
  uVar3 = param_3;
  if (param_5 <= param_3) {
    uVar3 = param_5;
  }
  if (uVar3 < 0x80000000) {
    iVar2 = fn_82F64D58(param_2,param_4,uVar3,0xffffffff831bbca8);
    if (iVar2 == -1) {
      if (param_2 != (unsigned short *)0x0) {
        *param_2 = 0;
      }
      puVar1 = (unsigned int *)_errno();
      return *puVar1;
    }
    uVar3 = iVar2 + 1;
    if (param_2 != (unsigned short *)0x0) {
      if (param_3 < uVar3) {
        if (param_5 != 0xffffffff) {
          *param_2 = 0;
          puVar1 = (unsigned int *)_errno();
          *puVar1 = 0x22;
          _invalid_parameter_noinfo();
          return 0x22;
        }
        uVar4 = 0x50;
        uVar3 = param_3;
      }
      param_2[uVar3 - 1] = 0;
    }
    if (param_1 == (unsigned int *)0x0) {
      return uVar4;
    }
    *param_1 = uVar3;
    return uVar4;
  }
LAB_82f64e4c:
  puVar1 = (unsigned int *)_errno();
  *puVar1 = 0x16;
  _invalid_parameter_noinfo();
  return 0x16;
}

