typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827A0BD0();
extern int fn_827A8510();


unsigned __int64 fn_827A1630(int param_1,unsigned __int64 param_2,unsigned char *param_3)

{
  bool bVar1;
  unsigned char uVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  
  fn_827A0BD0();
  piVar4 = (int *)(param_1 + 0x24);
  if (((piVar4 == (int *)0x0) || ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) <= (param_2 & 0xffffffff)))
     || (bVar1 = false, (int)param_2 < 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    if (param_3 != (unsigned char *)0x0) {
      *param_3 = 0;
    }
    uVar2 = 0xffffffffffffffff;
  }
  else {
    if (param_3 != (unsigned char *)0x0) {
      uVar3 = fn_827A8510(*(unsigned int *)((int)((param_2 & 0xffffffff) << 2) + *piVar4));
      *param_3 = uVar3;
    }
    piVar4 = *(int **)((int)((param_2 & 0xffffffff) << 2) + *piVar4);
    if (*piVar4 < 0) {
      uVar2 = (unsigned __int64)*(unsigned char *)(piVar4 + 2);
    }
    else {
      uVar2 = (unsigned __int64)(unsigned int)piVar4[8];
    }
  }
  return uVar2;
}

