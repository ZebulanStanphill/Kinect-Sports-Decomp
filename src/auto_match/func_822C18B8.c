extern int fn_82230300();
extern int fn_8265CA20();


void fn_822C18B8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = (unsigned __int64)*param_1;
  if (uVar2 != 0) {
    uVar1 = param_1[1];
    for (; (uVar2 & 0xffffffff) != (unsigned __int64)uVar1; uVar2 = uVar2 + 0x38) {
      fn_82230300(uVar2 + 0x1c,1,0);
      fn_82230300(uVar2,1,0);
    }
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

