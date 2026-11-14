typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82528948();
extern int fn_8252D970();
extern int fn_8257C8F0();
extern int fn_8257CB40();
extern int fn_825BC5E0();
extern int XMemSet();
extern unsigned int ltcg_pool_0_0f;
extern float lbl_8327F894;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern V16 vectorCompareEqualToFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82569598(double param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  float afStack_68;
  
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 0xd4)) {
    iVar7 = 0;
    dVar9 = (double)ltcg_pool_0_0f;
    do {
      piVar1 = *(int **)(iVar7 + *(int *)(param_2 + 0xd8) + 0x10);
      if (piVar1 != (int *)0x0) {
        iVar5 = iVar7 + *(int *)(param_2 + 0xd8);
        iVar2 = *(int *)(iVar5 + 0x14);
        if (*(int *)(iVar5 + 0x1c) == 0) {
          puVar3 = (unsigned int *)((int)in_r0 + param_2 + 0x10 & 0xfffffff0);
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar12 = puVar3[3];{ V16 _vt0 = vectorCompareEqualToFloatingPoint(in_vs44,in_vs45); memcpy(in_vs45, &_vt0, 16); }
          puVar4 = (unsigned int *)((int)piVar1 + (int)in_r0 + 0xa0 & 0xfffffff0);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar4[2] = uVar11;
          puVar4[3] = uVar12;
          piVar1[0x5c] = 0;
          fn_82528948(piVar1);
          fn_8252D970(param_1,piVar1);
        }
        if (iVar2 != 0) {
          fn_825BC5E0((double)*(float *)(param_2 + 0x88),(double)*(float *)(param_2 + 0x8c),
                            param_2,param_2 + 0xe4,iVar2,piVar1,param_6,param_7,0,0);
        }
        if (*(int *)(iVar7 + *(int *)(param_2 + 0xd8) + 0x20) == 0) {
          dVar8 = dVar9;
          if ((double)*(float *)(param_3 + 0x838) <= dVar9) {
            dVar8 = (double)(*(float *)(param_3 + 0x820) * lbl_8327F894);
          }
          piVar1[0x2cf] = (int)(float)((double)(float)piVar1[0x2d0] * dVar8);
          (**(int (***)())(*piVar1 + 0x14))(piVar1,param_3);
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x30;
    } while (iVar6 < *(int *)(param_2 + 0xd4));
  }
  XMemSet(&afStack_68,0,4);
  afStack_68 = (float)param_1;
  uStack_70 = 0x49;
  uStack_6c = 0xc;
  fn_8257C8F0(**(unsigned int **)(param_2 + 0x60),&uStack_70);
  fn_8257CB40((unsigned __int64)**(unsigned int **)(param_2 + 0x60) + 0x78,&uStack_70,1);
  return;
}

