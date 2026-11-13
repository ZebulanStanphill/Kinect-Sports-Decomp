typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C45020();
extern int fn_82C4E0F8();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C564E8();
extern int fn_82C5E340();
extern int fn_82C5F9C8();
extern int fn_82C62BF0();
extern int fn_82C84080();
extern int fn_82C8DC88();
extern int fn_82C91D80();
extern int fn_82C91E80();
extern int fn_82CA12A8();
extern int fn_82CA1518();
extern int fn_82CA8498();
extern int fn_82CAAA10();
extern int fn_82CBDF88();
extern int fn_82CC0C78();
extern int fn_82CC0D88();
extern int fn_830BFE38();
extern int fn_830C0200();
extern int fn_830C03A8();


unsigned __int64 fn_82C84208(int param_1)

{
  unsigned char bVar1;
  unsigned __int64 *puVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  bool bVar5;
  int iVar7;
  unsigned __int64 uVar6;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned char *pbVar11;
  unsigned __int64 uVar9;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 *plVar14;
  
  *(unsigned int *)(param_1 + 0x43cc) = 0;
  *(unsigned int *)(param_1 + 0x4c6c) = 1;
  *(unsigned int *)(param_1 + 0x79c) = 1;
  uVar12 = 0;
  fn_82C84080(param_1,1);
  if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) != 0) &&
     (iVar7 = fn_82C45020(*(int *)(param_1 + 0x6070),param_1), iVar7 != 0)) goto LAB_82c85158;
  *(unsigned int *)(param_1 + 0x54c8) = 0;
  if (*(__int64 *)(param_1 + 0xe30) == 1) {
    if (*(int *)(param_1 + 0x5424) == 0) {
      *(unsigned int *)(param_1 + 0x54cc) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0x54cc) = 1;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x54cc) = *(unsigned int *)(param_1 + 0x50d0) ^ 1;
  }
  if (*(int *)(param_1 + 0x5424) == 0) {
    *(unsigned int *)(param_1 + 0x50d0) = 1;
  }
  else {
    *(unsigned int *)(param_1 + 0x50d0) = 0;
  }
  *(unsigned int *)(param_1 + 0x120) = *(unsigned int *)(param_1 + 0x5510);
  uVar6 = fn_82CBDF88(param_1);
  if ((int)uVar6 != 0) goto LAB_82c842e8;
  if (*(int *)(param_1 + 0x120) == 1) {
    uVar6 = fn_82CC0C78(param_1,*(unsigned int *)(param_1 + 0x5518));
    if ((int)uVar6 != 0) goto LAB_82c842e8;
  }
  else if (*(int *)(param_1 + 0x120) == 2) {
    uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x5518) -
            (__int64)
            ((int)(*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) *
                  *(unsigned int *)(param_1 + 0x5518)) >> 8)) - 1;
    uVar6 = fn_82CC0C78(param_1);
    if ((int)uVar6 != 0) goto LAB_82c84354;
    uVar6 = fn_82CC0D88(param_1,((uVar8 & 0xffffffff) >> 0x1f) - 1 & uVar8);
    if ((int)uVar6 != 0) goto LAB_82c84784;
  }
  iVar7 = *(int *)(param_1 + 0x120);
  if (iVar7 == 1) {
    *(unsigned int *)(param_1 + 0xd58) = 0;
  }
  *(unsigned int *)(param_1 + 0x79c) = 1;
  if (((*(int *)(param_1 + 0x5510) == 0) || (*(int *)(param_1 + 0x5510) == 4)) &&
     (*(int *)(param_1 + 0x3a04) != 0)) {
    if (*(int *)(param_1 + 0x39f4) < 1) {
      fn_82C5F9C8(param_1,*(int *)(param_1 + 0x39f4) == 0);
    }
    else if (*(int *)(param_1 + 0xd54) == -3) {
      if (iVar7 == 2) goto LAB_82c85158;
      *(unsigned int *)(param_1 + 0xd54) = (unsigned int)(*(int *)(param_1 + 0x5638) == 0);
      if (*(int *)(param_1 + 0xd68) != 0) {
        fn_82C91D80(param_1);
      }
      fn_82C91E80(param_1);
    }
    else if (*(int *)(param_1 + 0xd54) == 1) {
      if (iVar7 == 4) {
        *(unsigned int *)(param_1 + 0xd74) = 1;
        *(unsigned int *)(param_1 + 0x54c8) = 1;
        *(unsigned int *)(param_1 + 0x54cc) = *(unsigned int *)(param_1 + 0x54cc) ^ 1;
        fn_82CA8498(param_1,0);
        fn_82CAAA10(param_1);
        return 0;
      }
      *(unsigned int *)(param_1 + 0xd54) = 0;
      fn_82C91D80(param_1);
      fn_82C91E80(param_1);
      fn_82CA12A8(param_1,*(unsigned int *)(param_1 + 0x50d0));
      *(unsigned int *)(param_1 + 0xd5c) = 0;
    }
    else {
      if (*(int *)(param_1 + 0xd68) != 0) {
        fn_82C91D80(param_1);
      }
      if (*(int *)(param_1 + 0x120) != 4) {
        fn_82C91E80(param_1);
      }
      *(unsigned int *)(param_1 + 0xd5c) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x120) == 4)) {
    *(unsigned int *)(param_1 + 0xe8c) = 1;
    if ((*(int *)(param_1 + 0x3cd4) != 0) || (uVar10 = 1, *(int *)(param_1 + 0x98) == 0)) {
      uVar10 = 0;
    }
    *(unsigned int *)(param_1 + 0x3cb4) = uVar10;
    if (*(int *)(param_1 + 0x3a24) != 0) {
      fn_82C62BF0(param_1);
    }
    uVar6 = fn_830BFE38(param_1);
    if ((int)uVar6 == 1) goto LAB_82c846cc;
LAB_82c8477c:
    if ((int)uVar6 != 0) {
LAB_82c84784:
      fn_82CA8498(param_1,0);
      fn_82CAAA10(param_1);
      return uVar6;
    }
  }
  else {
    fn_82C564E8(param_1);
    if ((*(int *)(param_1 + 0x3a04) == 0) || (*(int *)(param_1 + 0x120) == 1)) {
      if (*(int *)(param_1 + 0x39f4) == 0) {
        fn_82C5F9C8(param_1,1);
      }
      else {
        if (*(int *)(param_1 + 0xd54) == 1) {
          *(unsigned int *)(param_1 + 0xd54) = 0;
LAB_82c8458c:
          fn_82C91D80(param_1);
        }
        else if (*(int *)(param_1 + 0xd68) != 0) goto LAB_82c8458c;
        fn_82C91E80(param_1);
      }
      *(unsigned int *)(param_1 + 0xd5c) = 0;
    }
    else if (*(int *)(param_1 + 0x120) == 2) {
      if ((*(int *)(param_1 + 0xd54) == 1) && (*(int *)(param_1 + 0x5638) == 0)) {
        *(unsigned int *)(param_1 + 0xd74) = 1;
        *(unsigned int *)(param_1 + 0x54c8) = 1;
        *(unsigned int *)(param_1 + 0x54cc) = *(unsigned int *)(param_1 + 0x54cc) ^ 1;
        fn_82CA8498(param_1,0);
        fn_82CAAA10(param_1);
        return 0;
      }
      if (*(int *)(param_1 + 0xd68) != 0) {
        fn_82C91D80(param_1);
      }
    }
    if (*(int *)(param_1 + 0xfb4) != 0) {
      if (*(int *)(param_1 + 0x39f4) != 0) {
        fn_82C5E340(param_1);
      }
      if (*(int *)(param_1 + 0x50f8) != 0) {
        fn_82C8DC88(param_1,0,*(unsigned int *)(param_1 + 0x5100),
                          *(unsigned int *)(param_1 + 0x5104));
      }
      if (*(int *)(param_1 + 0x50fc) != 0) {
        fn_82C8DC88(param_1,1,*(unsigned int *)(param_1 + 0x5108),
                          *(unsigned int *)(param_1 + 0x510c));
      }
      if (*(int *)(param_1 + 0x56d0) == 0) {
        (**(int (***)())(param_1 + 0x3e30))
                  (0,*(unsigned int *)(param_1 + 0xecc),0,*(int *)(param_1 + 0xac) << 1,
                   *(unsigned int *)(param_1 + 0xdc),1,1,*(unsigned int *)(param_1 + 0xa4));
        (**(int (***)())(param_1 + 0x3e2c))
                  (0,*(unsigned int *)(param_1 + 0xed0),*(unsigned int *)(param_1 + 0xed4),0,
                   *(int *)(param_1 + 0xb0) << 1,*(unsigned int *)(param_1 + 0xe0),1,1);
      }
    }
    if (*(int *)(param_1 + 0x120) == 2) {
      uVar6 = fn_830C03A8();
    }
    else {
      uVar6 = fn_830C0200(param_1);
    }
    if ((int)uVar6 != 1) goto LAB_82c8477c;
LAB_82c846cc:
    uVar12 = 1;
  }
  if ((((*(int *)(param_1 + 0x5510) != 0) && (*(int *)(param_1 + 0x5514) == 0)) &&
      (*(int *)(param_1 + 0x3a04) != 0)) && (0 < *(int *)(param_1 + 0x39f4))) {
    if (*(int *)(param_1 + 0xd54) == -3) {
      if (*(int *)(param_1 + 0x120) == 2) goto LAB_82c85158;
      *(unsigned int *)(param_1 + 0xd54) = (unsigned int)LZCOUNT(*(unsigned int *)(param_1 + 0x5638)) >> 5;
    }
    else {
      if (*(int *)(param_1 + 0xd54) == 1) {
        *(unsigned int *)(param_1 + 0xd54) = 0;
      }
      *(unsigned int *)(param_1 + 0xd5c) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) goto LAB_82c85158;
  fn_82CA12A8(param_1,*(unsigned int *)(param_1 + 0x50d0));
  *(unsigned int *)(param_1 + 0x54c8) = 1;
  *(unsigned int *)(param_1 + 0x50d0) = *(unsigned int *)(param_1 + 0x50d0) ^ 1;
  *(unsigned int *)(param_1 + 0x54cc) = *(unsigned int *)(param_1 + 0x54cc) ^ 1;
  *(unsigned int *)(param_1 + 0x120) = *(unsigned int *)(param_1 + 0x5514);
  puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
  if (*(int *)((int)puVar2 + 0x1c) != 0) {
    pbVar11 = *(unsigned char **)((int)puVar2 + 0xc);
    iVar7 = *(int *)(puVar2 + 1);
    while (iVar7 == -0x10) {
      if (*(unsigned char **)(puVar2 + 2) < pbVar11) {
        if (*(int *)(puVar2 + 3) != 1) break;
        fn_82C4E0F8(puVar2);
        pbVar11 = *(unsigned char **)((int)puVar2 + 0xc);
      }
      else {
        uVar3 = *(unsigned int *)(puVar2 + 1);
        if (0x28 < (int)uVar3) {
          if (((unsigned __int64)uVar3 + 0x10 & 0xffffffff) == 0) {
            uVar8 = (unsigned __int64)(*pbVar11 >> ((unsigned __int64)uVar3 + 0xf8 & 0x7f)) + *puVar2 >> 0x1f &
                    0xffffffff;
            goto LAB_82c84898;
          }
          break;
        }
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        *(unsigned int *)(puVar2 + 1) = uVar3 + 8;
        *(unsigned char **)((int)puVar2 + 0xc) = pbVar11;
        *puVar2 = ((unsigned __int64)bVar1 << ((__int64)(int)(0x28 - uVar3) & 0x7fU)) + *puVar2;
      }
      iVar7 = *(int *)(puVar2 + 1);
    }
    uVar8 = *puVar2 >> 0x3f;
LAB_82c84898:
    if (uVar8 == 0) goto LAB_82c85158;
  }
  plVar14 = *(__int64 **)(param_1 + 0x54);
  if (*(int *)((int)plVar14 + 0x1c) != 0) {
    uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
    uVar13 = 1;
    uVar9 = uVar8 + 0x10;
    if ((uVar9 & 0xffffffff) == 0) {
      do {
        if ((uVar9 & 0xffffffff) == 0) break;
        uVar13 = uVar13 - uVar9;
        *plVar14 = *plVar14 << (uVar9 & 0x7f);
        *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
        if ((__int64)(uVar8 - uVar9) < 0) {
          fn_82C4E5E8(plVar14);
        }
        uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
        uVar9 = uVar8 + 0x10;
      } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
    }
    *plVar14 = *plVar14 << (uVar13 & 0x7f);
    *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
    if ((__int64)(uVar8 - uVar13) < 0) {
      fn_82C4E5E8(plVar14);
    }
  }
  fn_82C4E470(plVar14,*(unsigned int *)(plVar14 + 1) & 7);
  puVar4 = *(unsigned short **)(param_1 + 0x54);
  pbVar11 = *(unsigned char **)(puVar4 + 6);
  iVar7 = *(int *)(puVar4 + 4);
  while (iVar7 + 0x10U < 0x10) {
    if (*(unsigned char **)(puVar4 + 8) < pbVar11) {
      if (*(int *)(puVar4 + 0xc) != 1) break;
      fn_82C4E0F8(puVar4);
      pbVar11 = *(unsigned char **)(puVar4 + 6);
    }
    else {
      uVar3 = *(unsigned int *)(puVar4 + 4);
      if (0x28 < (int)uVar3) {
        if (((unsigned __int64)uVar3 + 0x10 & 0xffffffff) < 0x10) {
          uVar8 = (unsigned __int64)(*pbVar11 >> ((unsigned __int64)uVar3 + 0xf8 & 0x7f)) + *(__int64 *)puVar4 >>
                  0x10 & 0xffffffff;
          goto LAB_82c849f4;
        }
        break;
      }
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      *(unsigned int *)(puVar4 + 4) = uVar3 + 8;
      *(unsigned char **)(puVar4 + 6) = pbVar11;
      *(unsigned __int64 *)puVar4 =
           ((unsigned __int64)bVar1 << ((__int64)(int)(0x28 - uVar3) & 0x7fU)) + *(__int64 *)puVar4;
    }
    iVar7 = *(int *)(puVar4 + 4);
  }
  uVar8 = (unsigned __int64)*puVar4;
LAB_82c849f4:
  bVar5 = false;
  uVar9 = 0;
  if (uVar8 == 0) {
    do {
      plVar14 = *(__int64 **)(param_1 + 0x54);
      if (*(int *)((int)plVar14 + 0x14) != 0) {
        if (!bVar5) goto LAB_82c84de4;
        break;
      }
      uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
      uVar13 = 0x10;
      uVar9 = uVar8 + 0x10;
      if ((uVar9 & 0xffffffff) < 0x10) {
        do {
          if ((uVar9 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar9;
          *plVar14 = *plVar14 << (uVar9 & 0x7f);
          *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
          if ((__int64)(uVar8 - uVar9) < 0) {
            fn_82C4E5E8(plVar14);
          }
          uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
          uVar9 = uVar8 + 0x10;
        } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *plVar14 = *plVar14 << (uVar13 & 0x7f);
      *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
      if ((__int64)(uVar8 - uVar13) < 0) {
        fn_82C4E5E8(plVar14);
      }
      puVar4 = *(unsigned short **)(param_1 + 0x54);
      pbVar11 = *(unsigned char **)(puVar4 + 6);
      iVar7 = *(int *)(puVar4 + 4);
      while (iVar7 + 0x10U < 0x10) {
        if (*(unsigned char **)(puVar4 + 8) < pbVar11) {
          if (*(int *)(puVar4 + 0xc) != 1) break;
          fn_82C4E0F8(puVar4);
          pbVar11 = *(unsigned char **)(puVar4 + 6);
        }
        else {
          uVar3 = *(unsigned int *)(puVar4 + 4);
          if (0x28 < (int)uVar3) {
            if (((unsigned __int64)uVar3 + 0x10 & 0xffffffff) < 0x10) {
              uVar9 = (unsigned __int64)(*pbVar11 >> ((unsigned __int64)uVar3 + 0xf8 & 0x7f)) +
                      *(__int64 *)puVar4 >> 0x10 & 0xffffffff;
              goto LAB_82c84b44;
            }
            break;
          }
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          *(unsigned int *)(puVar4 + 4) = uVar3 + 8;
          *(unsigned char **)(puVar4 + 6) = pbVar11;
          *(unsigned __int64 *)puVar4 =
               ((unsigned __int64)bVar1 << ((__int64)(int)(0x28 - uVar3) & 0x7fU)) + *(__int64 *)puVar4;
        }
        iVar7 = *(int *)(puVar4 + 4);
      }
      uVar9 = (unsigned __int64)*puVar4;
LAB_82c84b44:
      plVar14 = *(__int64 **)(param_1 + 0x54);
      bVar5 = true;
      if (*(int *)((int)plVar14 + 0x14) != 0) goto LAB_82c85158;
    } while (uVar9 == 0);
    if (uVar9 == 0x10c) {
      uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
      uVar13 = 0x10;
      uVar9 = uVar8 + 0x10;
      if ((uVar9 & 0xffffffff) < 0x10) {
        do {
          if ((uVar9 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar9;
          *plVar14 = *plVar14 << (uVar9 & 0x7f);
          *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
          if ((__int64)(uVar8 - uVar9) < 0) {
            fn_82C4E5E8(plVar14);
          }
          uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
          uVar9 = uVar8 + 0x10;
        } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *plVar14 = *plVar14 << (uVar13 & 0x7f);
      *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
      if ((__int64)(uVar8 - uVar13) < 0) {
        fn_82C4E5E8(plVar14);
      }
    }
    else if (uVar9 == 1) {
      uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
      uVar13 = 8;
      uVar9 = uVar8 + 0x10;
      if ((uVar9 & 0xffffffff) < 8) {
        do {
          if ((uVar9 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar9;
          *plVar14 = *plVar14 << (uVar9 & 0x7f);
          *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
          if ((__int64)(uVar8 - uVar9) < 0) {
            fn_82C4E5E8(plVar14);
          }
          uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
          uVar9 = uVar8 + 0x10;
        } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *plVar14 = *plVar14 << (uVar13 & 0x7f);
      *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
      if ((__int64)(uVar8 - uVar13) < 0) {
        fn_82C4E5E8(plVar14);
      }
      puVar4 = *(unsigned short **)(param_1 + 0x54);
      pbVar11 = *(unsigned char **)(puVar4 + 6);
      iVar7 = *(int *)(puVar4 + 4);
      while (iVar7 + 0x10U < 0x10) {
        if (*(unsigned char **)(puVar4 + 8) < pbVar11) {
          if (*(int *)(puVar4 + 0xc) != 1) break;
          fn_82C4E0F8(puVar4);
          pbVar11 = *(unsigned char **)(puVar4 + 6);
        }
        else {
          uVar3 = *(unsigned int *)(puVar4 + 4);
          if (0x28 < (int)uVar3) {
            if (((unsigned __int64)uVar3 + 0x10 & 0xffffffff) < 0x10) {
              uVar8 = (unsigned __int64)(*pbVar11 >> ((unsigned __int64)uVar3 + 0xf8 & 0x7f)) +
                      *(__int64 *)puVar4 >> 0x10 & 0xffffffff;
              goto LAB_82c84d2c;
            }
            break;
          }
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          *(unsigned int *)(puVar4 + 4) = uVar3 + 8;
          *(unsigned char **)(puVar4 + 6) = pbVar11;
          *(unsigned __int64 *)puVar4 =
               ((unsigned __int64)bVar1 << ((__int64)(int)(0x28 - uVar3) & 0x7fU)) + *(__int64 *)puVar4;
        }
        iVar7 = *(int *)(puVar4 + 4);
      }
      uVar8 = (unsigned __int64)*puVar4;
LAB_82c84d2c:
      if (uVar8 == 0x10c) {
        plVar14 = *(__int64 **)(param_1 + 0x54);
        uVar13 = 0x10;
        uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
        uVar9 = uVar8 + 0x10;
        if ((uVar9 & 0xffffffff) < 0x10) {
          do {
            if ((uVar9 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar9;
            *plVar14 = *plVar14 << (uVar9 & 0x7f);
            *(int *)(plVar14 + 1) = (int)(uVar8 - uVar9);
            if ((__int64)(uVar8 - uVar9) < 0) {
              fn_82C4E5E8(plVar14);
            }
            uVar8 = (unsigned __int64)*(unsigned int *)(plVar14 + 1);
            uVar9 = uVar8 + 0x10;
          } while ((uVar9 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *plVar14 = *plVar14 << (uVar13 & 0x7f);
        *(int *)(plVar14 + 1) = (int)(uVar8 - uVar13);
        if ((__int64)(uVar8 - uVar13) < 0) {
          fn_82C4E5E8(plVar14);
        }
      }
    }
  }
  else {
LAB_82c84de4:
    if ((*(int *)(param_1 + 0x56a8) != 0) && (*(int *)(param_1 + 0x5620) == 0)) goto LAB_82c85158;
  }
  uVar6 = fn_82CBDF88(param_1);
  if ((int)uVar6 != 0) {
LAB_82c842e8:
    fn_82CA8498(param_1,0);
    fn_82CAAA10(param_1);
    return uVar6;
  }
  if (*(int *)(param_1 + 0x120) == 1) {
    uVar6 = fn_82CC0C78(param_1,*(unsigned int *)(param_1 + 0x5518));
    if ((int)uVar6 != 0) {
      fn_82CA8498(param_1,0);
      fn_82CAAA10(param_1);
      return uVar6;
    }
  }
  else if (*(int *)(param_1 + 0x120) == 2) {
    uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x5518) -
            (__int64)
            ((int)(*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) *
                  *(unsigned int *)(param_1 + 0x5518)) >> 8)) - 1;
    uVar6 = fn_82CC0C78(param_1);
    if ((int)uVar6 != 0) {
LAB_82c84354:
      fn_82CA8498(param_1,0);
      fn_82CAAA10(param_1);
      return uVar6;
    }
    uVar6 = fn_82CC0D88(param_1,((uVar8 & 0xffffffff) >> 0x1f) - 1 & uVar8);
    if ((int)uVar6 != 0) goto LAB_82c842e8;
  }
  iVar7 = *(int *)(param_1 + 0x120);
  if (iVar7 == 1) {
    *(unsigned int *)(param_1 + 0xd58) = 0;
  }
  *(unsigned int *)(param_1 + 0x79c) = 1;
  if ((iVar7 == 0) || (iVar7 == 4)) {
    *(unsigned int *)(param_1 + 0xe8c) = 1;
    if ((*(int *)(param_1 + 0x3cd4) != 0) || (uVar10 = 1, *(int *)(param_1 + 0x98) == 0)) {
      uVar10 = 0;
    }
    *(unsigned int *)(param_1 + 0x3cb4) = uVar10;
    if (*(int *)(param_1 + 0x3a24) != 0) {
      fn_82C62BF0(param_1);
    }
    uVar6 = fn_830BFE38(param_1);
    if ((int)uVar6 == 1) goto LAB_82c85074;
LAB_82c85130:
    if ((int)uVar6 != 0) {
      fn_82CA8498(param_1,0);
      fn_82CAAA10(param_1);
      return uVar6;
    }
  }
  else {
    fn_82C564E8(param_1);
    if (*(int *)(param_1 + 0xfb4) != 0) {
      if (*(int *)(param_1 + 0x39f4) != 0) {
        fn_82C5E340(param_1);
      }
      if (*(int *)(param_1 + 0x50f8) != 0) {
        if (*(int *)(param_1 + 0x50d0) == 1) {
          fn_82CA1518(param_1,0);
          *(unsigned int *)(param_1 + 0x3d0c) = 1;
        }
        fn_82C8DC88(param_1,0,*(unsigned int *)(param_1 + 0x5100),
                          *(unsigned int *)(param_1 + 0x5104));
      }
      if (*(int *)(param_1 + 0x50fc) != 0) {
        if (*(int *)(param_1 + 0x50d0) == 0) {
          fn_82CA1518(param_1,1);
          *(unsigned int *)(param_1 + 0x3d0c) = 1;
        }
        fn_82C8DC88(param_1,1,*(unsigned int *)(param_1 + 0x5108),
                          *(unsigned int *)(param_1 + 0x510c));
      }
      if ((*(int *)(param_1 + 0x56d0) == 0) &&
         (((*(int *)(param_1 + 0x50f8) != 0 && (*(int *)(param_1 + 0x50d0) == 0)) ||
          ((*(int *)(param_1 + 0x50fc) != 0 && (*(int *)(param_1 + 0x50d0) == 1)))))) {
        (**(int (***)())(param_1 + 0x3e30))
                  (0,*(unsigned int *)(param_1 + 0xecc),0,*(int *)(param_1 + 0xac) << 1,
                   *(unsigned int *)(param_1 + 0xdc),1,1,*(unsigned int *)(param_1 + 0xa4));
        (**(int (***)())(param_1 + 0x3e2c))
                  (0,*(unsigned int *)(param_1 + 0xed0),*(unsigned int *)(param_1 + 0xed4),0,
                   *(int *)(param_1 + 0xb0) << 1,*(unsigned int *)(param_1 + 0xe0),1,1);
      }
    }
    if (*(int *)(param_1 + 0x120) == 2) {
      uVar6 = fn_830C03A8();
    }
    else {
      uVar6 = fn_830C0200(param_1);
    }
    if ((int)uVar6 != 1) goto LAB_82c85130;
LAB_82c85074:
    uVar12 = 1;
  }
  if (*(int *)(param_1 + 0x3d0c) != 0) {
    fn_82CA1518(param_1,*(unsigned int *)(param_1 + 0x50d0));
  }
  if ((*(int *)(param_1 + 0x50c8) != 0) && (*(int *)(param_1 + 0x50cc) != 0)) {
    fn_82CA12A8(param_1,*(unsigned int *)(param_1 + 0x50d0));
    *(unsigned int *)(param_1 + 0x50d0) = *(unsigned int *)(param_1 + 0x50d0) ^ 1;
    fn_82CA8498(param_1,0);
    fn_82CAAA10(param_1);
    return uVar12;
  }
LAB_82c85158:
  fn_82CA8498(param_1,0);
  fn_82CAAA10(param_1);
  return 1;
}

