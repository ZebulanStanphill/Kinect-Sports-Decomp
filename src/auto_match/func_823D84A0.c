extern int fn_823CCA90();
extern int fn_823CCFA0();
extern int fn_823CD4D8();


unsigned __int64
fn_823D84A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned __int64 param_9
             ,unsigned __int64 param_10)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if (param_5 == 2) {
    uVar1 = fn_823CD4D8(param_3,param_4,param_6,param_6,param_9,param_10);
    return uVar1;
  }
  if (param_5 == 3) {
LAB_823d8550:
    fn_823CCA90(param_3,param_4,param_10);
    return 1;
  }
  if (param_5 != 4) {
    if (param_5 == 5) {
      iVar2 = fn_823CD4D8(param_3,param_4,param_6,param_6,param_9,param_10);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_823d8550;
    }
    if (param_5 != 6) {
      return 1;
    }
    iVar2 = fn_823CD4D8(param_3,param_4,param_6,param_6,param_9,param_10);
    if (iVar2 != 0) {
      return 1;
    }
  }
  uVar1 = fn_823CCFA0(param_2,param_3,param_4,param_6);
  return uVar1;
}

