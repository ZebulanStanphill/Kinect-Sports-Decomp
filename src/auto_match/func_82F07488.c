typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ED3678();
extern int fn_82ED3BB0();
extern int fn_82F65350();


void fn_82F07488(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  bool bVar5;
  unsigned int uVar6;
  
  *(int *)(param_2 + 0x60) = *(int *)(param_1 + 0x588) * 2 + *(int *)(param_1 + 0x590) + -1;
  *(unsigned int *)(param_2 + 100) = *(unsigned int *)(param_1 + 0x588);
  *(unsigned int *)(param_2 + 0x68) = *(unsigned int *)(param_1 + 0x58c);
  if (*(int *)(param_1 + 0x97c) == 0) goto LAB_82f07624;
  if (*(unsigned int *)(param_1 + 0x984) == 0) {
    if (*(char *)(param_1 + 0x980) == '\x01') {
      if ((*(char *)(param_1 + 0x7b30) == '\0') || (bVar5 = true, *(int *)(param_1 + 0xaf0) != 0)) {
        bVar5 = false;
      }
      if (((*(unsigned char *)(param_1 + 0x7b31) == 0) || (*(int *)(param_1 + 0xaf0) != 1)) ||
         (bVar1 = true, *(unsigned char *)(param_1 + 0x7b32) < *(unsigned char *)(param_1 + 0x7b31))) {
        bVar1 = false;
      }
      if ((bVar5) || (bVar1)) {
        iVar3 = fn_82ED3BB0(*(unsigned int *)(param_1 + 0x7b40),param_4,param_3);
        if (iVar3 == 0) goto LAB_82f07624;
        *(unsigned int *)(param_2 + 0x60) = (unsigned int)*(unsigned char *)(param_1 + 0x981) * 2 + -1;
        uVar4 = (unsigned int)*(unsigned char *)(param_1 + 0x981);
        *(unsigned int *)(param_2 + 100) = (unsigned int)*(unsigned char *)(param_1 + 0x981);
        goto LAB_82f07620;
      }
      if (*(int *)(param_1 + 0x1a74) == 0) goto LAB_82f07624;
      uVar2 = fn_82F65350();
      if ((uVar2 & 1) == 0) {
        uVar6 = (unsigned int)*(unsigned char *)(param_1 + 0x981);
      }
      else {
        uVar6 = *(unsigned int *)(param_1 + 0x588);
      }
    }
    else {
      if (*(int *)(param_1 + 0x1a74) == 0) goto LAB_82f07624;
      uVar2 = fn_82F65350();
      if ((uVar2 & 0x1f) == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = fn_82F65350();
        uVar6 = uVar6 & 0x1f;
      }
    }
    *(unsigned int *)(param_2 + 100) = uVar6;
    uVar4 = *(unsigned int *)(param_2 + 100);
    *(unsigned int *)(param_2 + 0x60) = uVar6 * 2 + *(int *)(param_1 + 0x590) + -1;
  }
  else {
    if ((*(unsigned int *)(param_2 + 0x78) & *(unsigned int *)(param_1 + 0x984)) == 0) goto LAB_82f07624;
    *(unsigned int *)(param_2 + 0x60) = (unsigned int)*(unsigned char *)(param_1 + 0x981) * 2 + -1;
    uVar4 = (unsigned int)*(unsigned char *)(param_1 + 0x981);
    *(unsigned int *)(param_2 + 100) = (unsigned int)*(unsigned char *)(param_1 + 0x981);
  }
LAB_82f07620:
  *(unsigned int *)(param_2 + 0x68) = uVar4;
LAB_82f07624:
  if ((((*(unsigned int *)(param_1 + 0x7b2c) & 0x20) != 0) && (*(int *)(param_1 + 0x6d54) == 0)) &&
     ((*(int *)(param_1 + 0xaf0) != 2 && (*(int *)(param_1 + 0xb08) == 0)))) {
    iVar3 = *(int *)(param_1 + 0x7784);
    if (iVar3 == 0) {
      iVar3 = fn_82ED3678(*(unsigned int *)(param_1 + 0x7b40),param_4,param_3,0,0);
      if (iVar3 == 1) {
        *(unsigned int *)(param_1 + 0x7b2c) = 0x20;
        if (*(int *)(param_1 + 0xaf0) == 0) {
          return;
        }
        if (*(int *)(param_2 + 0x60) < 7) {
          return;
        }
        *(unsigned int *)(param_1 + 0x7b2c) = 0x2b;
        return;
      }
      iVar3 = 0x20;
    }
    *(int *)(param_1 + 0x7b2c) = iVar3;
  }
  return;
}

