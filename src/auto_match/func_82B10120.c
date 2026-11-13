typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B10048();
extern int fn_82B84290();


int fn_82B10120(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
                 unsigned __int64 param_5,char param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  bool bVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  
  if ((param_6 == '\0') || ((*(unsigned int *)(param_3 + 8) & 0x3f80) != 0x3700)) goto LAB_82b10234;
  puVar6 = *(unsigned int **)((int)((param_4 + 0xb & 0xffffffff) << 2) + param_3);
  uVar1 = *puVar6;
  uVar9 = (unsigned __int64)uVar1 & 0x1f;
  if (((uVar1 & 0x18) == 0) || ((param_5 & 0x18) == 0)) {
    if (((uVar1 & 2) != 0) && ((param_5 & 1) != 0)) goto LAB_82b10178;
    if ((uVar1 & 4) == 0) {
LAB_82b101a4:
      bVar8 = true;
    }
    else {
      bVar8 = false;
      if ((param_5 & 1) == 0) goto LAB_82b101a4;
    }
  }
  else {
LAB_82b10178:
    bVar8 = false;
  }
  if (bVar8) {
    if (((uVar1 & 4) != 0) && ((param_5 & 2) != 0)) {
      uVar9 = uVar9 - 4;
    }
    uVar7 = param_5;
    if ((uVar9 & param_5 & 4) != 0) {
      uVar9 = uVar9 - 4;
      uVar7 = param_5 - 4;
    }
    if (((uVar9 & 1) != 0) && ((uVar7 & 2) != 0)) {
      uVar7 = uVar7 - 2;
    }
    if (((uVar9 | uVar7) & 0xfffffffe) == 0) {
      uVar2 = puVar6[3];
      uVar3 = *(unsigned int *)(uVar2 + 8) >> 7 & 0x7f;
      if ((uVar3 == 0x7d) || (bVar8 = false, uVar3 == 0x7c)) {
        bVar8 = true;
      }
      if (!bVar8) {
        param_4 = (unsigned __int64)(uVar1 >> 5) & 3;
        param_5 = uVar9 | uVar7;
        param_3 = uVar2;
      }
    }
  }
LAB_82b10234:
  iVar5 = fn_82B10048(param_1,param_2,param_3,param_4,param_5);
  if (iVar5 == 0) {
    iVar5 = fn_82B84290(param_1);
    if (param_6 != '\0') {
      *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(iVar5 + 8) & 0xfeffffe1 | 0x1000002;
    }
    uVar4 = fn_82AD17B0(param_1,param_3);
    puVar6 = (unsigned int *)fn_82AD1978(iVar5,uVar4);
    *puVar6 = (unsigned int)((param_4 & 0xffffffff) << 5) & 0x360 | 0x2001c80 | *puVar6 & 0xf3fffc80 |
              (unsigned int)param_5 & 0x1f;
  }
  return iVar5;
}

