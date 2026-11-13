#define true 1
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828FA828();
extern int fn_828FAF58();
extern int fn_828FBB60();
extern int fn_82F68CC0();
extern unsigned int iStack_a0;


__int64 fn_828F4E08(int param_1)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int iVar6;
  __int64 lVar5;
  unsigned int *puVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  unsigned int *puVar12;
  char *pcVar13;
  char *pcVar14;
  unsigned __int64 uVar11;
  unsigned int *puVar15;
  unsigned int *puVar16;
  char *pcVar17;
  int *piVar18;
  unsigned __int64 uVar19;
  unsigned int *puVar20;
  unsigned int uVar21;
  int iStack_a0;
  
  piVar18 = (int *)(param_1 + 0x280);
  iVar6 = 0;
  iStack_a0 = 0;
  puVar16 = (unsigned int *)0x0;
  lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),
                            piVar18);
  if (-1 < lVar4) {
    iVar8 = *piVar18;
    if (iVar8 == 1) {
      puVar20 = (unsigned int *)(param_1 + 0x288);
      pcVar9 = "(";
      puVar12 = puVar20;
      do {
        cVar1 = *(char *)puVar12;
        cVar2 = *pcVar9;
        if (cVar1 == '\0') break;
        puVar12 = (unsigned int *)((int)puVar12 + 1);
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),
                                  piVar18);
        if (lVar4 < 0) goto LAB_828f52dc;
        uVar19 = 0;
        pcVar9 = ";";
        pcVar17 = ")";
        do {
          do {
            do {
              iVar8 = *piVar18;
              puVar12 = puVar20;
              pcVar14 = pcVar17;
              if (iVar8 == 1) {
                do {
                  cVar1 = *(char *)puVar12;
                  cVar2 = *pcVar14;
                  if (cVar1 == '\0') break;
                  puVar12 = (unsigned int *)((int)puVar12 + 1);
                  pcVar14 = pcVar14 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 == cVar2) {
                  lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),
                                            *(unsigned int *)(param_1 + 0x2a0),piVar18);
                  if (lVar4 < 0) goto LAB_828f52dc;
                  iVar8 = *piVar18;
                  if ((iVar8 == 0xc) || (iVar8 == 0xd)) {
                    uVar11 = 0;
                    if ((uVar19 & 0xffffffff) == 0) goto LAB_828f5378;
                    puVar7 = puVar16;
                    goto LAB_828f5350;
                  }
                  goto LAB_828f52b8;
                }
              }
              if (iVar8 == 9) {
                pcVar14 = (char *)*puVar20;
                pcVar10 = "once";
                pcVar13 = pcVar14;
                do {
                  cVar1 = *pcVar13;
                  cVar2 = *pcVar10;
                  if (cVar1 == '\0') break;
                  pcVar13 = pcVar13 + 1;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 == cVar2);
                pcVar10 = "error";
                pcVar13 = pcVar14;
                if (cVar1 == cVar2) {
                  uVar21 = 0x10;
                }
                else {
                  do {
                    cVar1 = *pcVar13;
                    cVar2 = *pcVar10;
                    if (cVar1 == '\0') break;
                    pcVar10 = pcVar10 + 1;
                    pcVar13 = pcVar13 + 1;
                  } while (cVar1 == cVar2);
                  pcVar10 = "disable";
                  pcVar13 = pcVar14;
                  if (cVar1 == cVar2) {
                    uVar21 = 0xf;
                  }
                  else {
                    do {
                      cVar1 = *pcVar13;
                      cVar2 = *pcVar10;
                      if (cVar1 == '\0') break;
                      pcVar10 = pcVar10 + 1;
                      pcVar13 = pcVar13 + 1;
                    } while (cVar1 == cVar2);
                    pcVar10 = "default";
                    if (cVar1 == cVar2) {
                      uVar21 = 0;
                    }
                    else {
                      do {
                        cVar1 = *pcVar14;
                        cVar2 = *pcVar10;
                        if (cVar1 == '\0') break;
                        pcVar14 = pcVar14 + 1;
                        pcVar10 = pcVar10 + 1;
                      } while (cVar1 == cVar2);
                      if (cVar1 != cVar2) goto LAB_828f52b8;
                      uVar21 = 0xff;
                    }
                  }
                }
              }
              else if ((((iVar8 != 2) && (iVar8 != 3)) && (iVar8 != 4)) ||
                      ((uVar21 = *puVar20, uVar21 == 0 || (4 < uVar21)))) goto LAB_828f52b8;
              lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),
                                        *(unsigned int *)(param_1 + 0x2a0),piVar18);
              if (lVar4 < 0) goto LAB_828f52dc;
              iVar8 = *piVar18;
              puVar12 = puVar20;
              pcVar14 = ":";
              if (iVar8 != 1) goto LAB_828f52b8;
              do {
                cVar1 = *(char *)puVar12;
                cVar2 = *pcVar14;
                if (cVar1 == '\0') break;
                puVar12 = (unsigned int *)((int)puVar12 + 1);
                pcVar14 = pcVar14 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 != cVar2) goto LAB_828f52b8;
              lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),
                                        *(unsigned int *)(param_1 + 0x2a0),piVar18);
              if (lVar4 < 0) goto LAB_828f52dc;
              do {
                do {
                  iVar8 = *piVar18;
                  if (((iVar8 != 2) && (iVar8 != 3)) && (iVar8 != 4)) goto LAB_828f52b8;
                  uVar3 = *puVar20;
                  puVar7 = puVar16;
                  if ((uVar19 & 0xffffffff) == (~uVar19 + 1 & uVar19 & 0xffffffff)) {
                    uVar11 = (uVar19 & 0x7fffffff) << 1;
                    if ((uVar19 & 0xffffffff) == 0) {
                      uVar11 = 1;
                    }
                    lVar4 = (uVar11 & 0x3fffffff) << 2;
                    if (0x3fffffff < uVar11) {
                      lVar4 = -1;
                    }
                    iVar6 = fn_8265C9E0(lVar4);
                    if (iVar6 != 0) {
                      lVar4 = (uVar19 & 0x3fffffff) << 2;
                      fn_82F68CC0(iVar6,iStack_a0,lVar4);
                      fn_8265CA20(iStack_a0);
                      uVar11 = (uVar19 & 0x7fffffff) << 1;
                      if ((uVar19 & 0xffffffff) == 0) {
                        uVar11 = 1;
                      }
                      lVar5 = (uVar11 & 0x3fffffff) << 2;
                      if (0x3fffffff < uVar11) {
                        lVar5 = -1;
                      }
                      puVar7 = (unsigned int *)fn_8265C9E0(lVar5);
                      iStack_a0 = iVar6;
                      if (puVar7 != (unsigned int *)0x0) {
                        fn_82F68CC0(puVar7,puVar16,lVar4);
                        fn_8265CA20(puVar16);
                        goto LAB_828f5190;
                      }
                    }
                    lVar4 = -0x7ff8fff2;
                    goto LAB_828f52dc;
                  }
LAB_828f5190:
                  iVar8 = (int)((uVar19 & 0xffffffff) << 2);
                  uVar19 = uVar19 + 1;
                  *(unsigned int *)(iVar8 + (int)puVar7) = uVar3;
                  *(unsigned int *)(iVar8 + iVar6) = uVar21;
                  lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),
                                            *(unsigned int *)(param_1 + 0x2a0),piVar18);
                  puVar16 = puVar7;
                  if (lVar4 < 0) goto LAB_828f52dc;
                  puVar12 = puVar20;
                  pcVar14 = pcVar9;
                } while (*piVar18 != 1);
                do {
                  cVar1 = *(char *)puVar12;
                  cVar2 = *pcVar14;
                  if (cVar1 == '\0') break;
                  puVar12 = (unsigned int *)((int)puVar12 + 1);
                  pcVar14 = pcVar14 + 1;
                } while (cVar1 == cVar2);
                puVar12 = puVar20;
                puVar15 = puVar20;
                pcVar14 = pcVar17;
                pcVar10 = pcVar9;
                if (cVar1 == cVar2) break;
                do {
                  cVar1 = *(char *)puVar12;
                  cVar2 = *pcVar14;
                  if (cVar1 == '\0') break;
                  puVar12 = (unsigned int *)((int)puVar12 + 1);
                  pcVar14 = pcVar14 + 1;
                } while (cVar1 == cVar2);
              } while (cVar1 != cVar2);
              do {
                cVar1 = *(char *)puVar15;
                cVar2 = *pcVar10;
                if (cVar1 == '\0') break;
                puVar15 = (unsigned int *)((int)puVar15 + 1);
                pcVar10 = pcVar10 + 1;
              } while (cVar1 == cVar2);
            } while (cVar1 != cVar2);
            lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),
                                      *(unsigned int *)(param_1 + 0x2a0),piVar18);
            if (lVar4 < 0) goto LAB_828f52dc;
            puVar12 = puVar20;
            pcVar14 = pcVar17;
          } while (*piVar18 != 1);
          do {
            cVar1 = *(char *)puVar12;
            cVar2 = *pcVar14;
            if (cVar1 == '\0') break;
            puVar12 = (unsigned int *)((int)puVar12 + 1);
            pcVar14 = pcVar14 + 1;
          } while (cVar1 == cVar2);
          iVar8 = 1;
        } while (cVar1 != cVar2);
      }
    }
LAB_828f52b8:
    if ((iVar8 != 0xc) && (iVar8 != 0xd)) {
      fn_828FAF58(*(unsigned int *)(param_1 + 0x278),0);
    }
    lVar4 = 0;
    *(unsigned int *)(param_1 + 0x29c) = 0;
  }
  goto LAB_828f52dc;
  while( true ) {
    uVar11 = uVar11 + 1;
    puVar7 = puVar7 + 1;
    if ((uVar19 & 0xffffffff) <= (uVar11 & 0xffffffff)) break;
LAB_828f5350:
    lVar4 = fn_828FA828(param_1 + 0x18,*puVar7,
                              *(unsigned int *)((iStack_a0 - (int)puVar16) + (int)puVar7));
    if (lVar4 < 0) goto LAB_828f52dc;
  }
LAB_828f5378:
  lVar4 = 0;
LAB_828f52dc:
  fn_8265CA20(iStack_a0);
  fn_8265CA20(puVar16);
  fn_8265CA20(0);
  *(unsigned int *)(param_1 + 0x4c) = 1;
  return lVar4;
}

