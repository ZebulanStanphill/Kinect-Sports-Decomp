extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C5F8E8();


unsigned __int64 fn_82C678D8(int param_1)

{
  unsigned __int64 *puVar1;
  __int64 *plVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar10;
  __int64 lVar9;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar11 = 0x18;
  iVar10 = 0;
  uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar8 = uVar7 + 0x10;
  iVar3 = 0;
  if ((uVar8 & 0xffffffff) < 0x18) {
    do {
      iVar10 = iVar3;
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar8;
      *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
      iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + iVar10;
      *puVar1 = *puVar1 << (uVar8 & 0x7f);
      if ((__int64)(uVar7 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar8 = uVar7 + 0x10;
      iVar3 = iVar10;
    } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  uVar8 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
  *puVar1 = uVar8 << (uVar11 & 0x7f);
  if ((__int64)(uVar7 - uVar11) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 == 1) {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar11 = 3;
    lVar9 = 0;
    uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) < 3) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar11 = uVar11 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
        lVar9 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f))
                + lVar9;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((__int64)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
    *puVar1 = uVar8 << (uVar11 & 0x7f);
    if ((__int64)(uVar7 - uVar11) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar8 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9 & 0xffffffff) == 0) {
      plVar2 = *(__int64 **)(param_1 + 0x54);
      uVar11 = 5;
      uVar7 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
      uVar8 = uVar7 + 0x10;
      if ((uVar8 & 0xffffffff) < 5) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar8;
          *plVar2 = *plVar2 << (uVar8 & 0x7f);
          *(int *)(plVar2 + 1) = (int)(uVar7 - uVar8);
          if ((__int64)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(plVar2);
          }
          uVar7 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      *plVar2 = *plVar2 << (uVar11 & 0x7f);
      *(int *)(plVar2 + 1) = (int)(uVar7 - uVar11);
      if ((__int64)(uVar7 - uVar11) < 0) {
        fn_82C4E5E8(plVar2);
      }
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar11 = 0x18;
      iVar10 = 0;
      uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar8 = uVar7 + 0x10;
      iVar3 = 0;
      if ((uVar8 & 0xffffffff) < 0x18) {
        do {
          iVar10 = iVar3;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
          iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + iVar10;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((__int64)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar8 = uVar7 + 0x10;
          iVar3 = iVar10;
        } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
      *puVar1 = uVar8 << (uVar11 & 0x7f);
      if ((__int64)(uVar7 - uVar11) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 == 1) {
        puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
        uVar11 = 4;
        lVar9 = 0;
        uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar8 = uVar7 + 0x10;
        if ((uVar8 & 0xffffffff) < 4) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar11 = uVar11 - uVar8;
            *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
            lVar9 = (unsigned __int64)
                    (unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + lVar9
            ;
            *puVar1 = *puVar1 << (uVar8 & 0x7f);
            if ((__int64)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
            uVar8 = uVar7 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
        }
        uVar8 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
        *puVar1 = uVar8 << (uVar11 & 0x7f);
        if ((__int64)(uVar7 - uVar11) < 0) {
          fn_82C4E5E8(puVar1);
        }
        if (((uVar8 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9 & 0xffffffff) == 2) {
          plVar2 = *(__int64 **)(param_1 + 0x54);
          uVar11 = 4;
          uVar7 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
          uVar8 = uVar7 + 0x10;
          if ((uVar8 & 0xffffffff) < 4) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar11 = uVar11 - uVar8;
              *plVar2 = *plVar2 << (uVar8 & 0x7f);
              *(int *)(plVar2 + 1) = (int)(uVar7 - uVar8);
              if ((__int64)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(plVar2);
              }
              uVar7 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
              uVar8 = uVar7 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
          }
          *plVar2 = *plVar2 << (uVar11 & 0x7f);
          *(int *)(plVar2 + 1) = (int)(uVar7 - uVar11);
          if ((__int64)(uVar7 - uVar11) < 0) {
            fn_82C4E5E8(plVar2);
          }
          puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
          uVar11 = 1;
          iVar10 = 0;
          uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar8 = uVar7 + 0x10;
          iVar3 = 0;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              iVar10 = iVar3;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar11 = uVar11 - uVar8;
              *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
              iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + iVar10;
              *puVar1 = *puVar1 << (uVar8 & 0x7f);
              if ((__int64)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(puVar1);
              }
              uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
              uVar8 = uVar7 + 0x10;
              iVar3 = iVar10;
            } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
          }
          uVar8 = *puVar1;
          *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
          *puVar1 = uVar8 << (uVar11 & 0x7f);
          if ((__int64)(uVar7 - uVar11) < 0) {
            fn_82C4E5E8(puVar1);
          }
          if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 == 0) {
            plVar2 = *(__int64 **)(param_1 + 0x54);
            uVar11 = 8;
            uVar7 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
            uVar8 = uVar7 + 0x10;
            if ((uVar8 & 0xffffffff) < 8) {
              do {
                if ((uVar8 & 0xffffffff) == 0) break;
                uVar11 = uVar11 - uVar8;
                *plVar2 = *plVar2 << (uVar8 & 0x7f);
                *(int *)(plVar2 + 1) = (int)(uVar7 - uVar8);
                if ((__int64)(uVar7 - uVar8) < 0) {
                  fn_82C4E5E8(plVar2);
                }
                uVar7 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
                uVar8 = uVar7 + 0x10;
              } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
            }
            *plVar2 = *plVar2 << (uVar11 & 0x7f);
            *(int *)(plVar2 + 1) = (int)(uVar7 - uVar11);
            if ((__int64)(uVar7 - uVar11) < 0) {
              fn_82C4E5E8(plVar2);
            }
            puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
            uVar11 = 1;
            lVar9 = 0;
            uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
            uVar8 = uVar7 + 0x10;
            if ((uVar8 & 0xffffffff) == 0) {
              do {
                if ((uVar8 & 0xffffffff) == 0) break;
                uVar11 = uVar11 - uVar8;
                *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                lVar9 = (unsigned __int64)
                        (unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) +
                        lVar9;
                *puVar1 = *puVar1 << (uVar8 & 0x7f);
                if ((__int64)(uVar7 - uVar8) < 0) {
                  fn_82C4E5E8(puVar1);
                }
                uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                uVar8 = uVar7 + 0x10;
              } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
            }
            uVar8 = *puVar1;
            *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
            *puVar1 = uVar8 << (uVar11 & 0x7f);
            if ((__int64)(uVar7 - uVar11) < 0) {
              fn_82C4E5E8(puVar1);
            }
            if (((uVar8 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9 & 0xffffffff) == 0) {
              puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
              uVar11 = 4;
              lVar9 = 0;
              uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
              uVar8 = uVar7 + 0x10;
              if ((uVar8 & 0xffffffff) < 4) {
                do {
                  if ((uVar8 & 0xffffffff) == 0) break;
                  uVar11 = uVar11 - uVar8;
                  *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                  lVar9 = (unsigned __int64)
                          (unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) +
                          lVar9;
                  *puVar1 = *puVar1 << (uVar8 & 0x7f);
                  if ((__int64)(uVar7 - uVar8) < 0) {
                    fn_82C4E5E8(puVar1);
                  }
                  uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                  uVar8 = uVar7 + 0x10;
                } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
              }
              *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
              uVar8 = (*puVar1 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
              *puVar1 = *puVar1 << (uVar11 & 0x7f);
              if ((__int64)(uVar7 - uVar11) < 0) {
                fn_82C4E5E8(puVar1);
              }
              if ((uVar8 & 0xffffffff) == 1) {
                puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                lVar9 = 0;
                uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                uVar11 = uVar7 + 0x10;
                if ((uVar11 & 0xffffffff) == 0) {
                  do {
                    if ((uVar11 & 0xffffffff) == 0) break;
                    uVar8 = uVar8 - uVar11;
                    *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                    lVar9 = (unsigned __int64)
                            (unsigned int)((int)(*puVar1 >> (0x40 - uVar11 & 0x7f)) << ((unsigned int)uVar8 & 0x3f))
                            + lVar9;
                    *puVar1 = *puVar1 << (uVar11 & 0x7f);
                    if ((__int64)(uVar7 - uVar11) < 0) {
                      fn_82C4E5E8(puVar1);
                    }
                    uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                    uVar11 = uVar7 + 0x10;
                  } while ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff));
                }
                uVar11 = *puVar1;
                *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                *puVar1 = uVar11 << (uVar8 & 0x7f);
                if ((__int64)(uVar7 - uVar8) < 0) {
                  fn_82C4E5E8(puVar1);
                }
                if (((uVar11 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar9 & 0xffffffff) == 0) {
                  plVar2 = *(__int64 **)(param_1 + 0x54);
                  uVar11 = 2;
                  uVar7 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
                  uVar8 = uVar7 + 0x10;
                  if ((uVar8 & 0xffffffff) < 2) {
                    do {
                      if ((uVar8 & 0xffffffff) == 0) break;
                      uVar11 = uVar11 - uVar8;
                      *plVar2 = *plVar2 << (uVar8 & 0x7f);
                      *(int *)(plVar2 + 1) = (int)(uVar7 - uVar8);
                      if ((__int64)(uVar7 - uVar8) < 0) {
                        fn_82C4E5E8(plVar2);
                      }
                      uVar7 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
                      uVar8 = uVar7 + 0x10;
                    } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                  }
                  *plVar2 = *plVar2 << (uVar11 & 0x7f);
                  *(int *)(plVar2 + 1) = (int)(uVar7 - uVar11);
                  if ((__int64)(uVar7 - uVar11) < 0) {
                    fn_82C4E5E8(plVar2);
                  }
                  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                  uVar11 = 1;
                  iVar10 = 0;
                  uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                  uVar8 = uVar7 + 0x10;
                  iVar3 = 0;
                  if ((uVar8 & 0xffffffff) == 0) {
                    do {
                      iVar10 = iVar3;
                      if ((uVar8 & 0xffffffff) == 0) break;
                      uVar11 = uVar11 - uVar8;
                      *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                      iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) +
                               iVar10;
                      *puVar1 = *puVar1 << (uVar8 & 0x7f);
                      if ((__int64)(uVar7 - uVar8) < 0) {
                        fn_82C4E5E8(puVar1);
                      }
                      uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                      uVar8 = uVar7 + 0x10;
                      iVar3 = iVar10;
                    } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                  }
                  uVar8 = *puVar1;
                  *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                  *puVar1 = uVar8 << (uVar11 & 0x7f);
                  if ((__int64)(uVar7 - uVar11) < 0) {
                    fn_82C4E5E8(puVar1);
                  }
                  if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 == 1) {
                    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                    uVar11 = 0x10;
                    lVar9 = 0;
                    uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                    uVar8 = uVar7 + 0x10;
                    if ((uVar8 & 0xffffffff) < 0x10) {
                      do {
                        if ((uVar8 & 0xffffffff) == 0) break;
                        uVar11 = uVar11 - uVar8;
                        *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                        lVar9 = (unsigned __int64)
                                (unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                      ((unsigned int)uVar11 & 0x3f)) + lVar9;
                        *puVar1 = *puVar1 << (uVar8 & 0x7f);
                        if ((__int64)(uVar7 - uVar8) < 0) {
                          fn_82C4E5E8(puVar1);
                        }
                        uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                        uVar8 = uVar7 + 0x10;
                      } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                    }
                    *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                    uVar8 = (*puVar1 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
                    *puVar1 = *puVar1 << (uVar11 & 0x7f);
                    if ((__int64)(uVar7 - uVar11) < 0) {
                      fn_82C4E5E8(puVar1);
                    }
                    if ((uVar8 & 0xffffffff) != 0) {
                      *(int *)(param_1 + 0xe2c) = (int)uVar8;
                      *(unsigned int *)(param_1 + 0xe68) = 1;
                      do {
                        if ((uVar8 & 0xffffffff) == 1) break;
                        iVar3 = *(int *)(param_1 + 0xe68);
                        uVar8 = (uVar8 & 0xffffffff) >> 1;
                        *(int *)(param_1 + 0xe68) = iVar3 + 1;
                      } while (iVar3 + 1 < 0x10);
                      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                      uVar11 = 1;
                      lVar9 = 0;
                      uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                      uVar8 = uVar7 + 0x10;
                      if ((uVar8 & 0xffffffff) == 0) {
                        do {
                          if ((uVar8 & 0xffffffff) == 0) break;
                          uVar11 = uVar11 - uVar8;
                          *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                          lVar9 = (unsigned __int64)
                                  (unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                        ((unsigned int)uVar11 & 0x3f)) + lVar9;
                          *puVar1 = *puVar1 << (uVar8 & 0x7f);
                          if ((__int64)(uVar7 - uVar8) < 0) {
                            fn_82C4E5E8(puVar1);
                          }
                          uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                          uVar8 = uVar7 + 0x10;
                        } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                      }
                      *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                      uVar8 = (*puVar1 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
                      *puVar1 = *puVar1 << (uVar11 & 0x7f);
                      if ((__int64)(uVar7 - uVar11) < 0) {
                        fn_82C4E5E8(puVar1);
                      }
                      if ((int)uVar8 == 1) {
                        puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                        iVar10 = 0;
                        uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                        uVar11 = uVar7 + 0x10;
                        iVar3 = 0;
                        if ((uVar11 & 0xffffffff) == 0) {
                          do {
                            iVar10 = iVar3;
                            if ((uVar11 & 0xffffffff) == 0) break;
                            uVar8 = uVar8 - uVar11;
                            *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                            iVar10 = ((int)(*puVar1 >> (0x40 - uVar11 & 0x7f)) <<
                                     ((unsigned int)uVar8 & 0x3f)) + iVar10;
                            *puVar1 = *puVar1 << (uVar11 & 0x7f);
                            if ((__int64)(uVar7 - uVar11) < 0) {
                              fn_82C4E5E8(puVar1);
                            }
                            uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                            uVar11 = uVar7 + 0x10;
                            iVar3 = iVar10;
                          } while ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff));
                        }
                        uVar11 = *puVar1;
                        *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                        *puVar1 = uVar11 << (uVar8 & 0x7f);
                        if ((__int64)(uVar7 - uVar8) < 0) {
                          fn_82C4E5E8(puVar1);
                        }
                        if ((int)(uVar11 >> (0x40 - uVar8 & 0x7f)) + iVar10 == 0) {
                          puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                          uVar11 = 1;
                          iVar10 = 0;
                          uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                          uVar8 = uVar7 + 0x10;
                          iVar3 = 0;
                          if ((uVar8 & 0xffffffff) == 0) {
                            do {
                              iVar10 = iVar3;
                              if ((uVar8 & 0xffffffff) == 0) break;
                              uVar11 = uVar11 - uVar8;
                              *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                              iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                       ((unsigned int)uVar11 & 0x3f)) + iVar10;
                              *puVar1 = *puVar1 << (uVar8 & 0x7f);
                              if ((__int64)(uVar7 - uVar8) < 0) {
                                fn_82C4E5E8(puVar1);
                              }
                              uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                              uVar8 = uVar7 + 0x10;
                              iVar3 = iVar10;
                            } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                          }
                          uVar8 = *puVar1;
                          *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                          *puVar1 = uVar8 << (uVar11 & 0x7f);
                          if ((__int64)(uVar7 - uVar11) < 0) {
                            fn_82C4E5E8(puVar1);
                          }
                          if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 == 1) {
                            puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                            uVar11 = 0xd;
                            iVar10 = 0;
                            uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                            uVar8 = uVar7 + 0x10;
                            iVar3 = 0;
                            if ((uVar8 & 0xffffffff) < 0xd) {
                              do {
                                iVar10 = iVar3;
                                if ((uVar8 & 0xffffffff) == 0) break;
                                uVar11 = uVar11 - uVar8;
                                *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                         ((unsigned int)uVar11 & 0x3f)) + iVar10;
                                *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                if ((__int64)(uVar7 - uVar8) < 0) {
                                  fn_82C4E5E8(puVar1);
                                }
                                uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                uVar8 = uVar7 + 0x10;
                                iVar3 = iVar10;
                              } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                            }
                            uVar8 = *puVar1;
                            *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                            *puVar1 = uVar8 << (uVar11 & 0x7f);
                            if ((__int64)(uVar7 - uVar11) < 0) {
                              fn_82C4E5E8(puVar1);
                            }
                            puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                            uVar12 = 1;
                            *(int *)(param_1 + 0x9c) =
                                 (int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10;
                            iVar10 = 0;
                            uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                            uVar8 = uVar7 + 0x10;
                            iVar3 = 0;
                            if ((uVar8 & 0xffffffff) == 0) {
                              do {
                                iVar10 = iVar3;
                                if ((uVar8 & 0xffffffff) == 0) break;
                                uVar12 = uVar12 - uVar8;
                                *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                         ((unsigned int)uVar12 & 0x3f)) + iVar10;
                                *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                if ((__int64)(uVar7 - uVar8) < 0) {
                                  fn_82C4E5E8(puVar1);
                                }
                                uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                uVar8 = uVar7 + 0x10;
                                iVar3 = iVar10;
                              } while ((uVar8 & 0xffffffff) < (uVar12 & 0xffffffff));
                            }
                            uVar8 = *puVar1;
                            *(int *)(puVar1 + 1) = (int)(uVar7 - uVar12);
                            *puVar1 = uVar8 << (uVar12 & 0x7f);
                            if ((__int64)(uVar7 - uVar12) < 0) {
                              fn_82C4E5E8(puVar1);
                            }
                            if ((int)(uVar8 >> (0x40 - uVar12 & 0x7f)) + iVar10 == 1) {
                              puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                              uVar11 = 0xd;
                              iVar10 = 0;
                              uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                              uVar8 = uVar7 + 0x10;
                              iVar3 = 0;
                              if ((uVar8 & 0xffffffff) < 0xd) {
                                do {
                                  iVar10 = iVar3;
                                  if ((uVar8 & 0xffffffff) == 0) break;
                                  uVar11 = uVar11 - uVar8;
                                  *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                  iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                           ((unsigned int)uVar11 & 0x3f)) + iVar10;
                                  *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                  if ((__int64)(uVar7 - uVar8) < 0) {
                                    fn_82C4E5E8(puVar1);
                                  }
                                  uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                  uVar8 = uVar7 + 0x10;
                                  iVar3 = iVar10;
                                } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                              }
                              uVar8 = *puVar1;
                              *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                              *puVar1 = uVar8 << (uVar11 & 0x7f);
                              if ((__int64)(uVar7 - uVar11) < 0) {
                                fn_82C4E5E8(puVar1);
                              }
                              puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                              lVar9 = 0;
                              *(int *)(param_1 + 0xa0) =
                                   (int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10;
                              uVar11 = 1;
                              uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                              uVar8 = uVar7 + 0x10;
                              if ((uVar8 & 0xffffffff) == 0) {
                                do {
                                  if ((uVar8 & 0xffffffff) == 0) break;
                                  uVar11 = uVar11 - uVar8;
                                  *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                  lVar9 = (unsigned __int64)
                                          (unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                                ((unsigned int)uVar11 & 0x3f)) + lVar9;
                                  *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                  if ((__int64)(uVar7 - uVar8) < 0) {
                                    fn_82C4E5E8(puVar1);
                                  }
                                  uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                  uVar8 = uVar7 + 0x10;
                                } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                              }
                              *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                              uVar8 = (*puVar1 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
                              *puVar1 = *puVar1 << (uVar11 & 0x7f);
                              if ((__int64)(uVar7 - uVar11) < 0) {
                                fn_82C4E5E8(puVar1);
                              }
                              if ((int)uVar8 == 1) {
                                puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                iVar10 = 0;
                                uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                uVar11 = uVar7 + 0x10;
                                iVar3 = 0;
                                if ((uVar11 & 0xffffffff) == 0) {
                                  do {
                                    iVar10 = iVar3;
                                    if ((uVar11 & 0xffffffff) == 0) break;
                                    uVar8 = uVar8 - uVar11;
                                    *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                    iVar10 = ((int)(*puVar1 >> (0x40 - uVar11 & 0x7f)) <<
                                             ((unsigned int)uVar8 & 0x3f)) + iVar10;
                                    *puVar1 = *puVar1 << (uVar11 & 0x7f);
                                    if ((__int64)(uVar7 - uVar11) < 0) {
                                      fn_82C4E5E8(puVar1);
                                    }
                                    uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                    uVar11 = uVar7 + 0x10;
                                    iVar3 = iVar10;
                                  } while ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff));
                                }
                                uVar11 = *puVar1;
                                *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                *puVar1 = uVar11 << (uVar8 & 0x7f);
                                if ((__int64)(uVar7 - uVar8) < 0) {
                                  fn_82C4E5E8(puVar1);
                                }
                                if ((int)(uVar11 >> (0x40 - uVar8 & 0x7f)) + iVar10 == 0) {
                                  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                  uVar11 = 1;
                                  lVar9 = 0;
                                  uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                  uVar8 = uVar7 + 0x10;
                                  if ((uVar8 & 0xffffffff) == 0) {
                                    do {
                                      if ((uVar8 & 0xffffffff) == 0) break;
                                      uVar11 = uVar11 - uVar8;
                                      *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                      lVar9 = (unsigned __int64)
                                              (unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                                    ((unsigned int)uVar11 & 0x3f)) + lVar9;
                                      *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                      if ((__int64)(uVar7 - uVar8) < 0) {
                                        fn_82C4E5E8(puVar1);
                                      }
                                      uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                      uVar8 = uVar7 + 0x10;
                                    } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                                  }
                                  *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                  uVar8 = (*puVar1 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
                                  *puVar1 = *puVar1 << (uVar11 & 0x7f);
                                  if ((__int64)(uVar7 - uVar11) < 0) {
                                    fn_82C4E5E8(puVar1);
                                  }
                                  if ((int)uVar8 == 1) {
                                    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                    lVar9 = 0;
                                    uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                    uVar11 = uVar7 + 0x10;
                                    if ((uVar11 & 0xffffffff) == 0) {
                                      do {
                                        if ((uVar11 & 0xffffffff) == 0) break;
                                        uVar8 = uVar8 - uVar11;
                                        *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                        lVar9 = (unsigned __int64)
                                                (unsigned int)((int)(*puVar1 >> (0x40 - uVar11 & 0x7f)) <<
                                                      ((unsigned int)uVar8 & 0x3f)) + lVar9;
                                        *puVar1 = *puVar1 << (uVar11 & 0x7f);
                                        if ((__int64)(uVar7 - uVar11) < 0) {
                                          fn_82C4E5E8(puVar1);
                                        }
                                        uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                        uVar11 = uVar7 + 0x10;
                                      } while ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff));
                                    }
                                    uVar11 = *puVar1;
                                    *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                    *puVar1 = uVar11 << (uVar8 & 0x7f);
                                    if ((__int64)(uVar7 - uVar8) < 0) {
                                      fn_82C4E5E8(puVar1);
                                    }
                                    if (((uVar11 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar9 &
                                        0xffffffff) == 0) {
                                      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                      uVar11 = 1;
                                      iVar10 = 0;
                                      uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                      uVar8 = uVar7 + 0x10;
                                      iVar3 = 0;
                                      if ((uVar8 & 0xffffffff) == 0) {
                                        do {
                                          iVar10 = iVar3;
                                          if ((uVar8 & 0xffffffff) == 0) break;
                                          uVar11 = uVar11 - uVar8;
                                          *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                          iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                                   ((unsigned int)uVar11 & 0x3f)) + iVar10;
                                          *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                          if ((__int64)(uVar7 - uVar8) < 0) {
                                            fn_82C4E5E8(puVar1);
                                          }
                                          uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                          uVar8 = uVar7 + 0x10;
                                          iVar3 = iVar10;
                                        } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                                      }
                                      uVar8 = *puVar1;
                                      *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                      *puVar1 = uVar8 << (uVar11 & 0x7f);
                                      if ((__int64)(uVar7 - uVar11) < 0) {
                                        fn_82C4E5E8(puVar1);
                                      }
                                      if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 == 0) {
                                        puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                        uVar11 = 1;
                                        iVar10 = 0;
                                        uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                        uVar8 = uVar7 + 0x10;
                                        iVar3 = 0;
                                        if ((uVar8 & 0xffffffff) == 0) {
                                          do {
                                            iVar10 = iVar3;
                                            if ((uVar8 & 0xffffffff) == 0) break;
                                            uVar11 = uVar11 - uVar8;
                                            *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                            iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                                     ((unsigned int)uVar11 & 0x3f)) + iVar10;
                                            *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                            if ((__int64)(uVar7 - uVar8) < 0) {
                                              fn_82C4E5E8(puVar1);
                                            }
                                            uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                            uVar8 = uVar7 + 0x10;
                                            iVar3 = iVar10;
                                          } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                                        }
                                        uVar8 = *puVar1;
                                        *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                        *puVar1 = uVar8 << (uVar11 & 0x7f);
                                        if ((__int64)(uVar7 - uVar11) < 0) {
                                          fn_82C4E5E8(puVar1);
                                        }
                                        if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 != 1) {
                                          puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                          uVar11 = 1;
                                          iVar10 = 0;
                                          uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                          uVar8 = uVar7 + 0x10;
                                          iVar3 = 0;
                                          if ((uVar8 & 0xffffffff) == 0) {
                                            do {
                                              iVar10 = iVar3;
                                              if ((uVar8 & 0xffffffff) == 0) break;
                                              uVar11 = uVar11 - uVar8;
                                              *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                              iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                                       ((unsigned int)uVar11 & 0x3f)) + iVar10;
                                              *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                              if ((__int64)(uVar7 - uVar8) < 0) {
                                                fn_82C4E5E8(puVar1);
                                              }
                                              uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                              uVar8 = uVar7 + 0x10;
                                              iVar3 = iVar10;
                                            } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
                                          }
                                          uVar8 = *puVar1;
                                          *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                          *puVar1 = uVar8 << (uVar11 & 0x7f);
                                          if ((__int64)(uVar7 - uVar11) < 0) {
                                            fn_82C4E5E8(puVar1);
                                          }
                                          if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 != 0)
                                          {
                                            puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                            uVar11 = 1;
                                            uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                            uVar8 = uVar7 + 0x10;
                                            if ((uVar8 & 0xffffffff) == 0) {
                                              do {
                                                if ((uVar8 & 0xffffffff) == 0) break;
                                                uVar12 = *puVar1;
                                                uVar11 = uVar11 - uVar8;
                                                *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                                *puVar1 = uVar12 << (uVar8 & 0x7f);
                                                if ((__int64)(uVar7 - uVar8) < 0) {
                                                  fn_82C4E5E8(puVar1,uVar12 >> (0x40 - uVar8 &
                                                                                 0x7f) & 0xffffffff)
                                                  ;
                                                }
                                                uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                                uVar8 = uVar7 + 0x10;
                                              } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff))
                                              ;
                                            }
                                            *puVar1 = *puVar1 << (uVar11 & 0x7f);
                                            *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                            if ((__int64)(uVar7 - uVar11) < 0) {
                                              fn_82C4E5E8(puVar1);
                                            }
                                            puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                            uVar11 = 1;
                                            *(unsigned int *)(param_1 + 0xe6c) = 0;
                                            iVar10 = 0;
                                            uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                            uVar8 = uVar7 + 0x10;
                                            iVar3 = 0;
                                            if ((uVar8 & 0xffffffff) == 0) {
                                              do {
                                                iVar10 = iVar3;
                                                if ((uVar8 & 0xffffffff) == 0) break;
                                                uVar11 = uVar11 - uVar8;
                                                *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                                iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) <<
                                                         ((unsigned int)uVar11 & 0x3f)) + iVar10;
                                                *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                                if ((__int64)(uVar7 - uVar8) < 0) {
                                                  fn_82C4E5E8(puVar1);
                                                }
                                                uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                                uVar8 = uVar7 + 0x10;
                                                iVar3 = iVar10;
                                              } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff))
                                              ;
                                            }
                                            uVar8 = *puVar1;
                                            *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                            *puVar1 = uVar8 << (uVar11 & 0x7f);
                                            if ((__int64)(uVar7 - uVar11) < 0) {
                                              fn_82C4E5E8(puVar1);
                                            }
                                            if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 != 1
                                               ) {
                                              puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
                                              uVar11 = 1;
                                              iVar10 = 0;
                                              uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                              uVar8 = uVar7 + 0x10;
                                              iVar3 = 0;
                                              if ((uVar8 & 0xffffffff) == 0) {
                                                do {
                                                  iVar10 = iVar3;
                                                  if ((uVar8 & 0xffffffff) == 0) break;
                                                  uVar11 = uVar11 - uVar8;
                                                  *(int *)(puVar1 + 1) = (int)(uVar7 - uVar8);
                                                  iVar10 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f))
                                                           << ((unsigned int)uVar11 & 0x3f)) + iVar10;
                                                  *puVar1 = *puVar1 << (uVar8 & 0x7f);
                                                  if ((__int64)(uVar7 - uVar8) < 0) {
                                                    fn_82C4E5E8(puVar1);
                                                  }
                                                  uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
                                                  uVar8 = uVar7 + 0x10;
                                                  iVar3 = iVar10;
                                                } while ((uVar8 & 0xffffffff) <
                                                         (uVar11 & 0xffffffff));
                                              }
                                              uVar8 = *puVar1;
                                              *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
                                              *puVar1 = uVar8 << (uVar11 & 0x7f);
                                              if ((__int64)(uVar7 - uVar11) < 0) {
                                                fn_82C4E5E8(puVar1);
                                              }
                                              if ((int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10 !=
                                                  1) {
                                                uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x54) + 8) & 7;
                                                uVar6 = 0;
                                                if (uVar4 != 0) {
                                                  uVar6 = uVar4;
                                                }
                                                fn_82C4E470(*(int *)(param_1 + 0x54),uVar6);
                                                uVar5 = fn_82C5F8E8(param_1,0);
                                                return uVar5;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

