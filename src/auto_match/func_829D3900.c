extern int fn_829C9838();
extern unsigned int lbl_83215058;
extern unsigned int lbl_8321505C;
extern unsigned int lbl_832171C8;


unsigned __int64
fn_829D3900(int param_1,int *param_2,unsigned int param_3,int param_4,unsigned int param_5,int *param_6,
             int *param_7)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  int iVar5;
  double dVar6;
  
  param_5 = param_5 & 0xffff;
  if (0x18ff < param_5) {
    if (0x7d06 < param_5) {
      param_5 = 0x7d07;
      goto LAB_829d3928;
    }
    if (0x18ff < param_5) goto LAB_829d3928;
  }
  param_5 = 0x1900;
LAB_829d3928:
  if ((((param_6 == (int *)0x0) || (param_7 == (int *)0x0)) || (param_1 != 2)) ||
     (((param_2 != (int *)0x0 && (*param_2 != 0)) && (*param_2 != 1)))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    RtlEnterCriticalSection(0xffffffff8315c3ec);
    if (lbl_8321505C == 0) {
      if (lbl_83215058 == 0) {
        uVar2 = 0xffffffff80070015;
        RtlLeaveCriticalSection(0xffffffff8315c3ec);
      }
      else {
        RtlLeaveCriticalSection(0xffffffff8315c3ec);
        uVar2 = 0xffffffff8007048f;
      }
    }
    else {
      iVar1 = (param_3 & 0x7fffffff) * -2 + 0x27f;
      uVar3 = (unsigned short)(param_4 * 2);
      uVar4 = (unsigned short)iVar1;
      dVar6 = (double)fn_829C9838(0xffffffff83217178,uVar4,uVar3);
      iVar5 = ((0x27f - ((int)*(short *)((param_5 >> 2 & 0x3ffe) + lbl_832171C8) >> 4)) - iVar1) -
              (int)dVar6;
      dVar6 = (double)fn_829C9838(0xffffffff832171a0,uVar4,uVar3);
      iVar1 = (int)dVar6 + param_4 * 2;
      if ((param_2 != (int *)0x0) && (*param_2 == 1)) {
        iVar5 = (iVar5 + -0xa0) * 2 - param_2[1];
        iVar1 = (iVar1 + -0x78) * 2 - param_2[2];
      }
      *param_6 = iVar5;
      *param_7 = iVar1;
      RtlLeaveCriticalSection(0xffffffff8315c3ec);
      uVar2 = 0;
    }
  }
  return uVar2;
}

