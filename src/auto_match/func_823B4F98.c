#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_70;
extern float fRam831d2d4c;
extern int fn_822315A0();
extern int fn_82250928();
extern int fn_823B53B0();
extern int fn_823B5688();
extern int fn_823B5D10();
extern int fn_823B7228();
extern int fn_823B7A60();
extern int fn_823B8B00();
extern int fn_8288B760();
extern int fn_828ACCE8();
extern int iRam831d2d48;
extern int iRam831d2d58;
extern unsigned int iStack_98;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;


void fn_823B4F98(unsigned __int64 param_1,int *param_2)

{
  unsigned __int64 *puVar1;
  int iVar2;
  unsigned int uVar3;
  char cVar5;
  int iVar4;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int *piVar9;
  unsigned int uVar11;
  __int64 lVar10;
  unsigned __int64 *puVar12;
  int *piVar13;
  int iVar14;
  int aiStack_a0 [2];
  int iStack_98;
  unsigned int uStack_94;
  unsigned __int64 uStack_90;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned char auStack_70 [48];
  
  iVar4 = param_2[0x2b];
  if (iVar4 != param_2[0x2c]) {
    do {
      fn_823B7A60(param_2,iVar4,iVar4 + 8);
      puVar1 = (unsigned __int64 *)param_2[0x2c];
      if ((unsigned __int64 *)(iVar4 + 0x10) != puVar1) {
        piVar13 = (int *)(iVar4 + 0xc);
        puVar12 = (unsigned __int64 *)(iVar4 + 0x10);
        do {
          piVar9 = piVar13 + 3;
          iVar14 = 0;
          iVar8 = 0;
          *(unsigned __int64 *)(piVar13 + -3) = *puVar12;
          if ((int *)&uStack_90 != piVar9) {
            iVar8 = piVar13[4];
            piVar13[4] = 0;
            iVar14 = *piVar9;
            *piVar9 = 0;
          }
          iVar2 = *piVar13;
          *piVar13 = iVar8;
          piVar13[-1] = iVar14;
          if (iVar2 != 0) {
            fn_822315A0();
          }
          puVar12 = puVar12 + 2;
          piVar13 = piVar13 + 4;
        } while (puVar12 != puVar1);
      }
      iVar8 = param_2[0x2c];
      iVar14 = iVar8 + -0x10;
      if (iVar8 + -0x10 != iVar8) {
        piVar13 = (int *)(iVar8 + -4);
        do {
          if (*piVar13 != 0) {
            fn_822315A0();
          }
          iVar14 = iVar14 + 0x10;
          piVar13 = piVar13 + 4;
        } while (iVar14 != iVar8);
      }
      param_2[0x2c] = param_2[0x2c] + -0x10;
    } while (iVar4 != param_2[0x2c]);
  }
  if (((*param_2 != 0) && (cVar5 = fn_828ACCE8(), cVar5 != '\0')) &&
     (*(int *)(*param_2 + 0x308) != 0)) {
    fn_823B53B0(param_2);
    fn_823B7228(param_2);
    if ((param_2[3] == 0) ||
       (cVar5 = fn_8288B760((unsigned __int64)(unsigned int)param_2[3] - 0x68), cVar5 == '\0')) {
      if ((param_2[3] != 0) &&
         ((cVar5 = fn_8288B760((unsigned __int64)(unsigned int)param_2[3] - 0x68), cVar5 == '\0' &&
          (param_2[0x14] == 0)))) {
        piVar13 = (int *)(param_2[3] + -0x68);
        if (param_2[3] == 0) {
          piVar13 = (int *)0x0;
        }
        iVar4 = (**(int (***)())(*piVar13 + 8))();
        cVar5 = (**(int (***)())(*(int *)(iVar4 + 0x144) + 0x3c))();
        if (cVar5 == '\0') {
          fn_823B5D10(param_1,param_2);
        }
      }
    }
    else if (param_2[4] != 0) {
      fn_823B5688(param_1,param_2);
    }
  }
  uStack_90 = ((((unsigned __int64)(uStack_90)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)((float)(__int64)iRam831d2d48 * fRam831d2d4c))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar4 = iRam831d2d58;
  if ((((unsigned __int64)(uStack_90) >> 32) & 0xFFFFFFFF) <= (unsigned int)param_2[0x1f]) {
    while ((iVar4 != 0 && (iVar4 = iVar4 + -1, param_2[0x1f] != 0))) {
      uVar3 = param_2[0x1e];
      iVar8 = 0;
      if ((int *)param_2[0x1b] != (int *)0x0) {
        iVar8 = *(int *)param_2[0x1b];
      }
      uVar6 = uVar3 >> 1;
      if (*(unsigned int *)(iVar8 + 8) <= uVar6) {
        uVar6 = uVar6 - *(unsigned int *)(iVar8 + 8);
      }
      aiStack_a0[0] = *(int *)param_2[0x18];
      iVar8 = *(int *)(uVar6 * 4 + *(int *)(iVar8 + 4));
      if ((int *)aiStack_a0[0] != (int *)param_2[0x18]) {
        do {
          piVar13 = *(int **)(aiStack_a0[0] + 0x18);
          uStack_94 = *(unsigned int *)(aiStack_a0[0] + 0x24);
          uVar6 = *(int *)(aiStack_a0[0] + 0x28) + uStack_94;
          if (((piVar13 == (int *)0x0) || ((int *)*piVar13 == (int *)0x0)) ||
             (piVar9 = *(int **)*piVar13, piVar9 == (int *)0x0)) {
            iStack_98 = 0;
          }
          else {
            iStack_98 = *piVar9;
          }
          uStack_90 = CONCAT44(iStack_98,uStack_94);
          uVar7 = uStack_94;
          if (uStack_94 != uVar6) {
            do {
              uVar11 = uVar7;
              if (*(unsigned int *)(iStack_98 + 8) <= uVar7) {
                uVar11 = uVar7 - *(unsigned int *)(iStack_98 + 8);
              }
            } while ((**(__int64 **)(uVar11 * 4 + *(int *)(iStack_98 + 4)) !=
                      *(__int64 *)(iVar8 + (uVar3 & 1) * 8)) && (uVar7 = uVar7 + 1, uVar7 != uVar6)
                    );
          }
          piVar9 = (int *)0x0;
          if ((piVar13 != (int *)0x0) && ((unsigned int *)*piVar13 != (unsigned int *)0x0)) {
            piVar9 = *(int **)*piVar13;
          }
          if (uVar7 != uVar6) {
            stack_pair_80.first = 0;
            stack_pair_80.second = 0;
            if ((piVar9 != (int *)0x0) && ((unsigned int *)*piVar9 != (unsigned int *)0x0)) {
              stack_pair_80.first = *(unsigned int *)*piVar9;
            }
            uStack_78 = uVar7;
            fn_823B8B00(auStack_70,aiStack_a0[0] + 0x18,&stack_pair_80.first);
          }
          fn_82250928(aiStack_a0);
        } while (aiStack_a0[0] != param_2[0x18]);
      }
      if ((unsigned __int64)(unsigned int)param_2[0x1f] != 0) {
        iVar8 = param_2[0x1e];
        param_2[0x1e] = iVar8 + 1U;
        if ((unsigned int)(param_2[0x1d] << 1) <= iVar8 + 1U) {
          param_2[0x1e] = 0;
        }
        lVar10 = (unsigned __int64)(unsigned int)param_2[0x1f] - 1;
        param_2[0x1f] = (int)lVar10;
        if (lVar10 == 0) {
          param_2[0x1e] = 0;
        }
      }
    }
  }
  return;
}

