typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FA5190();
extern unsigned int uStack00000018;


void fn_830196F8(unsigned int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uStack00000018;
  
  uVar6 = (param_2 & 0xffffffff) + (param_2 >> 0x20);
  iVar4 = (int)((uVar6 + ((uVar6 & 0xffffffff) / 0xc1) * -0xc1 + 1 & 0xffffffff) << 2);
  piVar2 = *(int **)(iVar4 + (int)param_1);
  piVar5 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      if (((unsigned __int64)(unsigned int)piVar2[1] != param_2 >> 0x20) ||
         (bVar3 = true, (unsigned __int64)(unsigned int)piVar2[2] != (param_2 & 0xffffffff))) {
        bVar3 = false;
      }
      if (bVar3) break;
      piVar1 = (int *)*piVar2;
      piVar5 = piVar2;
      piVar2 = piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    if (piVar2 != (int *)0x0) {
      if (piVar5 == (int *)0x0) {
        *(int *)(iVar4 + (int)param_1) = *piVar2;
      }
      else {
        *piVar5 = *piVar2;
      }
      uStack00000018 = param_2;
      fn_82FA5190(*param_1);
      param_1[0xc2] = param_1[0xc2] + -1;
    }
  }
  return;
}

