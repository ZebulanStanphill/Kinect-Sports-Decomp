extern int fn_826A9B58();
extern int fn_82F68CC0();


unsigned int * fn_826AA4C8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1];
  uVar2 = *param_2;
  if ((unsigned __int64)uVar1 != 0) {
    uVar3 = param_1[1];
    fn_826A9B58(param_1,param_1,(unsigned __int64)uVar3 + (unsigned __int64)uVar1);
    fn_82F68CC0(((unsigned __int64)uVar3 & 0x1fffffff) * 8 + (unsigned __int64)*param_1,uVar2,uVar1 << 3);
  }
  return param_1;
}

