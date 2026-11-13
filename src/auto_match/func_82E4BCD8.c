typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82E92218();


void fn_82E4BCD8(int param_1,int *param_2,__int64 param_3)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  
  param_2[5] = 0;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = *(unsigned int *)(param_1 + 0x238);
  if (3 < (int)uVar1) {
    if (((int)param_3 < 0) && (param_3 = (unsigned __int64)uVar1 - 2, *(int *)(param_1 + 0x38) == 0)) {
      param_3 = (unsigned __int64)uVar1 - 1;
    }
    bVar2 = false;
    iVar3 = fn_82E92218(*(unsigned int *)(param_1 + 0x234),param_3,0);
    lVar6 = param_3 + -1;
    param_2[2] = iVar3;
    iVar3 = (int)lVar6;
    if (-1 < iVar3) {
      do {
        iVar4 = fn_82E92218(*(unsigned int *)(param_1 + 0x234),lVar6,0);
        if ((iVar4 == 2) || (iVar4 == 4)) {
          iVar5 = (int)param_3 - (int)lVar6;
          param_2[1] = iVar4;
          param_2[5] = iVar5;
          if (!bVar2) {
            param_2[4] = iVar5;
            bVar2 = true;
            *param_2 = iVar4;
          }
        }
        if (((int)lVar6 == iVar3) && (iVar4 == 3)) {
          param_2[3] = 1;
        }
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    if (-1 < (int)param_3) {
      do {
        iVar3 = fn_82E92218(*(unsigned int *)(param_1 + 0x234),param_3,0);
        if (iVar3 != 3) {
          return;
        }
        param_3 = param_3 + -1;
        param_2[6] = param_2[6] + 1;
      } while (-1 < param_3);
    }
  }
  return;
}

