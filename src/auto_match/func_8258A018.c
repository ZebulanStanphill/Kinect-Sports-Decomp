#define true 1
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82522ED8();
extern int fn_82547650();
extern int fn_8258A5B8();
extern int fn_8259C558();
extern int fn_825BF428();
extern int fn_825C7200();
extern int fn_825E51A8();
extern int fn_825E6D20();
extern int fn_825E7A60();
extern int fn_825E8220();
extern int fn_82645688();
extern int fn_8265CA20();
extern int fn_82A1F238();
extern int fn_82BFE3B0();
extern int fn_82BFE530();
extern unsigned int lbl_821C6530;
extern unsigned int lbl_8320A898;


void fn_8258A018(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  int *piVar10;
  unsigned __int64 uVar9;
  unsigned int auStack_60 [2];
  unsigned char auStack_58 [8];
  int (**pcStack_50)();
  
  *param_1 = &lbl_821C6530;
  piVar10 = (int *)param_1[0x2eae];
  fn_825E8220(auStack_58,piVar10 + 6);
  do {
  } while (*piVar10 != 0);
  (*pcStack_50)(auStack_58);
  fn_82547650();
  fn_82645688(lbl_8320A898);
  if (param_1[0x2eae] != 0) {
    fn_8258A5B8();
  }
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    piVar10 = param_1 + 0x2eaf;
    do {
      if (1 < iVar3) break;
      if (piVar10[-3] != 0) {
        puVar7 = (unsigned int *)*piVar10;
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x36];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x38];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x3a];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x3c];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x3e];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        iVar1 = (-0x8c03 - (int)param_1) + (int)piVar10;
        lVar4 = 3;
        do {
          iVar5 = 0;
          do {
            puVar7 = (unsigned int *)param_1[iVar1 + iVar5];
            if (puVar7 != (unsigned int *)0x0) {
              (**(int (***)())*puVar7)(puVar7,1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 4);
          lVar4 = lVar4 + -1;
          iVar1 = iVar1 + 8;
        } while (lVar4 != 0);
        lVar4 = 2;
        piVar6 = piVar10;
        do {
          piVar6 = piVar6 + 2;
          puVar7 = (unsigned int *)*piVar6;
          if (puVar7 != (unsigned int *)0x0) {
            (**(int (***)())*puVar7)(puVar7,1);
          }
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        puVar7 = (unsigned int *)piVar10[8];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x22];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x24];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[6];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x26];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x34];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x28];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x2b];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x2d];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        puVar7 = (unsigned int *)piVar10[0x2f];
        if (puVar7 != (unsigned int *)0x0) {
          (**(int (***)())*puVar7)(puVar7,1);
        }
      }
      iVar3 = iVar3 + 1;
      piVar10 = piVar10 + 1;
    } while (0 < (int)param_1[4]);
  }
  puVar7 = (unsigned int *)param_1[0x2ed9];
  if (puVar7 != (unsigned int *)0x0) {
    (**(int (***)())*puVar7)(puVar7,1);
  }
  puVar7 = (unsigned int *)param_1[12000];
  if (puVar7 != (unsigned int *)0x0) {
    (**(int (***)())*puVar7)(puVar7,1);
  }
  puVar7 = (unsigned int *)param_1[0x2ee1];
  if (puVar7 != (unsigned int *)0x0) {
    (**(int (***)())*puVar7)(puVar7,1);
  }
  puVar7 = (unsigned int *)param_1[0x2ee2];
  if (puVar7 != (unsigned int *)0x0) {
    (**(int (***)())*puVar7)(puVar7,1);
  }
  uVar9 = (unsigned __int64)(unsigned int)param_1[0xb];
  if (uVar9 != 0) {
    fn_825E6D20(uVar9 + 8);
    fn_8265CA20(uVar9);
  }
  iVar3 = param_1[0xc];
  if (iVar3 != 0) {
    puVar7 = (unsigned int *)(iVar3 + 8);
    lVar4 = 2;
    do {
      puVar7 = puVar7 + 1;
      fn_8265CA20(*puVar7);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    fn_8265CA20(iVar3);
  }
  fn_8265CA20(param_1[0x2e7a]);
  iVar3 = param_1[0x2e79];
  if (iVar3 != 0) {
    fn_825C7200(iVar3);
    fn_8265CA20(iVar3);
  }
  piVar10 = (int *)param_1[0x2e78];
  if (piVar10 != (int *)0x0) {
    lVar4 = 4;
    piVar6 = piVar10;
    do {
      iVar3 = *piVar6;
      if (iVar3 != 0) {
        uVar8 = 0;
        while( true ) {
          auStack_60[0] = 0;
          iVar1 = fn_82BFE530(*(unsigned int *)(iVar3 + 0x14),auStack_60);
          if (-1 < iVar1) {
            uVar8 = auStack_60[0];
          }
          if (iVar1 != 0) break;
          fn_82A1F238(uVar8);
        }
        if (*(int *)(iVar3 + 0x14) != 0) {
          fn_82BFE3B0();
          *(unsigned int *)(iVar3 + 0x14) = 0;
        }
        if (*(int *)(iVar3 + 0x10) != 0) {
          fn_82BFE3B0();
          *(unsigned int *)(iVar3 + 0x10) = 0;
        }
        fn_8265CA20(iVar3);
      }
      lVar4 = lVar4 + -1;
      piVar6 = piVar6 + 1;
    } while (lVar4 != 0);
    fn_8259C558(piVar10 + 4);
    fn_8265CA20(piVar10);
  }
  fn_825E7A60(param_1 + 0x2e86);
  puVar7 = (unsigned int *)param_1[0x2eab];
  fn_82522ED8(*puVar7);
  fn_82522ED8(puVar7[4]);
  fn_82522ED8(puVar7);
  if (param_1[0x2e95] != 0) {
    uVar2 = 0;
    if (param_1[0x2e99] != 0) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < (unsigned int)param_1[0x2e99]);
    }
    param_1[0x2e96] = param_1[0x2e95];
    param_1[0x2e99] = 0;
    fn_82522ED8();
  }
  fn_825BF428(param_1 + 0x2e7b);
  lVar4 = 1;
  param_1 = param_1 + 0x2e78;
  do {
    param_1 = param_1 + -0x1734;
    fn_825E51A8(param_1);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

