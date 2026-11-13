#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_90;
extern unsigned int fStack_98;
extern unsigned int fStack_a0;
extern int fn_822AA718();
extern int fn_822ABA88();
extern int fn_822B33B0();
extern int fn_823C7AF0();
extern int fn_823C9098();
extern int fn_823CA870();
extern int fn_82559FF0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_82195590;
extern float lbl_821955A0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;


void fn_823C8298(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  float fVar5;
  unsigned __int64 in_r0;
  int iVar6;
  int iVar7;
  char cVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  int *piVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  float fStack_a0;
  unsigned int uStack_9c;
  float fStack_98;
  unsigned int uStack_94;
  float fStack_90;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [32];
  
  fStack_a0 = lbl_82193E50;
  fn_823CA870(param_2,auStack_70,auStack_60,&fStack_98,&uStack_9c);
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar7 = *(int *)(*(int *)(param_2 + 0x10) + 0x2c);
    fn_822AA718(auStack_80,
                      *(unsigned int *)(**(int **)(*(int *)(param_2 + 0x240) + 8) + iVar7 * 4));
    fn_82559FF0(&fStack_a0);
    fVar5 = fStack_a0 * lbl_82195590 + lbl_8218E8E8;
    fn_823C9098((double)fStack_98,
                      (double)(float)(((double)fVar5 - (double)(__int64)fVar5) * lbl_821955A0),
                      (double)fStack_90);
    uVar12 = *(unsigned int *)(param_2 + 0x240);
    uVar11 = (unsigned __int64)uVar12;
    piVar1 = *(int **)(uVar12 + 8);
    piVar14 = *(int **)(((unsigned int)LZCOUNT(iVar7) >> 3 & 4) + *piVar1);
    uVar13 = ZEXT48(piVar14);
    if (piVar1 != (int *)0x0) {
      uVar9 = 0;
      piVar1 = *(int **)(*(int *)(*(int *)(piVar14[4] * 4 + *piVar14) + 0x10) * 4 + *piVar1);
      uVar2 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
      uVar10 = (unsigned __int64)uVar2;
      uVar2 = *(unsigned int *)(uVar2 + 8);
      if (uVar2 != 0) {
        do {
          iVar7 = fn_822ABA88(uVar10);
          piVar14 = (int *)uVar13;
          uVar12 = (unsigned int)uVar11;
          if (*(int *)(*(int *)(iVar7 + 0x110) + 0x18) == 0x13) goto LAB_823c841c;
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xffffffff) < (unsigned __int64)uVar2);
      }
    }
    iVar7 = 0;
LAB_823c841c:
    iVar6 = (int)in_r0;
    if ((iVar7 == 0) && (*(int **)(uVar12 + 8) != (int *)0x0)) {
      uVar11 = 0;
      piVar1 = *(int **)(*(int *)(*(int *)(piVar14[4] * 4 + *piVar14) + 0x10) * 4 +
                        **(int **)(uVar12 + 8));
      uVar12 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
      uVar9 = (unsigned __int64)uVar12;
      uVar13 = (unsigned __int64)*(unsigned int *)(uVar12 + 8);
      iVar7 = 0;
      if (uVar13 != 0) {
        do {
          iVar7 = fn_822ABA88(uVar9,uVar11,iVar7);
          iVar6 = (int)in_r0;
          if (*(int *)(*(int *)(iVar7 + 0x110) + 0x18) == 0x1f) break;
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
    }
    fn_823C7AF0(param_1,param_2);
    uVar11 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x240) + 0x1c) + 4);
    cVar8 = fn_822B33B0((double)ltcg_pool_0_0f,uVar11);
    if (((cVar8 != '\0') && (cVar8 = fn_822B33B0(uVar11), cVar8 != '\0')) ||
       (*(int *)(param_2 + 0x368) != 0)) {
      puVar3 = (unsigned int *)((unsigned int)(auStack_80 + iVar6) & 0xfffffff0);
      uVar15 = puVar3[1];
      uVar16 = puVar3[2];
      uVar17 = puVar3[3];
      puVar4 = (unsigned int *)(param_2 + 0x1a0U & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar15;
      puVar4[2] = uVar16;
      puVar4[3] = uVar17;
    }
    *(unsigned int *)(param_2 + 0x228) = uStack_9c;
    *(float *)(param_2 + 0x214) = fStack_98;
    *(unsigned int *)(param_2 + 0x218) = uStack_94;
    *(float *)(param_2 + 0x21c) = fStack_90;
  }
  return;
}

