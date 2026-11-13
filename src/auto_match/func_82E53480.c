extern unsigned int *auStack_30;
extern int fn_82E50BE8();
extern int fn_82E53288();


unsigned __int64 fn_82E53480(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_30;
  
  uVar3 = 0;
  auStack_30 = 0;
  if ((param_2 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar1 = fn_82E50BE8(0x10c,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E53288(uVar1,param_1,&auStack_30);
      uVar3 = (unsigned __int64)auStack_30;
    }
    if (piVar2 == (int *)0x0) {
      uVar3 = 0xffffffff8007000e;
    }
    else if (((int)uVar3 < 0) ||
            (uVar3 = (**(int (***)())*piVar2)(piVar2,0xffffffff8215466c,param_2), (__int64)uVar3 < 0))
    {
      (**(int (***)())(*piVar2 + 0xac))(piVar2,1);
    }
  }
  return uVar3;
}

