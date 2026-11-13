extern unsigned int *auStack_30;
extern int fn_82E50BE8();
extern int fn_82E59050();


unsigned __int64 fn_82E59298(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int auStack_30;
  
  if (param_2 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    auStack_30 = 0;
    uVar1 = 0;
    uVar2 = fn_82E50BE8(0x14,0,0,0,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82E59050(uVar2,param_1,&auStack_30);
      uVar1 = (unsigned __int64)auStack_30;
    }
    *param_2 = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar1 = 0xffffffff8007000e;
    }
    else if ((int)uVar1 < 0) {
      (**(int (***)())(*piVar3 + 8))();
      *param_2 = 0;
    }
  }
  return uVar1;
}

