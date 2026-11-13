extern unsigned int *auStack_30;
extern int fn_82E50BE8();
extern int fn_82E658C0();


unsigned __int64 fn_82E65B08(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_30 [12];
  
  uVar3 = 0;
  auStack_30[0] = 0;
  if ((param_3 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar1 = fn_82E50BE8(0x1c,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E658C0(uVar1,param_1,param_2,auStack_30);
      uVar3 = (unsigned __int64)auStack_30[0];
    }
    if (piVar2 == (int *)0x0) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      if (-1 < (int)uVar3) {
        uVar3 = (**(int (***)())*piVar2)(piVar2,0xffffffff821550bc,param_3);
      }
      (**(int (***)())(*piVar2 + 8))(piVar2);
    }
  }
  return uVar3;
}

