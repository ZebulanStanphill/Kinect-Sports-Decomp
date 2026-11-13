extern int fn_82230300();
extern int fn_8265CA20();


void fn_825388F0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)*param_1;
  if (uVar1 != 0) {
    for (; (uVar1 & 0xffffffff) != (unsigned __int64)param_1[2]; uVar1 = uVar1 + 0x38) {
      fn_82230300(uVar1 + 8,1,0);
    }
    fn_8265CA20(*param_1);
  }
  return;
}

