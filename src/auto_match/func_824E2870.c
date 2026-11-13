extern int fn_822750C8();
extern int fn_823AB478();
extern int fn_82A1C0E8();


__int64 fn_824E2870(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = fn_823AB478();
  }
  uVar1 = fn_822750C8();
  lVar2 = fn_82A1C0E8(uVar1,uVar3,param_2,param_3,param_4,param_5,param_6);
  return (lVar2 + -5) - (lVar2 + -6 + (unsigned __int64)(lVar2 + -5 == 0));
}

