typedef unsigned char bool;
extern unsigned int lbl_82005BB4;
extern unsigned int lbl_82005BEC;
extern unsigned int lbl_82005BF8;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82689370(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  char in_RESERVE;
  unsigned char in_cr0;
  
  param_1[1] = 1;
  param_1[2] = &lbl_82005BB4;
  *param_1 = &lbl_82005BF8;
  param_1[2] = &lbl_82005BEC;
  if ((param_2 & 0xffffffff) != 0) {
    do {
      puVar2 = (unsigned int *)(param_2 + 4);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,param_2 + 4);
        *puVar2 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  param_1[3] = (int *)param_2;
  if ((param_2 & 0xffffffff) != 0) {
    (**(int (***)())(*(int *)param_2 + 0x2c))(param_2,param_1 + 2);
  }
  param_1[4] = 1;
  return param_1;
}

