typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8229CF08();
extern int fn_82417F58();
extern int fn_82419C70();
extern int fn_8288B760();


void fn_8241A280(double param_1,int *param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  
  if (((param_2[0xac] == 0) && (iVar4 = fn_82417F58(), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0x24) != 0)) {
    if (*(int *)(iVar4 + 0x168) == 0) {
      uVar5 = *(unsigned int *)(iVar4 + 0x16c);
    }
    else {
      uVar5 = fn_8288B760();
      uVar5 = uVar5 & 0xff;
    }
    if ((uVar5 != 0) && (iVar6 = fn_82419C70(param_2), iVar6 != 0)) {
      iVar6 = *param_2;
      if (param_2 == *(int **)(iVar6 + 0x2b20)) {
        iVar7 = *(int *)(*(int *)(iVar6 + 0xd4) + 0x24);
        if (*(int *)(iVar7 + 0x120c) == 1) {
          iVar7 = 1;
        }
        else {
          iVar7 = *(int *)(iVar7 + 0x1220);
        }
      }
      else {
        iVar7 = 0;
      }
      if (((iVar7 == 0) &&
          (fVar1 = (float)param_2[0x8d], param_2[0x8d] = (int)(float)((double)fVar1 + param_1),
          *(float *)(iVar6 + 0xc6c) < (float)((double)fVar1 + param_1))) &&
         ((*(int *)(iVar6 + 0xcb8) == 0 || (param_2[0xc] == 0)))) {
        if ((param_2[0x60] == 0) || (bVar2 = true, *(int *)(iVar4 + 0x1a0) != 0)) {
          bVar2 = false;
        }
        if ((param_2[0x61] == 0) || (bVar3 = true, *(int *)(iVar4 + 0x1e0) != 0)) {
          bVar3 = false;
        }
        if (bVar2) {
          if (bVar3) {
            iVar4 = 0;
          }
          else {
            iVar4 = 2;
          }
        }
        else {
          if (!bVar3) {
            return;
          }
          iVar4 = 1;
        }
        if (-1 < *(int *)(param_2[6] * 0x1ac + param_2[2] + 0xc)) {
          fn_8229CF08(*(unsigned int *)(*(int *)(iVar6 + 0xd4) + 0x1854),0,iVar4);
          *(unsigned int *)(iVar6 + 0x2cc4) = *(unsigned int *)(iVar6 + 0x2cc4) | 8;
        }
        param_2[0x8f] = iVar4;
      }
    }
  }
  return;
}

