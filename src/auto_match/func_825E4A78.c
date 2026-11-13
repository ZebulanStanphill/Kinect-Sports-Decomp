typedef unsigned char bool;
extern unsigned int ltcg_pool_0_0f;


void fn_825E4A78(int param_1,unsigned short param_2,unsigned short param_3,float *param_4,float *param_5,
                  float *param_6)

{
  bool bVar1;
  unsigned short uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  fVar4 = ltcg_pool_0_0f;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar8 = *(int *)(param_1 * 8 + -0x7cd8ff24);
    if (iVar8 != 0) {
      iVar6 = 0;
      iVar3 = *(int *)(param_1 * 8 + -0x7cd8ff20);
      iVar5 = iVar8;
      if (iVar8 < 0) {
        do {
          iVar8 = iVar8 >> 1;
          iVar7 = iVar8 * 0xc + iVar3;
          uVar2 = *(unsigned short *)(iVar8 * 0xc + iVar3);
          bVar1 = param_2 < uVar2;
          if ((param_2 == uVar2) &&
             (bVar1 = param_3 < *(unsigned short *)(iVar7 + 2), param_3 == *(unsigned short *)(iVar7 + 2))) {
            if ((param_5 != (float *)0x0) && (*(float *)(iVar7 + 4) != ltcg_pool_0_0f)) {
              *param_5 = *param_4 * *(float *)(iVar7 + 4) + *param_5;
            }
            if (param_6 == (float *)0x0) {
              return;
            }
            if (*(float *)(iVar7 + 8) == fVar4) {
              return;
            }
            *param_6 = param_4[1] * *(float *)(iVar7 + 8) + *param_6;
            return;
          }
          if (bVar1) {
            iVar5 = iVar8 + -1;
          }
          else {
            iVar6 = iVar8 + 1;
          }
          iVar8 = iVar6 + iVar5;
        } while (iVar5 < iVar6);
      }
    }
  }
  return;
}

