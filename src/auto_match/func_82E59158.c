extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E58F80();


unsigned __int64 fn_82E59158(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int auStack_40;
  
  if (param_3 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_3 = 0;
    auStack_40 = 0;
    uVar1 = 0;
    uVar2 = fn_82E50BE8(0x18,0,0,0,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82E58F80(uVar2,param_1,param_2,&auStack_40);
      uVar1 = (unsigned __int64)auStack_40;
    }
    *param_3 = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar1 = 0xffffffff8007000e;
    }
    else if ((int)uVar1 < 0) {
      (**(int (***)())(*piVar3 + 8))();
      *param_3 = 0;
    }
  }
  return uVar1;
}

