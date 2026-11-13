#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_82302B40();
extern int fn_82302CE0();
extern int fn_82359C18();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern int fn_82F63108();
extern unsigned int iStack_94;
extern unsigned int iStack_d4;
extern unsigned int lbl_821AECE4;
extern unsigned int lbl_821AEDA8;
extern unsigned int lbl_821AEDF0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;
extern unsigned int uStack_11c;
extern unsigned int uStack_124;
extern unsigned int uStack_12c;
extern unsigned int uStack_134;
extern unsigned int uStack_13c;
extern unsigned int uStack_144;
extern unsigned int uStack_14c;
extern unsigned int uStack_154;
extern unsigned int uStack_16c;
extern unsigned int uStack_194;
extern unsigned int uStack_1a4;
extern unsigned int uStack_78;
extern unsigned int uStack_b8;


void fn_82301BE8(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  char cVar1;
  char *pcVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  unsigned __int64 in_r0;
  unsigned char *puVar7;
  char *pcVar8;
  int iVar9;
  unsigned int *puVar10;
  __int64 lVar11;
  double dVar12;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  int aiStack_1b0 [3];
  unsigned int uStack_1a4;
  int *piStack_1a0;
  unsigned int *puStack_19c;
  char *pcStack_198;
  unsigned int uStack_194;
  int aiStack_190 [4];
  int *piStack_180;
  unsigned char **ppuStack_170;
  unsigned __int64 uStack_16c;
  unsigned char ***pppuStack_160;
  unsigned int uStack_154;
  unsigned char *puStack_150;
  unsigned int uStack_14c;
  char *pcStack_148;
  unsigned int uStack_144;
  char *pcStack_140;
  unsigned int uStack_13c;
  char *pcStack_138;
  unsigned int uStack_134;
  char *pcStack_130;
  unsigned int uStack_12c;
  char *pcStack_128;
  unsigned int uStack_124;
  char *pcStack_120;
  unsigned int uStack_11c;
  unsigned int auStack_110 [4];
  unsigned int *puStack_100;
  unsigned char auStack_f0 [28];
  int iStack_d4;
  unsigned char auStack_d0 [16];
  float fStack_c0;
  float fStack_bc;
  unsigned int uStack_b8;
  unsigned char auStack_b0 [28];
  int iStack_94;
  unsigned char auStack_90 [16];
  float fStack_80;
  float fStack_7c;
  unsigned int uStack_78;
  unsigned char auStack_70 [16];
  int *piStack_60;
  
  iVar9 = param_1 + 100;
  lVar11 = 4;
  do {
    fn_82302CE0(iVar9);
    fVar6 = ltcg_pool_0_0f;
    lVar11 = lVar11 + -1;
    iVar9 = iVar9 + 0x10;
  } while (lVar11 != 0);
  ppuStack_170 = &lbl_821AEDF0;
  dVar12 = (double)ltcg_pool_0_0f;
  pcStack_148 = "footplay_sidetoside_part2";
  puStack_150 = &lbl_821AECE4;
  *(float *)(param_1 + 0x1d4) = ltcg_pool_0_0f;
  piStack_1a0 = aiStack_1b0;
  *(float *)(param_1 + 0x1d0) = fVar6;
  *(float *)(param_1 + 0x1dc) = fVar6;
  pcStack_138 = "footplay_sidetoside_part4";
  pcStack_130 = "footplay_sidetoside_part5";
  pcStack_128 = "footplay_rightandback_part1";
  uStack_16c = CONCAT44(piStack_1a0,param_1);
  *(float *)(param_1 + 0x1d8) = fVar6;
  aiStack_1b0[0] = 1;
  uStack_14c = 1;
  pcStack_140 = "footplay_sidetoside_part3";
  pppuStack_160 = &ppuStack_170;
  uStack_144 = 1;
  uStack_13c = 2;
  puVar10 = (unsigned int *)(&stack0x00000000 + -0x154);
  lVar11 = 7;
  uStack_134 = 3;
  uStack_12c = 3;
  uStack_124 = 2;
  pcStack_120 = "footplay_rightandback_part2";
  uStack_11c = 2;
  puStack_19c = (unsigned int *)param_1;
  do {
    fn_82230300(&stack0x00000000 + -0xf0,0,0);
    pcVar2 = (char *)puVar10[1];
    iStack_d4 = 0;
    puVar3 = (unsigned int *)((unsigned int)(auStack_d0 + (int)in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    uStack_b8 = 0;
    fStack_c0 = (float)dVar12;
    fStack_bc = (float)dVar12;
    pcVar8 = pcVar2;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    fn_82230360(&stack0x00000000 + -0xf0,pcVar2,pcVar8 + (-1 - (int)pcVar2));
    puVar10 = puVar10 + 2;
    uStack_b8 = *puVar10;
    fStack_bc = (float)dVar12;
    puVar3 = (unsigned int *)((unsigned int)(auStack_d0 + (int)in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    fStack_c0 = (float)dVar12;
    iStack_d4 = aiStack_1b0[0];
    fn_82302B40(param_1 + 0x74,&stack0x00000000 + -0xf0);
    aiStack_1b0[0] = aiStack_1b0[0] + 1;
    fn_82230300(&stack0x00000000 + -0xf0,1,0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puStack_19c = (unsigned int *)0x1;
  uStack_194 = 1;
  piStack_1a0 = &lbl_821AEDA8;
  pcStack_198 = "footplay_noballcontact2";
  puVar10 = (unsigned int *)(&stack0x00000000 + -0x1a4);
  lVar11 = 2;
  do {
    fn_82230300(&stack0x00000000 + -0xb0,0,0);
    pcVar2 = (char *)puVar10[1];
    iStack_94 = 0;
    puVar3 = (unsigned int *)((unsigned int)(auStack_90 + (int)in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    uStack_78 = 0;
    fStack_80 = (float)dVar12;
    fStack_7c = (float)dVar12;
    pcVar8 = pcVar2;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    fn_82230360(&stack0x00000000 + -0xb0,pcVar2,pcVar8 + (-1 - (int)pcVar2));
    puVar10 = puVar10 + 2;
    uStack_78 = *puVar10;
    fStack_7c = (float)dVar12;
    puVar3 = (unsigned int *)((unsigned int)(auStack_90 + (int)in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    fStack_80 = (float)dVar12;
    iStack_94 = aiStack_1b0[0];
    fn_82302B40(param_1 + 0x84,&stack0x00000000 + -0xb0);
    aiStack_1b0[0] = aiStack_1b0[0] + 1;
    fn_82230300(&stack0x00000000 + -0xb0,1,0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (0xf < (unsigned int)param_3[5]) {
    param_3 = (unsigned int *)*param_3;
  }
  fn_8255FD70(&stack0x00000000 + -0x1a0,*param_2,param_3);
  if (pppuStack_160 == (unsigned char ***)0x0) {
    puStack_100 = (unsigned int *)0x0;
  }
  else {
    puVar7 = &stack0x00000000 + -0x110;
    if (pppuStack_160 != (unsigned char ***)(&stack0x00000000 + -0x170)) {
      puVar7 = (unsigned char *)0x0;
    }
    puStack_100 = (unsigned int *)(*(int (**)())**pppuStack_160)(pppuStack_160,puVar7);
    if (puStack_100 != (unsigned int *)0x0) {
      puVar7 = &stack0x00000000 + -400;
      if (puStack_100 != (unsigned int *)(&stack0x00000000 + -0x110)) {
        puVar7 = (unsigned char *)0x0;
      }
      piStack_180 = (int *)(**(int (***)())*puStack_100)(puStack_100,puVar7);
      piVar4 = piStack_1a0;
      puVar10 = puStack_19c;
      piVar5 = piStack_1a0;
      goto joined_r0x82301f14;
    }
  }
  piStack_180 = (int *)0x0;
  piVar4 = piStack_1a0;
  puVar10 = puStack_19c;
  piVar5 = piStack_1a0;
joined_r0x82301f14:
  while( true ) {
    piStack_60 = piStack_180;
    if (piVar4 == puVar10) {
      if (piStack_180 == (int *)0x0) {
        piStack_60 = (int *)0x0;
      }
      else if (piStack_180 == (int *)(&stack0x00000000 + -400)) {
        piStack_60 = (int *)(**(int (***)())*piStack_180)(piStack_180,&stack0x00000000 + -0x70);
      }
      else {
        piStack_180 = (int *)0x0;
      }
      fn_82359C18(&stack0x00000000 + -400);
      fn_82359C18(&stack0x00000000 + -0x110);
      fn_82359C18(&stack0x00000000 + -0x70);
      *(float *)(param_1 + 0x1d8) = ABS(*(float *)(param_1 + 0x1d8));
      *(float *)(param_1 + 0x1dc) = ABS(*(float *)(param_1 + 0x1dc));
      if (piVar5 != (unsigned int *)0x0) {
        fn_8265CA20(piVar5);
      }
      fn_82359C18(&stack0x00000000 + -0x170);
      return;
    }
    if (piStack_180 == (int *)0x0) break;
    (**(int (***)())(*piStack_180 + 4))(piStack_180,*piVar4);
    piVar4 = piVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

