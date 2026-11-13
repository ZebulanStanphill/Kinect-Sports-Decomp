extern int fn_8270BDE0();


int fn_8270C668(unsigned int *param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int lVar2;
  
  uVar1 = *param_1;
  lVar2 = fn_8270BDE0(param_2 + 0x20,param_3 - *(int *)(param_2 + 0x1c) >> uVar1,
                        param_4 >> uVar1);
  return lVar2 + uVar1;
}

