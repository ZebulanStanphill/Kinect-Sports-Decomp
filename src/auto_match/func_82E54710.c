extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E54148();


unsigned __int64 fn_82E54710(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_40 [4];
  
  uVar3 = 0;
  auStack_40[0] = 0;
  if ((param_4 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar1 = fn_82E50BE8(0x10c,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E54148(uVar1,param_1,param_2,param_3,auStack_40);
      uVar3 = (unsigned __int64)auStack_40[0];
    }
    if (piVar2 == (int *)0x0) {
      uVar3 = 0xffffffff8007000e;
    }
    else if (((int)uVar3 < 0) ||
            (uVar3 = (**(int (***)())*piVar2)(piVar2,0xffffffff8215466c,param_4), (__int64)uVar3 < 0))
    {
      (**(int (***)())(*piVar2 + 0xac))(piVar2,1);
    }
  }
  return uVar3;
}

