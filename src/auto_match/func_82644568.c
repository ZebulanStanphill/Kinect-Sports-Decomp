typedef unsigned char bool;
extern unsigned int *auStack_98;
extern int fn_82644388();
extern int iRam832823fc;
extern unsigned int uRam7fc80714;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82644568(int param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  __int64 lVar4;
  bool bVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int auStack_98 [38];
  
  uVar1 = *(unsigned int *)(param_1 + 0x3b08);
  iVar2 = *(int *)(param_1 + 0x3b04);
  bVar5 = *(char *)param_2 == -0x71;
  if ((*(unsigned char *)(param_1 + 0x2abd) & 2) == 0) {
    uStack_a0 = *(unsigned int *)(param_1 + 0x2acc);
    if (bVar5) {
      iVar6 = (param_3 + 1) * 5;
    }
    else {
      iVar6 = param_3 * 3;
    }
    fn_82644388(param_1,uStack_a0,iVar6);
    uVar9 = 0;
    uVar8 = uStack_a0;
    if (param_3 != 0) {
      do {
        piVar3 = *(int **)(param_1 + 0x54f4);
        uVar11 = (param_2 + uVar9 * 2)[1];
        uVar10 = (unsigned __int64)uVar11;
        uStack_9c = param_2[uVar9 * 2] & 0xffffff;
        if ((piVar3 != (int *)0x0) && (iRam832823fc == 0)) {
          lVar4 = -0x40000000;
          if (0x1fffffff < uVar10) {
            lVar4 = -0x41000000;
          }
          (**(int (***)())(*piVar3 + 0x18))(piVar3,uVar10 + lVar4,uStack_9c,1,bVar5);
          uVar8 = uStack_a0;
        }
        if (*(int (***)())(param_1 + 0x5c18) != (int (**)())0x0) {
          iVar6 = -0x40000000;
          if (0x1fffffff < uVar10) {
            iVar6 = -0x41000000;
          }
          auStack_98[0] = uVar11 + iVar6;
          (**(int (***)())(param_1 + 0x5c18))
                    (1,auStack_98,&uStack_9c,-(unsigned __int64)bVar5 & 0x40000000 | 1);
          uVar8 = uStack_a0;
          if (uVar11 + iVar6 != auStack_98[0]) {
            uVar11 = ((auStack_98[0] >> 0x14) + 0x200 & 0x1000) + (auStack_98[0] & 0x1fffffff);
          }
        }
        if (uStack_9c != 0) {
          if (bVar5) {
            if (uVar9 == 0) {
              *(unsigned int *)(uVar8 * 4 + iVar2) = 0xc0013700;
              uVar8 = *(int *)(param_1 + 0x5ea8) + 0x1f80;
              uVar7 = uStack_a0 + 1 & uVar1;
              *(unsigned int *)(uVar7 * 4 + iVar2) =
                   ((uVar8 >> 0x14) + 0x200 & 0x1000) + (uVar8 & 0x1fffffff);
              uVar8 = uVar7 + 1 & uVar1;
              *(unsigned int *)(uVar8 * 4 + iVar2) = 1;
              uVar8 = uVar8 + 1 & uVar1;
              *(unsigned int *)(uVar8 * 4 + iVar2) = 0xc0005d00;
              uVar8 = uVar8 + 1 & uVar1;
              *(unsigned int *)(uVar8 * 4 + iVar2) = 0x12345678;
              uVar8 = uVar8 + 1 & uVar1;
              uStack_a0 = uVar8;
            }
            *(unsigned int *)(uVar8 * 4 + iVar2) = 0xc0013700;
            uVar8 = uStack_a0 + 1 & uVar1;
            *(unsigned int *)(uVar8 * 4 + iVar2) = uVar11;
            uVar8 = uVar8 + 1 & uVar1;
            *(unsigned int *)(uVar8 * 4 + iVar2) = uStack_9c;
            uVar8 = uVar8 + 1 & uVar1;
            *(unsigned int *)(uVar8 * 4 + iVar2) = 0xc0005d00;
            uStack_a0 = uVar8 + 1 & uVar1;
            *(unsigned int *)(uStack_a0 * 4 + iVar2) = 0x12345678;
          }
          else {
            *(unsigned int *)(uVar8 * 4 + iVar2) = 0xc0013f00;
            uVar8 = uStack_a0 + 1 & uVar1;
            *(unsigned int *)(uVar8 * 4 + iVar2) = uVar11;
            uStack_a0 = uVar8 + 1 & uVar1;
            *(unsigned int *)(uStack_a0 * 4 + iVar2) = uStack_9c;
          }
          uVar8 = uStack_a0 + 1 & uVar1;
          uStack_a0 = uVar8;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_3);
    }
    *(unsigned int *)(param_1 + 0x2acc) = uVar8;
    sync(0);
    enforceInOrderExecutionIO();
    sync(0);
    uRam7fc80714 = uVar8;
    if (*(int **)(param_1 + 0x54f4) != (int *)0x0) {
      (**(int (***)())(**(int **)(param_1 + 0x54f4) + 0x1c))();
    }
    if (*(int (***)())(param_1 + 0x5c18) != (int (**)())0x0) {
      (**(int (***)())(param_1 + 0x5c18))(2,0,&uStack_a0,0);
    }
  }
  else if (*(int *)(param_1 + 0x54f4) != 0) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      lVar4 = -0x40000000;
      if (0x1fffffff < (unsigned __int64)param_2[1]) {
        lVar4 = -0x41000000;
      }
      (**(int (***)())(**(int **)(param_1 + 0x54f4) + 0x18))
                (*(int **)(param_1 + 0x54f4),(unsigned __int64)param_2[1] + lVar4,*param_2 & 0xffffff,1,
                 bVar5);
      (**(int (***)())(**(int **)(param_1 + 0x54f4) + 0x1c))();
      param_2 = param_2 + 2;
    }
  }
  return;
}

