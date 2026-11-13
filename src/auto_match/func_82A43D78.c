typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A1F2B8();
extern int fn_82A3FF60();


int fn_82A43D78(int *param_1)

{
  bool bVar1;
  unsigned __int64 in_r0;
  int iVar2;
  int *piVar3;
  
  bVar1 = false;
  if (((unsigned int)param_1[9] < (unsigned int)param_1[8]) && (iVar2 = KeGetCurrentProcessType(), iVar2 != 2)) {
    bVar1 = true;
  }
  if ((*param_1 == 0) || (bVar1)) {
    if (param_1[9] + 1U < 0x41) {
      piVar3 = (int *)fn_82A3FF60(0xffffffff83219d50,0x10,0x20970000,0);
      if (piVar3 != (int *)0x0) {
        piVar3[2] = *param_1;
        *param_1 = (int)(piVar3 + 1);
        *piVar3 = param_1[1];
        param_1[1] = (int)piVar3;
        param_1[9] = param_1[9] + 1;
      }
    }
    else {
      fn_82A1F2B8(0xffffffff820896a8);
      trapWord(0x1f,in_r0,0x16);
    }
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *param_1 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}

