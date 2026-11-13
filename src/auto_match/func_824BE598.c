typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8225F160();
extern int fn_8248BE38();
extern int fn_824BF608();
extern unsigned int lbl_82191350;
extern unsigned int lbl_8326B908;
extern unsigned int lbl_8328111C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_824BE598(double param_1,int *param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             int param_6,int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int *piVar7;
  int *piVar8;
  unsigned __int64 auStack_50 [10];
  
  if (lbl_8328111C != 0) {
    if (param_2[0x151] == 0) {
      iVar2 = fn_8225F160();
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x68);
    }
    else {
      param_3 = param_2[0x152];
      uVar4 = 3;
      if (param_6 == 0) {
        return 0;
      }
    }
    if (param_2[0x143] + 1 <= uVar4) {
      auStack_50[0] = param_5 & 0xffffffff;
      if ((float)auStack_50[0] * lbl_82191350 <= *(float *)(*(int *)(*param_2 + 0x14) + 0x30)) {
        if (param_6 != 0) {
          for (piVar7 = (int *)param_2[1]; piVar7 != (int *)param_2[2]; piVar7 = piVar7 + 10) {
            if (lbl_8326B908 - (float)auStack_50[0] * lbl_82191350 < (float)piVar7[9]) {
              if (param_2[0x151] == 0) {
                if (piVar7[7] == 0) {
                  return 0;
                }
                bVar1 = piVar7[8] == param_8;
              }
              else {
                bVar1 = piVar7[5] == param_2[0x152];
              }
              if (!bVar1) {
                return 0;
              }
              if (param_1 <= (double)(float)piVar7[1]) {
                return 0;
              }
              goto LAB_824be948;
            }
          }
        }
        iVar2 = param_2[0x151];
        if (iVar2 == 0) {
          if ((param_7 == 0) && (param_6 == 0)) {
            uVar6 = param_2[param_3 + 0x24];
          }
          else {
            uVar6 = param_2[0x2a];
          }
          uVar4 = uVar6 / uVar4;
        }
        else {
          uVar4 = 1;
        }
        if (iVar2 == 0) {
          if ((param_7 == 0) && (param_6 == 0)) {
            piVar3 = (int *)param_2[2];
            uVar5 = 0;
            if ((int *)param_2[1] != piVar3) {
              piVar7 = (int *)param_2[1] + 6;
              do {
                if ((((piVar7[2] != param_8) || (*piVar7 != 0)) || (piVar7[1] != 0)) ||
                   (bVar1 = true, piVar7[-1] != param_3)) {
                  bVar1 = false;
                }
                if (bVar1) {
                  uVar5 = uVar5 + 1;
                }
                piVar8 = piVar7 + 4;
                piVar7 = piVar7 + 10;
              } while (piVar8 != piVar3);
            }
          }
          else {
            piVar3 = (int *)param_2[2];
            uVar5 = 0;
            if ((int *)param_2[1] != piVar3) {
              piVar7 = (int *)param_2[1] + 6;
              do {
                if ((piVar7[2] == param_8) && ((*piVar7 != 0 || (piVar7[1] != 0)))) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  uVar5 = uVar5 + 1;
                }
                piVar8 = piVar7 + 4;
                piVar7 = piVar7 + 10;
              } while (piVar8 != piVar3);
            }
          }
        }
        else {
          piVar7 = (int *)param_2[1];
          piVar3 = (int *)param_2[2];
          uVar5 = 0;
          if (piVar7 != piVar3) {
            do {
              if (piVar7[5] == param_2[0x152]) {
                uVar5 = uVar5 + 1;
              }
              piVar7 = piVar7 + 10;
            } while (piVar7 != piVar3);
          }
        }
        if (uVar4 != 0) {
          if (uVar4 <= (uVar5 & 0xffffffff)) {
            piVar7 = (int *)param_2[2];
            for (piVar8 = (int *)param_2[1]; piVar8 != (int *)param_2[2]; piVar8 = piVar8 + 10) {
              if (iVar2 == 0) {
                if (piVar8[8] != param_8) {
LAB_824be8f8:
                  bVar1 = false;
                  goto LAB_824be8fc;
                }
                if ((piVar8[6] == 0) || (param_7 == 0)) {
                  if (piVar8[7] != 0) {
                    if ((param_6 != 0) || (param_7 != 0)) goto LAB_824be904;
                    if (piVar8[7] != 0) goto LAB_824be8f8;
                  }
                  if ((((piVar8[6] != 0) || (param_6 != 0)) || (param_7 != 0)) ||
                     (piVar8[5] != param_3)) goto LAB_824be8f8;
                }
LAB_824be904:
                if ((piVar7 == piVar3) || ((float)piVar8[1] < (float)piVar7[1])) {
                  piVar7 = piVar8;
                }
              }
              else {
                bVar1 = param_2[0x152] == piVar8[5];
LAB_824be8fc:
                if (bVar1) goto LAB_824be904;
              }
            }
            if (piVar7 == piVar3) {
              return 0;
            }
            if ((param_1 <= (double)(float)piVar7[1]) && (param_7 == 0)) {
              return 0;
            }
LAB_824be948:
            fn_8248BE38(*param_2,*piVar7);
            fn_824BF608(auStack_50,param_2 + 1,piVar7);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

