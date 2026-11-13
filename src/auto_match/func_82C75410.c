extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern float lbl_82006848;


unsigned __int64 fn_82C75410(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x5da8);
  if (iVar5 < 0) {
    iVar5 = 0;
    *(unsigned int *)(param_1 + 0x5da8) = 0;
  }
  iVar4 = *(int *)(param_1 + 0xe74);
  if ((-1 < iVar4) && (iVar4 < 5)) {
    *(int *)(param_1 + 0x3cfc) = iVar4;
    return 0;
  }
  if ((-1 < iVar5) && (iVar5 < 5)) {
code_r0x82c7557c:
    *(int *)(param_1 + 0x3cfc) = iVar5;
    return 0;
  }
  iVar5 = 0x1e;
  if (0 < *(int *)(param_1 + 0xe80)) {
    iVar5 = *(int *)(param_1 + 0xe80);
  }
  iVar4 = *(int *)(param_1 + 0xe84);
  if (iVar4 < 1) {
    iVar4 = 500;
  }
  iVar2 = *(int *)(param_1 + 0x5dac);
  if (((0 < iVar2) && (99 < iVar2)) && (iVar2 < 0x186a1)) {
    uVar1 = (unsigned int)(SQRT((float)(__int64)iVar4) * (float)(__int64)(iVar5 * param_2 * param_3) *
                  lbl_82006848);
    uVar3 = iVar2 * 10000 + ((int)uVar1 >> 1);
    trapWord(6,(unsigned __int64)uVar1,0);
    iVar5 = (int)uVar3 / (int)uVar1;
    trapWord(5,(unsigned __int64)uVar1 &
               ~((((unsigned __int64)uVar3 & 0x7fffffff) << 1 | (unsigned __int64)(uVar3 >> 0x1f)) - 1),0xffff);
    if (*(int *)(param_1 + 0x3d14) == 0) {
      iVar5 = iVar5 + -0x32;
    }
    iVar5 = iVar5 + -100;
    if (0x77 < iVar5) {
      *(unsigned int *)(param_1 + 0x3cfc) = 4;
      return 0;
    }
    if (0x59 < iVar5) {
      *(unsigned int *)(param_1 + 0x3cfc) = 3;
      return 0;
    }
    if (0x40 < iVar5) {
      *(unsigned int *)(param_1 + 0x3cfc) = 2;
      return 0;
    }
    if (0x29 < iVar5) {
      iVar5 = 1;
      goto code_r0x82c7557c;
    }
  }
  *(unsigned int *)(param_1 + 0x3cfc) = 0;
  return 0;
}

