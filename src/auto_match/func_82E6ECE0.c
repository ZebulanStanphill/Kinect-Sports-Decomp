extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E6EC58();


unsigned __int64 fn_82E6ECE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_40;
  
  if (((param_1 & 0xffffffff) == 0) || (param_3 == (unsigned int *)0x0)) {
    uVar3 = 0xffffffff80004003;
  }
  else {
    *param_3 = 0;
    auStack_40 = 0;
    uVar3 = 0;
    uVar1 = fn_82E50BE8(0x40,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E6EC58(uVar1,param_1,param_2,&auStack_40);
      uVar3 = (unsigned __int64)auStack_40;
    }
    *param_3 = piVar2;
    if (piVar2 == (int *)0x0) {
      uVar3 = 0xffffffff8007000e;
    }
    else if ((int)uVar3 < 0) {
      (**(int (***)())(*piVar2 + 8))();
      *param_3 = 0;
    }
  }
  return uVar3;
}

