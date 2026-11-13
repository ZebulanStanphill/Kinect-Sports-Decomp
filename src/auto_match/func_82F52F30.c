extern int fn_8251F718();
extern int fn_8251FBA8();
extern int fn_8265CA60();
extern int fn_82A1DD38();


unsigned int * fn_82F52F30(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  *param_1 = 0;
  iVar3 = fn_8251F718(param_2);
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    uVar1 = fn_8251FBA8();
    uVar2 = fn_8265CA60();
    *param_1 = (int)uVar2;
    fn_82A1DD38(uVar2,param_1[1],uVar1);
  }
  return param_1;
}

