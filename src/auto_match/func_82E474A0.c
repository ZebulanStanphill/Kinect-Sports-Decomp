extern int fn_82E50BE8();
extern unsigned int lbl_82153980;


unsigned __int64 fn_82E474A0(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  if ((param_4 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    piVar1 = (int *)fn_82E50BE8(0x18,0,0,0,0);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[3] = param_1;
      piVar1[4] = param_2;
      piVar1[5] = param_3;
      piVar1[1] = 1;
      *piVar1 = (int)&lbl_82153980;
      piVar1[2] = 0;
    }
    if (piVar1 == (int *)0x0) {
      uVar2 = 0xffffffff8007000e;
    }
    else {
      uVar2 = (**(int (***)())*piVar1)(piVar1,0xffffffff82153188,param_4);
      (**(int (***)())(*piVar1 + 8))(piVar1);
    }
  }
  return uVar2;
}

