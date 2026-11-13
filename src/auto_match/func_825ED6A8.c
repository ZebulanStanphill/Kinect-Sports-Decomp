typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorConditionalSelect();


bool fn_825ED6A8(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  bool bVar4;
  int in_r0;
  int iVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float in_register_00010430;
  float in_register_00010434;
  float in_register_00010438;
  float in_vr67;
  float afStack_10 [4];
  
  if (param_2[4] == 0) {
    return false;
  }
  param_2 = (int *)*param_2;
  if ((param_2[*(int *)(param_1 + 0x10) + 0x1e] & 0x20U) == 0) {
    if ((*(int *)(*param_2 + 0x90) != 0) && (*(char *)(*(int *)(param_1 + 4) + 0xbdc) == '\0')) {
      return false;
    }
    iVar5 = *(int *)(param_1 + 4);
    if ((*(int *)(iVar5 + 0x30) != 1) || (bVar4 = true, *(char *)(iVar5 + 0xbdc) == '\0')) {
      bVar4 = false;
    }
    if (bVar4) {
      fVar1 = (float)param_2[8];
      vectorConditionalSelect(in_vs45,in_vs32,in_vs44);
      pfVar3 = (float *)(*(int *)(param_1 + 0x10) * 0x200 + iVar5 + 0x150U & 0xfffffff0);
      fVar2 = in_register_00010430 * *pfVar3 + in_register_00010434 * pfVar3[1] +
              in_register_00010438 * pfVar3[2] + in_vr67 * pfVar3[3];
      pfVar3 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
      *pfVar3 = fVar2;
      pfVar3[1] = fVar2;
      pfVar3[2] = fVar2;
      pfVar3[3] = fVar2;
      if (afStack_10[0] <= fVar1) {
        iVar5 = 0;
        if (-fVar1 <= afStack_10[0]) {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = 1;
      }
      iVar5 = *(int *)(param_1 + 0x30) - iVar5;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x30) + -2;
    }
    return iVar5 == 0;
  }
  return false;
}

