#define true 1
extern int fn_82A6D090();
extern int fn_82A73130();
extern int fn_82A734A0();
extern int fn_82A73710();
extern int fn_82A75588();
extern int memset();


unsigned __int64 fn_82A73A70(int *param_1)

{
  short sVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int aiStack_80 [16];
  
  iVar2 = *param_1;
  aiStack_80[0] = 0;
  uVar7 = 0;
  if ((*(short *)(iVar2 + 0x22) == 1) && (*(int *)(iVar2 + 0x2e8) != 0)) {
    param_1[0x1d] = 1;
    *(unsigned int *)(iVar2 + 0x23c) = 1;
    puVar3 = (unsigned int *)param_1[0x1e];
    *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
    memset(puVar3[1],0,(unsigned __int64)*(unsigned short *)(iVar2 + 0x22) << 2);
  }
  iVar6 = param_1[0x16];
  do {
    if (iVar6 == 9) {
      return uVar7;
    }
    uVar4 = param_1[0x16];
    if (uVar4 < 9) {
      if (uVar4 == 1) {
        aiStack_80[0] = 0;
        uVar7 = fn_82A6D090(param_1 + 0x38,1,aiStack_80);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        param_1[0x18] = (unsigned int)(aiStack_80[0] != 0);
LAB_82a73f24:
        param_1[0x16] = 2;
      }
      else if (uVar4 == 2) {
        if (param_1[0x17] == 0) {
          if (param_1[0x18] == 0) {
            param_1[0x16] = 9;
            *(int *)(iVar2 + 0x23c) = param_1[0x1d];
            return uVar7;
          }
          if (param_1[0x18] == 1) {
            return 0xffffffff80040002;
          }
        }
        uVar7 = fn_82A75588(param_1 + 0x38,(unsigned __int64)(unsigned int)param_1[0x17] + 3);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        uVar7 = fn_82A73710(param_1);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        uVar7 = fn_82A73130(param_1);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        iVar6 = *(int *)(param_1[0x1d] * 0x98 + param_1[0x1e]);
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x16] = 3;
        uVar4 = (iVar6 + -1) * iVar6;
        param_1[0x1a] = iVar6;
        param_1[0x19] = ((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      }
      else if (uVar4 == 3) {
        iVar6 = param_1[0x1d] * 0x98 + param_1[0x1e];
        if ((*(int *)(iVar6 + 0xc) == 0) && (param_1[0x1b] < param_1[0x19])) {
          do {
            aiStack_80[0] = 0;
            uVar7 = fn_82A6D090(param_1 + 0x38,6,aiStack_80);
            if ((int)uVar7 < 0) {
              return uVar7;
            }
            *(char *)(*(int *)(iVar6 + 0x88) + param_1[0x1b]) = (char)aiStack_80[0] + -0x20;
            iVar5 = param_1[0x1b];
            param_1[0x1b] = iVar5 + 1;
          } while (iVar5 + 1 < param_1[0x19]);
        }
        param_1[0x16] = 4;
      }
      else if (uVar4 == 4) {
        iVar6 = param_1[0x1d] * 0x98 + param_1[0x1e];
        if ((*(int *)(iVar6 + 0xc) == 0) && (param_1[0x1c] < param_1[0x1a])) {
          do {
            aiStack_80[0] = 0;
            uVar7 = fn_82A6D090(param_1 + 0x38,1,aiStack_80);
            if ((int)uVar7 < 0) {
              return uVar7;
            }
            *(char *)(*(int *)(iVar6 + 0x8c) + param_1[0x1c]) = (char)aiStack_80[0];
            iVar5 = param_1[0x1c];
            param_1[0x1c] = iVar5 + 1;
          } while (iVar5 + 1 < param_1[0x1a]);
        }
        param_1[0x16] = 5;
      }
      else if ((uVar4 == 5) || (uVar4 == 6)) {
        uVar7 = fn_82A734A0(param_1);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        if (param_1[0x16] == 7) {
          iVar6 = *(int *)(param_1[0x1d] * 0x98 + param_1[0x1e]);
          param_1[0x16] = 8;
          param_1[0x17] = param_1[0x17] - iVar6;
          param_1[0x1d] = param_1[0x1d] + 1;
        }
      }
      else if (uVar4 != 7) {
        if (uVar4 != 0) {
          if (param_1[0x18] != 0) {
            aiStack_80[0] = 0;
            uVar7 = fn_82A6D090(param_1 + 0x38,1,aiStack_80);
            if ((int)uVar7 < 0) {
              return uVar7;
            }
            if (aiStack_80[0] == 0) {
              param_1[0x18] = 0;
              iVar6 = 0;
              param_1[0x17] = (int)*(short *)(iVar2 + 0x244);
              if (*(short *)(iVar2 + 0x22) != 0) {
                iVar5 = 0;
                do {
                  iVar6 = iVar6 + 1;
                  *(unsigned int *)(iVar5 + param_1[2]) = 0;
                  iVar5 = iVar5 + 8;
                } while (iVar6 < (int)(unsigned int)*(unsigned short *)(iVar2 + 0x22));
              }
            }
          }
          goto LAB_82a73f24;
        }
        param_1[0x18] = 0;
        iVar6 = 0;
        sVar1 = *(short *)(iVar2 + 0x244);
        param_1[0x1d] = 0;
        param_1[0x19] = 0;
        param_1[0x1b] = 0;
        param_1[0x1a] = 0;
        param_1[0x17] = (int)sVar1;
        param_1[0x1c] = 0;
        if (*(short *)(iVar2 + 0x22) != 0) {
          iVar5 = 0;
          do {
            iVar6 = iVar6 + 1;
            *(unsigned int *)(iVar5 + param_1[2]) = 0;
            iVar5 = iVar5 + 8;
          } while (iVar6 < (int)(unsigned int)*(unsigned short *)(iVar2 + 0x22));
        }
        if (0 < *(short *)(iVar2 + 0x244)) {
          puVar3 = (unsigned int *)param_1[0x1e];
          *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
          memset(puVar3[1],0,(unsigned __int64)*(unsigned short *)(iVar2 + 0x22) << 2);
        }
        param_1[0x16] = 1;
      }
    }
    iVar6 = param_1[0x16];
  } while( true );
}

