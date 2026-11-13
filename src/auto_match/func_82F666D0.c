extern int fn_82F63BA0();
extern int fn_82F665B0();
extern int fn_82F68240();


unsigned __int64
fn_82F666D0(unsigned char *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  
  if ((((param_3 & 0xffffffff) == 0) || (param_1 == (unsigned char *)0x0)) ||
     ((param_2 & 0xffffffff) == 0)) {
    puVar2 = (unsigned int *)fn_82F68240();
    uVar3 = 0x16;
  }
  else {
    uVar1 = fn_82F665B0(0xffffffff82f79578,param_1,param_2,param_3,param_4,param_5);
    if ((int)uVar1 < 0) {
      *param_1 = 0;
    }
    if ((int)uVar1 != -2) {
      return uVar1;
    }
    puVar2 = (unsigned int *)fn_82F68240();
    uVar3 = 0x22;
  }
  *puVar2 = uVar3;
  fn_82F63BA0();
  return 0xffffffffffffffff;
}

