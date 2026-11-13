extern int fn_83008038();
extern int fn_830195D8();
extern int fn_83028018();


unsigned __int64
fn_83028168(__int64 param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  
  fn_83028018(param_1,param_3,param_4);
  puVar2 = (unsigned int *)fn_83008038(param_1 + 100);
  if (puVar2 == (unsigned int *)0x0) {
    uVar1 = 2;
  }
  else {
    puVar2[3] = (int)param_3;
    puVar2[4] = (int)param_4;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = param_2;
    if (((param_6 & 0xffffffff) == 0) || ((param_7 & 0xffffffff) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = fn_830195D8(puVar2 + 5,param_6,param_7,param_5);
    }
  }
  return uVar1;
}

