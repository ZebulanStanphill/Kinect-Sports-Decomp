extern int fn_82EEDD00();
extern int fn_82F41CE0();


__int64 fn_82EEE678(int param_1,short param_2,unsigned __int64 param_3,short *param_4,int param_5,
                      unsigned short *param_6,int param_7)

{
  unsigned int uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  short sVar9;
  int aiStack_80 [32];
  
  uVar1 = *(unsigned int *)(param_1 + 0x70);
  lVar8 = 0;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    lVar8 = -0x7fff0001;
  }
  else {
    sVar9 = 0;
    uVar6 = 0;
    if (uVar1 != 0) {
      do {
        aiStack_80[0] = 0;
        lVar8 = fn_82EEDD00(param_1,uVar6,aiStack_80);
        iVar2 = aiStack_80[0];
        if (lVar8 < 0) goto LAB_82eee8bc;
        sVar3 = sVar9;
        if ((param_2 == -1) || (param_2 == *(short *)(aiStack_80[0] + 0x14))) {
          if (param_7 == 0) {
            iVar4 = *(int *)(aiStack_80[0] + 8);
          }
          else {
            iVar4 = *(int *)(aiStack_80[0] + 0xc);
          }
          if (iVar4 == 0) {
            if ((param_3 & 0xffffffff) == 0) {
LAB_82eee7e8:
              if (((param_4 == (short *)0x0) || (*(short *)(iVar2 + 0x40) == *param_4)) ||
                 (*(int *)(iVar2 + 0x10) != 0)) {
                if ((param_5 != 0) && (uVar7 < *param_6)) {
                  iVar4 = uVar7 * 2;
                  *(short *)(iVar4 + param_5) = sVar9;
                  if (((param_3 & 0xffffffff) != 0) && (*(int *)(iVar2 + 0x38) != 0)) {
                    iVar5 = fn_82F41CE0(*(int *)(iVar2 + 0x38),param_3);
                    if (iVar5 != 0) {
                      *(short *)(iVar4 + param_5) = *(short *)(iVar4 + param_5) + 1;
                    }
                  }
                }
                uVar7 = uVar7 + 1 & 0xffff;
              }
            }
            else {
              if (*(int *)(aiStack_80[0] + 0x18) != 0) {
                iVar4 = fn_82F41CE0(*(int *)(aiStack_80[0] + 0x18),param_3);
                if ((iVar4 != 0) && ((param_7 != 0 || (*(int *)(iVar2 + 0x20) == 0))))
                goto LAB_82eee7e8;
              }
              if ((param_7 == 0) && (*(int *)(iVar2 + 0x20) != 0)) {
                iVar4 = fn_82F41CE0(*(int *)(iVar2 + 0x20),param_3);
                if (iVar4 != 0) goto LAB_82eee7e8;
              }
              if (*(int *)(iVar2 + 0x28) != 0) {
                iVar4 = fn_82F41CE0(*(int *)(iVar2 + 0x28),param_3);
                if (iVar4 != 0) goto LAB_82eee7e8;
              }
              if (*(int *)(iVar2 + 0x30) != 0) {
                iVar4 = fn_82F41CE0(*(int *)(iVar2 + 0x30),param_3);
                if (iVar4 != 0) goto LAB_82eee7e8;
              }
              if (*(int *)(iVar2 + 0x38) != 0) {
                iVar4 = fn_82F41CE0(*(int *)(iVar2 + 0x38),param_3);
                if (iVar4 != 0) goto LAB_82eee7e8;
              }
            }
            sVar3 = sVar9 + 1;
            if (*(int *)(iVar2 + 0x38) != 0) {
              sVar3 = sVar9 + 2;
            }
          }
        }
        sVar9 = sVar3;
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar1);
    }
    if ((param_5 != 0) && (*param_6 < uVar7)) {
      lVar8 = -0x3ff2c94f;
    }
  }
LAB_82eee8bc:
  *param_6 = (unsigned short)uVar7;
  return lVar8;
}

