extern int fn_82297DB0();
extern int fn_82865290();
extern int fn_82865DF8();
extern unsigned int uStack_30;


unsigned __int64 fn_82864F80(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned char uStack_30;
  
  uVar1 = param_2[4];
  fn_82297DB0(param_1,0,0);
  fn_82865290(param_1,uVar1,0x20);
  puVar3 = param_2;
  if (0xf < (unsigned int)param_2[5]) {
    puVar3 = (unsigned int *)*param_2;
  }
  piVar2 = param_2 + 4;
  if (0xf < (unsigned int)param_2[5]) {
    param_2 = (unsigned int *)*param_2;
  }
  fn_82865DF8(param_1,param_2,(int)puVar3 + *piVar2,uStack_30);
  return param_1;
}

