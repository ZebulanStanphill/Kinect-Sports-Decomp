extern int fn_827DF1D0();
extern int fn_827DFB88();
extern int fn_827E25C8();
extern int fn_827E25F8();
extern int fn_827E2600();


unsigned __int64 fn_827E0008(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  short sVar2;
  char cVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0xffff;
  iVar1 = fn_827DF1D0();
  *param_3 = iVar1;
  if (iVar1 != 0) {
    sVar2 = fn_827E25F8();
    if (sVar2 != 0) {
      fn_827E25C8(*param_3);
      uVar4 = fn_827E25F8(*param_3);
      if (((uVar4 & 0xffff) == 0) && (cVar3 = fn_827E2600(*param_3), cVar3 != '\0')) {
        fn_827DFB88(param_1,*param_3);
      }
    }
  }
  return uVar4;
}

