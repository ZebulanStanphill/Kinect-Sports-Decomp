extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825FC288();


unsigned __int64 fn_82599B18(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int lVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_30;
  
  lVar1 = fn_8251F720(param_2,0);
  if (lVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    auStack_30 = (unsigned int)lVar1;
    fn_825FC288(param_1,0,&auStack_30,0,0,0,param_3);
    fn_8251FA58(lVar1);
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  }
  return uVar2;
}

