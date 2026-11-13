extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82CE5458();
extern float lbl_8201DFEC;


int fn_82DAC508(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  int iVar11;
  int iVar12;
  float afStack_50;
  
  iVar11 = *(int *)(param_1 + 0x58);
  iVar5 = *(int *)(param_1 + 0x5c);
  afStack_50 = SQRT(*(float *)(iVar5 + 0x90) * *(float *)(iVar11 + 0x90));
  fn_82CE5458(param_5 + 0xc,&afStack_50);
  fVar3 = *(float *)(iVar5 + 0x94);
  fVar4 = *(float *)(iVar11 + 0x94);
  *(unsigned char *)(param_5 + 0xe) = 0;
  *(char *)(param_5 + 0xd) = (char)(int)(SQRT(fVar3 * fVar4) * lbl_8201DFEC);
  iVar12 = *(int *)(param_2 + 0xc);
  iVar7 = param_2;
  while (iVar6 = iVar12, iVar6 != 0) {
    iVar7 = iVar6;
    iVar12 = *(int *)(iVar6 + 0xc);
  }
  bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + 8);
  iVar7 = *(char *)(iVar7 + 0x10) + iVar7;
  bVar2 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + 9);
  if ((unsigned int)bVar2 + (unsigned int)bVar1 != 0) {
    iVar12 = param_3;
    if (iVar7 == iVar11) {
      iVar5 = iVar7;
      iVar12 = param_2;
      param_2 = param_3;
    }
    iVar7 = iVar5;
    uVar9 = (unsigned int)bVar1;
    if ((int)param_4 <= (int)(unsigned int)bVar1) {
      uVar9 = param_4;
    }
    uVar8 = (unsigned int)bVar2;
    if ((int)(param_4 - uVar9) <= (int)(unsigned int)bVar2) {
      uVar8 = param_4 - uVar9;
    }
    iVar11 = 0;
    if (iVar12 != 0) {
      puVar10 = (unsigned int *)(param_5 + 0x10);
      do {
        if ((int)uVar9 <= iVar11) break;
        iVar11 = iVar11 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *(unsigned int *)(iVar12 + 4);
        iVar12 = *(int *)(iVar12 + 0xc);
      } while (iVar12 != 0);
    }
    iVar11 = 0;
    if (param_2 != 0) {
      puVar10 = (unsigned int *)((uVar9 + 5) * 4 + param_5 + -4);
      do {
        if ((int)uVar8 <= iVar11) {
          return iVar7;
        }
        iVar11 = iVar11 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *(unsigned int *)(param_2 + 4);
        param_2 = *(int *)(param_2 + 0xc);
      } while (param_2 != 0);
    }
  }
  return iVar7;
}

