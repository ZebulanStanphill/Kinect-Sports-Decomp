typedef unsigned char bool;
#define true 1
#define false 0


void fn_82AE4D78(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  
  param_2 = param_2 * 8;
  uVar1 = *(unsigned int *)(param_2 + param_1);
  uVar2 = (param_3 & 0x3fff) << 4;
  param_4 = param_4 & 0xf;
  uVar4 = param_4 | uVar2 | uVar1 & 0xfffc0000;
  *(unsigned int *)(param_2 + param_1) = uVar4;
  if (param_5 == 0) {
    uVar4 = param_4 | uVar2 | uVar1 & 0xfff00000 | 0x40000;
  }
  else {
    if (((int)param_5 < 1) || (bVar3 = true, 9 < (int)param_5)) {
      bVar3 = false;
    }
    if (!bVar3) goto code_r0x82ae4df0;
    if (((int)param_5 < 2) || (bVar3 = true, 5 < (int)param_5)) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar4 = param_4 | uVar2 | uVar1 & 0xfff00000 | 0x80000;
    }
    else {
      uVar4 = uVar4 | 0xc0000;
    }
  }
  *(unsigned int *)(param_2 + param_1) = uVar4;
code_r0x82ae4df0:
  *(unsigned int *)(param_2 + param_1) =
       ((param_6 & 0xff) << 0xb | param_5 & 0x3f) << 0x14 |
       *(unsigned int *)(param_2 + param_1) & 0x7c0fffff;
  return;
}

