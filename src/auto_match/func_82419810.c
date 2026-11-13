extern int fn_822ABAF8();
extern int fn_8235D350();
extern int fn_823608F8();
extern int fn_823609C0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82419810(int *param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  
  uVar5 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(*param_1 + 0x1ba8);
  if (uVar4 != 0) {
    piVar3 = (int *)(*(int *)(*param_1 + 0x1ba4) + 0x48);
    uVar5 = 0;
    do {
      if ((piVar3[-2] == 5) && (*piVar3 != 0)) {
        uVar5 = uVar5 + 1;
      }
      piVar3 = piVar3 + 0x13;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  piVar3 = param_1 + 2;
  uVar6 = 1;
  uVar4 = (unsigned __int64)
          (unsigned int)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (float)(__int64)(int)uVar5);
  if (1 < (unsigned int)((param_1[3] - param_1[2]) / 0x1ac)) {
    iVar7 = 0x1ac;
    do {
      fn_823608F8(*param_1,*(unsigned int *)(*piVar3 + iVar7),0);
      piVar1 = *(int **)(*(int *)(*piVar3 + iVar7) * 4 + **(int **)(*param_1 + 8));
      fn_822ABAF8(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0xffffffff821b82e4);
      uVar2 = fn_8235D350(*param_1,5,0,1,uVar4);
      fn_823609C0(*param_1,*(unsigned int *)(*piVar3 + iVar7),uVar2);
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x1ac;
      uVar4 = (uVar4 + 1) -
              (__int64)(int)((uVar4 + 1 & 0xffffffff) / (unsigned __int64)uVar5) * (__int64)(int)uVar5;
    } while (uVar6 < (unsigned int)((param_1[3] - *piVar3) / 0x1ac));
  }
  return;
}

