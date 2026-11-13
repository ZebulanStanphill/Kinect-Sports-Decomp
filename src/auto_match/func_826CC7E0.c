typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8268CC00();
extern int fn_8268CEC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


float * fn_826CC7E0(float *param_1,int param_2,unsigned int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  bool bVar8;
  float *pfVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned char auStack_60 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  fVar1 = lbl_821AAD20;
  uVar11 = (unsigned __int64)*(unsigned int *)(param_2 + 0xac);
  *param_1 = lbl_821AAD20;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  param_1[3] = fVar1;
  fn_8268CC00(&stack_pair_50.first);
  if (uVar11 != 0) {
    iVar10 = 0;
    do {
      piVar7 = *(int **)(*(int *)(param_2 + 0xa8) + iVar10);
      if (piVar7 != (int *)0x0) {
        stack_pair_50.first = *param_3;
        stack_pair_50.second = param_3[1];
        uStack_48 = param_3[2];
        uStack_44 = param_3[3];
        uStack_40 = param_3[4];
        uStack_3c = param_3[5];
        fn_8268CEC0(&stack_pair_50.first,piVar7 + 0x11);
        pfVar9 = (float *)(**(int (***)())(*piVar7 + 0x2c))(auStack_60,piVar7,&stack_pair_50.first);
        fVar1 = *pfVar9;
        fVar2 = pfVar9[2];
        fVar3 = pfVar9[1];
        fVar4 = pfVar9[3];
        if ((fVar2 <= fVar1) || (bVar8 = false, fVar4 <= fVar3)) {
          bVar8 = true;
        }
        if (!bVar8) {
          fVar5 = *param_1;
          fVar6 = param_1[2];
          if ((fVar6 <= fVar5) || (bVar8 = false, param_1[3] <= param_1[1])) {
            bVar8 = true;
          }
          if (bVar8) {
            param_1[2] = fVar2;
            param_1[3] = fVar4;
          }
          else {
            if (fVar5 <= fVar1) {
              fVar1 = fVar5;
            }
            if (fVar6 <= fVar2) {
              fVar6 = fVar2;
            }
            if (param_1[1] <= fVar3) {
              fVar3 = param_1[1];
            }
            fVar2 = param_1[3];
            if (param_1[3] <= fVar4) {
              fVar2 = fVar4;
            }
            param_1[2] = fVar6;
            param_1[3] = fVar2;
          }
          param_1[1] = fVar3;
          *param_1 = fVar1;
        }
      }
      uVar11 = uVar11 - 1;
      iVar10 = iVar10 + 4;
    } while (uVar11 != 0);
  }
  return param_1;
}

