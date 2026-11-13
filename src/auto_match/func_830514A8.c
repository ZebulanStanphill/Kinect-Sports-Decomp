typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8304FCF0();
extern int fn_83056130();
extern int fn_830561A0();


void fn_830514A8(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  char cVar5;
  __int64 lVar6;
  int iVar7;
  
  if (((param_1[0x24] == 0) &&
      (iVar7 = param_1[0x1b], iVar1 = param_1[8], lVar6 = *(__int64 *)(param_1 + 6),
      uVar4 = (**(int (***)())(*param_1 + 0x2c))(),
      ((__int64)iVar7 * (__int64)iVar1 & 0xffffffffU) + lVar6 <= uVar4)) &&
     ((param_1[0x1d] & 0x4000000U) != 0)) {
    fn_8304FCF0(param_1,1);
  }
  else {
    uVar2 = param_1[0x1d];
    param_1[0x1d] = uVar2 & 0xefffffff;
    if (((*(unsigned char *)((int)param_1 + 0xa9) & 0x80) == 0) || (iVar7 = 1, (uVar2 & 0x8000000) != 0)) {
      iVar7 = 0;
    }
    param_1[0x1d] = iVar7 << 0x18 | param_1[0x1d] & 0xfeffffffU;
  }
  if (((unsigned int)param_1[0x1d] >> 0x18 & 1) == 0) {
LAB_830515bc:
    if (((unsigned int)param_1[0x1d] >> 0x1b & 1) != 0) {
      cVar5 = (**(int (***)())(*param_1 + 4))(param_1);
      if (cVar5 != '\0') goto LAB_830515e8;
    }
    if ((param_1[0x1d] & 0x2000000U) != 0) {
      param_1[0x1d] = param_1[0x1d] & 0xfdffffff;
      fn_830561A0(param_1[0x18]);
    }
  }
  else {
    if ((unsigned int)param_1[0x26] < *(unsigned int *)(param_1[0x18] + 0x84)) {
LAB_830515ac:
      bVar3 = true;
    }
    else {
      bVar3 = false;
      if ((float)(unsigned int)param_1[0x26] < *(float *)(param_1[0x18] + 0x88) * (float)param_1[0x22])
      goto LAB_830515ac;
    }
    if (!bVar3) goto LAB_830515bc;
LAB_830515e8:
    if ((param_1[0x1d] & 0x2000000U) == 0) {
      param_1[0x1d] = param_1[0x1d] | 0x2000000;
      fn_83056130(param_1[0x18]);
    }
  }
  return;
}

