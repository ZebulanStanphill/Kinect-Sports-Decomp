extern int fn_829EB3F8();
extern int fn_829EB7E8();


__int64 fn_829EBB98(int param_1,int param_2,int param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar4;
  unsigned int uVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  
  if ((((*(int *)(param_3 + 0x10) == 0) || (*(int *)(param_3 + 0x14) == 0)) ||
      (*(int *)(param_2 + 0x10) == 0)) || (*(int *)(param_2 + 0x14) == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    lVar2 = fn_829EB7E8(param_1,param_3,param_2);
    if (-1 < lVar2) {
      lVar11 = 0;
      lVar9 = (__int64)((*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8)) / 0xc);
      lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) -
              (__int64)((*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120)) / 0xc);
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) - lVar11;
          uVar6 = *(unsigned int *)(*(int *)(param_1 + 0x14c) + 0x10);
          uVar10 = (unsigned __int64)uVar6;
          if ((int)uVar3 <= (int)uVar6) {
            uVar10 = uVar3;
          }
          *(unsigned int *)(param_1 + 0x148) = 0;
          iVar7 = (int)uVar10;
          iVar1 = (int)lVar11;
          *(unsigned int *)(param_1 + 0x13c) = 0;
          *(unsigned int *)(param_1 + 0x134) = 0;
          if (iVar1 < (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100)) / 0xc) {
            *(int *)(param_1 + 0x130) = iVar1;
            iVar5 = (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100)) / 0xc - iVar1;
            if (iVar7 <= iVar5) {
              iVar5 = iVar7;
            }
            *(int *)(param_1 + 0x134) = iVar5;
          }
          if (((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100)) / 0xc < iVar7 + iVar1) &&
             (iVar1 < (int)(*(unsigned int *)(param_1 + 0x18) -
                           (*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0xc))) {
            *(unsigned int *)(param_1 + 0x138) = *(unsigned int *)(param_1 + 0x74);
            *(unsigned int *)(param_1 + 0x140) = *(unsigned int *)(param_1 + 0x78);
            iVar5 = (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100)) / 0xc;
            if (iVar5 < iVar1) {
              lVar4 = lVar11 - iVar5;
              do {
                uVar6 = *(int *)(param_1 + 0x140) + 1;
                *(unsigned int *)(param_1 + 0x140) = uVar6;
                if ((unsigned int)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0xc) <= uVar6) {
                  *(unsigned int *)(param_1 + 0x140) = 0;
                  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x7c);
                }
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
          }
          iVar5 = *(int *)(param_1 + 0x18) -
                  (*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0xc;
          if (iVar5 <= iVar7 + iVar1) {
            if (iVar5 < iVar1) {
              *(int *)(param_1 + 0x148) = iVar7;
              *(int *)(param_1 + 0x144) = iVar1 - iVar5;
            }
            else {
              *(unsigned int *)(param_1 + 0x144) = 0;
              *(int *)(param_1 + 0x148) = (iVar7 - iVar5) + iVar1;
            }
          }
          uVar6 = 0;
          *(int *)(param_1 + 0x13c) =
               (iVar7 - *(int *)(param_1 + 0x148)) - *(int *)(param_1 + 0x134);
          if (*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x154) >> 2 != 0) {
            iVar7 = 0;
            do {
              uVar6 = uVar6 + 1;
              *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x154)) = 0xffffffff;
              *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x174)) = 0;
              iVar7 = iVar7 + 4;
            } while (uVar6 < (unsigned int)(*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x154) >> 2));
          }
          fn_829EB3F8(param_1,param_3,lVar11,uVar10,0,lVar9,param_2,param_1 + 0xe0);
          fn_829EB3F8(param_1,param_3,lVar11,uVar10,lVar9,lVar8 - lVar9,param_2,param_1 + 0x100);
          fn_829EB3F8(param_1,param_3,lVar11,uVar10,lVar8,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) - lVar8,param_2,param_1 + 0x118);
          lVar11 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x14c) + 0x10) + lVar11;
        } while ((int)lVar11 < *(int *)(param_1 + 0x18));
      }
    }
  }
  return lVar2;
}

