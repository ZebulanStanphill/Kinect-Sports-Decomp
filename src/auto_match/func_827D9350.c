extern unsigned int *auStack_30;
extern int fn_827D8CF0();
extern int fn_827D90D0();


int * fn_827D9350(int *param_1,unsigned int *param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned char auStack_30 [48];
  
  uVar1 = *param_2;
  fn_827D90D0(param_2,param_4);
  lVar2 = ((unsigned __int64)(unsigned int)((int)(param_3 - uVar1) >> 3) & 0x1fffffff) * 8;
  fn_827D8CF0(auStack_30,lVar2 + (unsigned __int64)*param_2,(unsigned __int64)param_2[1] - 8);
  *param_1 = (int)lVar2 + *param_2;
  return param_1;
}

