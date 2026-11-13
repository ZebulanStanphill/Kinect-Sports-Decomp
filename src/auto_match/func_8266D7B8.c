extern int fn_8266D3E0();
extern int fn_8266D5C0();


void fn_8266D7B8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  __int64 param_5)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(param_4 & 0x7fffffff) * 2;
  iVar4 = (int)param_5;
  if (iVar3 <= iVar4) {
    lVar2 = param_1;
    do {
      lVar1 = param_4 * 0xc + lVar2;
      param_1 = param_4 * 0xc + lVar1;
      param_3 = fn_8266D5C0(lVar2,lVar1,lVar1,param_1,param_3);
      param_5 = param_5 + (param_4 & 0x7fffffff) * -2;
      iVar4 = (int)param_5;
      lVar2 = param_1;
    } while (iVar3 <= iVar4);
  }
  if ((int)param_4 < iVar4) {
    lVar2 = param_4 * 0xc + param_1;
    fn_8266D5C0(param_1,lVar2,lVar2,param_2,param_3);
  }
  else {
    fn_8266D3E0(param_1,param_2);
  }
  return;
}

