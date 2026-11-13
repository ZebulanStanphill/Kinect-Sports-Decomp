extern int fn_83015270();
extern int fn_83015DC8();
extern int fn_830195D8();


unsigned __int64
fn_830155E8(__int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  
  fn_83015270(param_1,param_2,param_4,param_5);
  puVar2 = (unsigned int *)fn_83015DC8(param_1 + 0x88);
  if (puVar2 == (unsigned int *)0x0) {
    uVar1 = 2;
  }
  else {
    *puVar2 = (int)param_2;
    puVar2[3] = (int)param_4;
    puVar2[2] = (int)param_5;
    puVar2[1] = param_3;
    if (((param_7 & 0xffffffff) == 0) || ((param_8 & 0xffffffff) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = fn_830195D8(puVar2 + 4,param_7,param_8,param_6);
    }
  }
  return uVar1;
}

