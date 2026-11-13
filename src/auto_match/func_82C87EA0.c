#define true 1
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82C49098();
extern int fn_82C493B0();
extern int fn_82C4E5E8();
extern int fn_82C5CFF0();
extern int fn_82C5E1D8();
extern int fn_82C87D70();


unsigned __int64 fn_82C87EA0(int param_1,unsigned __int64 param_2)

{
  __int64 *plVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar8;
  __int64 lVar7;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned __int64 *puVar11;
  unsigned int auStack_80 [4];
  unsigned char auStack_70 [112];
  
  auStack_80[0] = 0;
  uVar2 = fn_82C87D70();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x5430) != 0) {
    plVar1 = *(__int64 **)(param_1 + 0x54);
    uVar9 = 8;
    uVar4 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar5 & 0xffffffff) < 8) {
      do {
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar5;
        *plVar1 = *plVar1 << (uVar5 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar4 - uVar5);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
        uVar5 = uVar4 + 0x10;
      } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar9 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar4 - uVar9);
    if ((__int64)(uVar4 - uVar9) < 0) {
      fn_82C4E5E8(plVar1);
    }
  }
  iVar6 = (int)param_2;
  if (*(int *)(param_1 + 0x5420) != 0) {
    if ((*(int *)(param_1 + 0x5568) == 0) || (*(int *)(param_1 + 0x56ec) != 0)) {
      puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar9 = 2;
      iVar8 = 0;
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
      uVar5 = uVar4 + 0x10;
      if (iVar6 != 0) {
        iVar10 = 0;
        if ((uVar5 & 0xffffffff) < 2) {
          do {
            iVar8 = iVar10;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar9 = uVar9 - uVar5;
            *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
            iVar8 = ((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar8;
            *puVar11 = *puVar11 << (uVar5 & 0x7f);
            if ((__int64)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar11);
            }
            uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
            uVar5 = uVar4 + 0x10;
            iVar10 = iVar8;
          } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
        }
        uVar5 = *puVar11;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
        *puVar11 = uVar5 << (uVar9 & 0x7f);
        if ((__int64)(uVar4 - uVar9) < 0) {
          fn_82C4E5E8(puVar11);
        }
        *(int *)(param_1 + 0x556c) = (int)(uVar5 >> (0x40 - uVar9 & 0x7f)) + iVar8;
        goto LAB_82c8832c;
      }
      if ((uVar5 & 0xffffffff) < 2) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar3 = *puVar11;
          uVar9 = uVar9 - uVar5;
          *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
          *puVar11 = uVar3 << (uVar5 & 0x7f);
          if ((__int64)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar11,uVar3 >> (0x40 - uVar5 & 0x7f) & 0xffffffff);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
    }
    else {
      puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar9 = 1;
      iVar8 = 0;
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
      uVar5 = uVar4 + 0x10;
      if (iVar6 != 0) {
        iVar10 = 0;
        if ((uVar5 & 0xffffffff) == 0) {
          do {
            iVar8 = iVar10;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar9 = uVar9 - uVar5;
            *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
            iVar8 = ((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar8;
            *puVar11 = *puVar11 << (uVar5 & 0x7f);
            if ((__int64)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar11);
            }
            uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
            uVar5 = uVar4 + 0x10;
            iVar10 = iVar8;
          } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
        }
        uVar5 = *puVar11;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
        *puVar11 = uVar5 << (uVar9 & 0x7f);
        if ((__int64)(uVar4 - uVar9) < 0) {
          fn_82C4E5E8(puVar11);
        }
        puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
        iVar10 = 0;
        *(int *)(param_1 + 0x5424) = (int)(uVar5 >> (0x40 - uVar9 & 0x7f)) + iVar8;
        uVar9 = 1;
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar5 = uVar4 + 0x10;
        iVar8 = 0;
        if ((uVar5 & 0xffffffff) == 0) {
          do {
            iVar10 = iVar8;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar9 = uVar9 - uVar5;
            *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
            iVar10 = ((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar10;
            *puVar11 = *puVar11 << (uVar5 & 0x7f);
            if ((__int64)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar11);
            }
            uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
            uVar5 = uVar4 + 0x10;
            iVar8 = iVar10;
          } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
        }
        uVar5 = *puVar11;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
        *puVar11 = uVar5 << (uVar9 & 0x7f);
        if ((__int64)(uVar4 - uVar9) < 0) {
          fn_82C4E5E8(puVar11);
        }
        *(int *)(param_1 + 0x5428) = (int)(uVar5 >> (0x40 - uVar9 & 0x7f)) + iVar10;
        goto LAB_82c8832c;
      }
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar3 = *puVar11;
          uVar9 = uVar9 - uVar5;
          *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
          *puVar11 = uVar3 << (uVar5 & 0x7f);
          if ((__int64)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar11,uVar3 >> (0x40 - uVar5 & 0x7f) & 0xffffffff);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
      uVar3 = *puVar11;
      uVar5 = uVar3 << (uVar9 & 0x7f);
      *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
      *puVar11 = uVar5;
      if ((__int64)(uVar4 - uVar9) < 0) {
        fn_82C4E5E8(puVar11,uVar5,uVar3 >> (0x40 - uVar9 & 0x7f));
      }
      puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar9 = 1;
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar3 = *puVar11;
          uVar9 = uVar9 - uVar5;
          *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
          *puVar11 = uVar3 << (uVar5 & 0x7f);
          if ((__int64)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar11,uVar3 >> (0x40 - uVar5 & 0x7f) & 0xffffffff);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
    }
    *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
    *puVar11 = *puVar11 << (uVar9 & 0x7f);
    if ((__int64)(uVar4 - uVar9) < 0) {
      fn_82C4E5E8(puVar11);
    }
  }
LAB_82c8832c:
  if (*(int *)(param_1 + 0x563c) != 0) {
    fn_82C5CFF0(param_1,auStack_70,auStack_80);
  }
  puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar9 = 1;
  iVar8 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
  uVar5 = uVar4 + 0x10;
  if (iVar6 == 0) {
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar3 = *puVar11;
        uVar9 = uVar9 - uVar5;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
        *puVar11 = uVar3 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar11,uVar3 >> (0x40 - uVar5 & 0x7f) & 0xffffffff);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar5 = uVar4 + 0x10;
      } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    uVar3 = *puVar11;
    uVar5 = uVar3 << (uVar9 & 0x7f);
    *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
    *puVar11 = uVar5;
    if ((__int64)(uVar4 - uVar9) < 0) {
      fn_82C4E5E8(puVar11,uVar5,uVar3 >> (0x40 - uVar9 & 0x7f));
    }
    puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar9 = 1;
    uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar3 = *puVar11;
        uVar9 = uVar9 - uVar5;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
        *puVar11 = uVar3 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar11,uVar3 >> (0x40 - uVar5 & 0x7f) & 0xffffffff);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar5 = uVar4 + 0x10;
      } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *puVar11 = *puVar11 << (uVar9 & 0x7f);
    *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
    if ((__int64)(uVar4 - uVar9) < 0) {
      fn_82C4E5E8(puVar11);
    }
  }
  else {
    iVar10 = 0;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        iVar8 = iVar10;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar5;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
        iVar8 = ((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar8;
        *puVar11 = *puVar11 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar11);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar5 = uVar4 + 0x10;
        iVar10 = iVar8;
      } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    uVar5 = *puVar11;
    *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
    *puVar11 = uVar5 << (uVar9 & 0x7f);
    if ((__int64)(uVar4 - uVar9) < 0) {
      fn_82C4E5E8(puVar11);
    }
    puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
    iVar10 = 0;
    *(int *)(param_1 + 0xf78) = (int)(uVar5 >> (0x40 - uVar9 & 0x7f)) + iVar8;
    uVar9 = 1;
    uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
    uVar5 = uVar4 + 0x10;
    iVar8 = 0;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        iVar10 = iVar8;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar5;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
        iVar10 = ((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar10;
        *puVar11 = *puVar11 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar11);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar5 = uVar4 + 0x10;
        iVar8 = iVar10;
      } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    uVar5 = *puVar11;
    *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
    *puVar11 = uVar5 << (uVar9 & 0x7f);
    if ((__int64)(uVar4 - uVar9) < 0) {
      fn_82C4E5E8(puVar11);
    }
    *(int *)(param_1 + 0x54ac) = (int)(uVar5 >> (0x40 - uVar9 & 0x7f)) + iVar10;
  }
  if ((*(int *)(param_1 + 0x5640) != 0) &&
     ((*(int *)(param_1 + 0x5510) == 0 || (*(int *)(param_1 + 0x5510) == 1)))) {
    puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar9 = 2;
    iVar10 = 0;
    uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
    uVar5 = uVar4 + 0x10;
    iVar8 = 0;
    if ((uVar5 & 0xffffffff) < 2) {
      do {
        iVar10 = iVar8;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar5;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
        iVar10 = ((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar10;
        *puVar11 = *puVar11 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar11);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar5 = uVar4 + 0x10;
        iVar8 = iVar10;
      } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
    iVar10 = (int)(*puVar11 >> (0x40 - uVar9 & 0x7f)) + iVar10;
    *puVar11 = *puVar11 << (uVar9 & 0x7f);
    if ((__int64)(uVar4 - uVar9) < 0) {
      fn_82C4E5E8(puVar11);
    }
    *(int *)(param_1 + 0x5518) = iVar10;
    if (iVar10 == 3) {
      do {
        puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
        uVar9 = 1;
        lVar7 = 0;
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar5 = uVar4 + 0x10;
        if ((uVar5 & 0xffffffff) == 0) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar9 = uVar9 - uVar5;
            *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
            lVar7 = (unsigned __int64)
                    (unsigned int)((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + lVar7
            ;
            *puVar11 = *puVar11 << (uVar5 & 0x7f);
            if ((__int64)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar11);
            }
            uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
            uVar5 = uVar4 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
        }
        uVar5 = *puVar11;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
        *puVar11 = uVar5 << (uVar9 & 0x7f);
        if ((__int64)(uVar4 - uVar9) < 0) {
          fn_82C4E5E8(puVar11);
        }
        if (((uVar5 >> (0x40 - uVar9 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0) break;
        *(int *)(param_1 + 0x5518) = *(int *)(param_1 + 0x5518) + 1;
      } while( true );
    }
  }
  if ((*(int *)(param_1 + 0x5510) == 2) || (*(int *)(param_1 + 0x5510) == 4)) {
    puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar9 = 3;
    lVar7 = 0;
    uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar5 & 0xffffffff) < 3) {
      do {
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar5;
        *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
        lVar7 = (unsigned __int64)(unsigned int)((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f))
                + lVar7;
        *puVar11 = *puVar11 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar11);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar5 = uVar4 + 0x10;
      } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
    lVar7 = (*puVar11 >> (0x40 - uVar9 & 0x7f) & 0xffffffff) + lVar7;
    *puVar11 = *puVar11 << (uVar9 & 0x7f);
    if ((__int64)(uVar4 - uVar9) < 0) {
      fn_82C4E5E8(puVar11);
    }
    if ((int)lVar7 == 7) {
      puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar9 = 4;
      lVar7 = 0;
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) < 4) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar9 = uVar9 - uVar5;
          *(int *)(puVar11 + 1) = (int)(uVar4 - uVar5);
          lVar7 = (unsigned __int64)
                  (unsigned int)((int)(*puVar11 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + lVar7;
          *puVar11 = *puVar11 << (uVar5 & 0x7f);
          if ((__int64)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar11);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
      *(int *)(puVar11 + 1) = (int)(uVar4 - uVar9);
      lVar7 = (*puVar11 >> (0x40 - uVar9 & 0x7f) & 0xffffffff) + lVar7;
      *puVar11 = *puVar11 << (uVar9 & 0x7f);
      if ((__int64)(uVar4 - uVar9) < 0) {
        fn_82C4E5E8(puVar11);
      }
      if (0xd < (int)lVar7) {
        return 1;
      }
      uVar2 = 1;
      lVar7 = lVar7 + 0x70;
    }
    else {
      uVar2 = 0;
    }
    uVar2 = fn_82C5E1D8(param_1,lVar7,uVar2,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
    return 1;
  }
  if (iVar6 != 0) {
    fn_82C49098(*(unsigned int *)(param_1 + 0x6070),param_1,auStack_80[0],auStack_70);
    uVar2 = fn_82C493B0(param_1,auStack_80[0],auStack_70);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}

