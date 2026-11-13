typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F65350();
extern unsigned int lbl_8323FF50;


unsigned __int64 fn_82E83530(int param_1)

{
  int iVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar6;
  unsigned __int64 uVar5;
  int *piVar7;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 0x76c8) == 0) || (*(int *)(param_1 + 0x76e0) != 0)) {
    iVar6 = *(int *)(param_1 + 0x7b38);
    if (iVar6 != 0) {
      if (*(int *)(param_1 + 0xaf4) != 0) {
        return 0;
      }
      if (iVar6 != 0) goto LAB_82e83594;
    }
    if (*(int *)(param_1 + 0xaf0) == 0) {
LAB_82e83594:
      if ((*(int *)(param_1 + 4) == 8) &&
         ((*(int *)(param_1 + 0x844) != 0 || (*(int *)(param_1 + 0x1a74) != 0)))) {
        if ((*(int *)(param_1 + 0x6d54) == 0) || (iVar6 == 0)) {
          iVar6 = *(int *)(param_1 + 0xaf0);
        }
        else {
          iVar6 = *(int *)(param_1 + 0xaf4);
        }
        if ((iVar6 == 0) && ((*(unsigned int *)(param_1 + 0x1e4c) & 1) == 1)) {
          uVar3 = fn_82F65350();
          iVar6 = 1;
          *(unsigned int *)(param_1 + 0x36c) =
               uVar3 + (((int)uVar3 >> 6) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0)) * -0x40 +
               0x40;
          if (1 < *(int *)(param_1 + 0x4ec)) {
            piVar7 = (int *)(param_1 + 0x36c);
            do {
              iVar1 = *piVar7;
              iVar4 = fn_82F65350();
              uVar5 = (__int64)iVar4 / 3 + ((__int64)iVar4 >> 0x3f);
              iVar6 = iVar6 + 1;
              uVar5 = (uVar5 & 0xffffffff) + ((uVar5 & 0xffffffff) >> 0x1f);
              piVar7 = piVar7 + 1;
              *piVar7 = (iVar4 - ((int)uVar5 + (int)((uVar5 & 0xffffffff) << 1))) + iVar1 + 1;
            } while (iVar6 < *(int *)(param_1 + 0x4ec));
          }
          bVar2 = true;
        }
      }
      if ((lbl_8323FF50 < 1) || (*(__int64 *)(param_1 + 0x2e0) != 1)) {
        if ((*(int *)(param_1 + 0x1a78) != 0) && (*(int *)(param_1 + 0x1a84) != 0)) {
          *(unsigned int *)(param_1 + 0x1a84) = 0;
          return 1;
        }
        if (((*(int *)(param_1 + 0x7818) == 0) && (!bVar2)) && (*(int *)(param_1 + 0x77ec) == 0)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

