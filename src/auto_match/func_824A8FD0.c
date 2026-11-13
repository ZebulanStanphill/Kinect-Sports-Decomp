extern unsigned int *auStack_48;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern int fn_823AA970();
extern int fn_8249ABC0();
extern int fn_8249F490();
extern int fn_824A9308();
extern int fn_824A9408();
extern int fn_82539560();
extern int fn_82F4DA20();
extern int fn_82F4DD60();
extern int fn_82F4EBC0();
extern int fn_82F4ECF8();
extern unsigned int iStack_50;
extern unsigned int lbl_821914B0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_34;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


void fn_824A8FD0(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int *puVar4;
  int iVar6;
  unsigned char uVar8;
  __int64 lVar5;
  int iVar7;
  unsigned int uVar9;
  double dVar10;
  double dVar11;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_48 [8];
  unsigned int uStack_40;
  float fStack_3c;
  float fStack_38;
  unsigned int uStack_34;
  
  (**(int (***)())*param_2)(param_2,auStack_48,&uStack_4c);
  (**(int (***)())(*param_2 + 4))(param_2,uStack_4c,&iStack_50);
  uVar9 = 1;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar6 = *(int *)(iStack_50 + 0x40);
    uVar9 = (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x430) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x430) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x330) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x330) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x230) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x230) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x130) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x130) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0xb0) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0xb0) &
                   0xffffffff) >> 0x1f);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar6 = *(int *)(iStack_50 + 0x40);
    uVar9 = (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x4b0) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x4b0) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x470) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x470) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x430) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x430) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x3b0) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x3b0) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x370) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x370) &
                   0xffffffff) >> 0x1f) &
            (unsigned int)((-(unsigned __int64)*(unsigned int *)(iVar6 + 0x330) & ~(unsigned __int64)*(unsigned int *)(iVar6 + 0x330) &
                   0xffffffff) >> 0x1f) & uVar9;
  }
  if (uVar9 != 0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      iVar6 = fn_8249ABC0();
      puVar4 = *(unsigned int **)(iVar6 + 0xec);
      uStack_40 = *puVar4;
      fStack_3c = (float)puVar4[1];
      fStack_38 = (float)puVar4[2];
      uStack_34 = puVar4[3];
      iVar6 = fn_8249F490(&uStack_40);
      if (iVar6 == 0) {
        return;
      }
    }
    iVar6 = fn_824A9308(param_1,iStack_50);
    if ((((iVar6 != 0) && (iVar6 = fn_824A9408(param_1,iStack_50), iVar6 != 0)) &&
        (iVar6 = fn_823AA970(param_1), -1 < iVar6)) && (iVar6 < 2)) {
      uVar8 = fn_823AA970(param_1);
      lVar5 = fn_82F4EBC0(uVar8);
      if (lVar5 != 0) {
        iVar6 = fn_82F4DA20(2);
        iVar7 = fn_82F4ECF8(lVar5);
        iVar6 = fn_82F4DD60(*(unsigned int *)(iVar7 * 0x1c0 + iVar6 + 0x34),&uStack_40);
        if (iVar6 != 0) {
          dVar11 = (double)*(float *)(param_1 + 0x68);
          if (*(int *)(param_1 + 0x50) == 0) {
            fVar1 = *(float *)(param_1 + 0x60);
            fVar2 = *(float *)(param_1 + 0x5c);
            fVar3 = fStack_3c;
          }
          else {
            fVar1 = *(float *)(param_1 + 0x58);
            fVar2 = *(float *)(param_1 + 0x54);
            fVar3 = fStack_38;
          }
          dVar10 = (double)fn_82539560((double)fVar3,(double)fVar2,(double)fVar1,
                                        (double)ltcg_pool_0_0f,(double)lbl_821CA460);
          fVar1 = (float)((double)(float)(dVar10 - dVar11) * (double)*(float *)(param_1 + 100) +
                         dVar11);
          dVar10 = (double)fVar1;
          *(float *)(param_1 + 0x68) = fVar1;
          if ((dVar11 <= dVar10) && ((double)lbl_821914B0 <= dVar10)) {
            *(unsigned int *)(param_1 + 0x6c) = 1;
          }
        }
      }
    }
  }
  return;
}

