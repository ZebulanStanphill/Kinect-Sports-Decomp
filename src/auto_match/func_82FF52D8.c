#define true 1
extern int fn_82FA5190();


void fn_82FF52D8(unsigned int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar2 = (param_2 & 0xffffffff) * 0x8421085 >> 0x20;
  uVar2 = ((param_2 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
  iVar3 = (int)(((param_2 - ((uVar2 & 0x7ffffff) * 0x20 - uVar2)) + 1 & 0xffffffff) << 2);
  piVar1 = *(int **)(iVar3 + (int)param_1);
  piVar4 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    while( true ) {
      piVar5 = piVar1;
      if ((unsigned __int64)(unsigned int)piVar5[2] == (param_2 & 0xffffffff)) break;
      piVar1 = (int *)*piVar5;
      piVar4 = piVar5;
      if ((int *)*piVar5 == (int *)0x0) {
        return;
      }
    }
    if (piVar4 == (int *)0x0) {
      *(int *)(iVar3 + (int)param_1) = *piVar5;
    }
    else {
      *piVar4 = *piVar5;
    }
    fn_82FA5190(*param_1,piVar5);
    param_1[0x20] = param_1[0x20] + -1;
  }
  return;
}

