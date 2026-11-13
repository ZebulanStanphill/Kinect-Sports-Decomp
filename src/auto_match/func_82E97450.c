extern int fn_82E8E7A8();
extern int fn_82E8EF60();
extern int fn_82E93918();
extern unsigned int lbl_820FBB20;
extern unsigned int lbl_8215F6E0;


void fn_82E97450(int param_1,__int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  double dVar8;
  double dVar9;
  
  lVar6 = 0;
  lVar7 = param_2;
  dVar8 = lbl_8215F6E0;
  dVar9 = lbl_820FBB20;
  if ((int)param_3 < (int)param_2 + *(int *)(param_1 + 0x1ec8)) {
    do {
      iVar4 = *(int *)(param_1 + 0x1ee8) + 0xe;
      if (0x1e < iVar4) {
        iVar4 = 0x1e;
      }
      if (iVar4 <= *(int *)(param_1 + 0x2a0)) {
        return;
      }
      fn_82E8EF60(param_1,1);
      iVar4 = *(int *)(param_1 + 0x2a0) + param_4;
      *(int *)(param_1 + 0x2a0) = iVar4;
      if ((*(int *)(param_1 + 0x7808) == 0) &&
         ((((*(int *)(param_1 + 0x7800) != 0 || (*(int *)(param_1 + 0x7804) != 0)) &&
           (*(int *)(param_1 + 0x76c8) != 0)) && (*(int *)(param_1 + 0x1dac) == 5)))) {
        if ((0x18 < iVar4) && ((*(int *)(param_1 + 0x7820) < 8 || (*(int *)(param_1 + 0x7824) < 8)))
           ) {
          *(int *)(param_1 + 0x2a0) = iVar4 - param_4;
          fn_82E93918(param_1,param_2,lVar7,param_3,lVar6);
          lVar6 = lVar6 + 1;
        }
        if ((*(int *)(param_1 + 0x7820) < 7) && (iVar4 = *(int *)(param_1 + 0x2a0), iVar4 < 0x1b)) {
          if ((4 < *(int *)(param_1 + 0x7820)) || (0x17 < iVar4)) {
            uVar1 = (unsigned int)((double)(__int64)*(int *)(param_1 + 0x1f10) * dVar9);
            if (*(int *)(param_1 + 0x1f44) < (int)uVar1) {
              *(unsigned int *)(param_1 + 0x1f44) = uVar1;
              *(int *)(param_1 + 0x2a0) = iVar4 + -4;
              param_3 = (unsigned __int64)uVar1;
            }
          }
        }
        else {
          uVar1 = (unsigned int)((double)(__int64)*(int *)(param_1 + 0x1f10) * dVar8);
          if (*(int *)(param_1 + 0x1f44) < (int)uVar1) {
            *(unsigned int *)(param_1 + 0x1f44) = uVar1;
            *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + -6;
            param_3 = (unsigned __int64)uVar1;
          }
        }
      }
      uVar1 = *(unsigned int *)(param_1 + 0x1efc);
      if ((int)*(unsigned int *)(param_1 + 0x1efc) < (int)*(unsigned int *)(param_1 + 0x2a0)) {
        uVar1 = *(unsigned int *)(param_1 + 0x2a0);
      }
      *(unsigned int *)(param_1 + 0x2a0) = uVar1;
      uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ee8) + 0xe;
      iVar5 = (int)uVar3;
      iVar4 = 0x1e;
      if (iVar5 < 0x1f) {
        iVar4 = iVar5;
      }
      uVar2 = (unsigned __int64)uVar1;
      if ((iVar4 <= (int)uVar1) && (uVar2 = 0x1e, iVar5 < 0x1f)) {
        uVar2 = uVar3;
      }
      *(int *)(param_1 + 0x2a0) = (int)uVar2;
      fn_82E8E7A8(param_1,*(unsigned int *)(param_1 + 0xaf0),uVar2,*(unsigned int *)(param_1 + 0x590),
                    1,param_5,param_6,param_7);
      lVar7 = (((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3)
               + (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 4) & 0x1fffffff) << 3;
    } while ((int)param_3 < (int)lVar7 + *(int *)(param_1 + 0x1ec8));
  }
  return;
}

