extern unsigned int fn_82B7BD28();
extern int fn_82B7BEB0();
extern void *memcpy(void *, const void *, unsigned int);


unsigned int fn_82BC0088(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (param_2 + 1 > param_1[1]) {
    param_1[1] = param_2 + 1;
  }
  while (uVar1 = *param_1, param_2 >= uVar1) {
    *param_1 = uVar1 << 1;
  }
  uVar2 = param_1[2];
  uVar3 = fn_82B7BD28(param_1[3],uVar1 << 2);
  param_1[2] = (unsigned int)uVar3;
  memcpy((void *)uVar3,(void *)uVar2,param_1[1] << 2);
  fn_82B7BEB0(param_1[3],uVar2);
  return param_2 * 4 + param_1[2];
}

