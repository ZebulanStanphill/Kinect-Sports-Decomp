extern int fn_82EF4C58();
extern int fn_82F02410();
extern int fn_82F15CE8();


void fn_82EF6A60(int param_1,unsigned int *param_2,__int64 param_3,int param_4)

{
  unsigned char bVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char *pbVar5;
  int iVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned char bVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  
  uVar3 = *(unsigned int *)(param_1 + 0x1ebc);
  bVar10 = (-(*(int *)(param_1 + 0x6d6c) != 0) & 0x36U) + 0x47;
  if (*(int *)(param_1 + 0xaf0) == 2) {
    fn_82EF4C58();
    return;
  }
  uVar11 = (((__int64)*(int *)(param_1 + 0x2d0) * (__int64)param_4 & 0x7fffffffU) * 2 + param_3 &
           0x7fffffff) * 2;
  if (*(char *)(param_2 + 0x16) == '\0') {
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      iVar8 = *(int *)(param_1 + 0x5174);
      if (*(char *)((int)param_2 + 0x93) == '\0') {
        fn_82F02410(uVar3,*(unsigned int *)(iVar8 + 0x10),*(unsigned int *)(iVar8 + 0x14));
        iVar8 = *(int *)(param_1 + 0x6f98);
        if (iVar8 == 0) goto LAB_82ef6ca0;
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x14) + *(int *)(param_1 + 0x6fd8);
      }
      else {
        fn_82F02410(uVar3,*(unsigned int *)(iVar8 + 0x18),*(unsigned int *)(iVar8 + 0x1c));
        iVar8 = *(int *)(param_1 + 0x6f98);
        if (iVar8 == 0) goto LAB_82ef6ca0;
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x1c) + *(int *)(param_1 + 0x6fd8);
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x5174);
      if (*(char *)((int)param_2 + 0x93) == '\0') {
        fn_82F02410(uVar3,*(unsigned int *)(iVar8 + 0x20),*(unsigned int *)(iVar8 + 0x24));
        iVar8 = *(int *)(param_1 + 0x6f98);
        if (iVar8 == 0) goto LAB_82ef6ca0;
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x24) + *(int *)(param_1 + 0x6fd8);
      }
      else {
        fn_82F02410(uVar3,*(unsigned int *)(iVar8 + 0x28),*(unsigned int *)(iVar8 + 0x2c));
        iVar8 = *(int *)(param_1 + 0x6f98);
        if (iVar8 == 0) goto LAB_82ef6ca0;
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x2c) + *(int *)(param_1 + 0x6fd8);
      }
    }
  }
  else if (*(char *)(param_2 + 0x16) == '\x01') {
    iVar8 = *(int *)(param_1 + 0x5174);
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      fn_82F02410(uVar3,*(unsigned int *)(iVar8 + 0x30),*(unsigned int *)(iVar8 + 0x34));
      iVar8 = *(int *)(param_1 + 0x6f98);
      if (iVar8 == 0) goto LAB_82ef6ca0;
      *(int *)(param_1 + 0x6fd8) =
           *(int *)(*(int *)(param_1 + 0x5174) + 0x34) + *(int *)(param_1 + 0x6fd8);
    }
    else {
      fn_82F02410(uVar3,*(unsigned int *)(iVar8 + 0x38),*(unsigned int *)(iVar8 + 0x3c));
      iVar8 = *(int *)(param_1 + 0x6f98);
      if (iVar8 == 0) goto LAB_82ef6ca0;
      *(int *)(param_1 + 0x6fd8) =
           *(int *)(*(int *)(param_1 + 0x5174) + 0x3c) + *(int *)(param_1 + 0x6fd8);
    }
  }
  else {
    puVar9 = *(unsigned int **)(param_1 + 0x5174);
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      fn_82F02410(uVar3,*puVar9,puVar9[1]);
      iVar8 = *(int *)(param_1 + 0x6f98);
      if (iVar8 == 0) goto LAB_82ef6ca0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x5174) + 4);
    }
    else {
      fn_82F02410(uVar3,puVar9[2],puVar9[3]);
      iVar8 = *(int *)(param_1 + 0x6f98);
      if (iVar8 == 0) goto LAB_82ef6ca0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x5174) + 0xc);
    }
    *(int *)(param_1 + 0x6fd8) = iVar4 + *(int *)(param_1 + 0x6fd8);
  }
  if (iVar8 != 0) {
    *(int *)(param_1 + 0x75cc) = *(int *)(param_1 + 0x75cc) + 1;
  }
LAB_82ef6ca0:
  if (*(char *)(param_2 + 0x16) == '\x04') {
    if (*(int *)(param_1 + 0x97c) != 0) {
      fn_82F15CE8(param_1,param_2[0x18]);
    }
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      fn_82F02410(uVar3,param_2[7],1);
    }
    else {
      fn_82F02410(uVar3,param_2[7],1);
      iVar8 = *(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(iVar8 + -8),
                        *(unsigned int *)(iVar8 + -4));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(int *)(param_1 + 0x6fbc) =
             *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190) + -4) +
             *(int *)(param_1 + 0x6fbc);
        iVar8 = *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190) + -4);
        *(int *)(param_1 + 0x75dc) = *(int *)(param_1 + 0x75dc) + 1;
        *(int *)(param_1 + 0x6fc0) = iVar8 + *(int *)(param_1 + 0x6fc0);
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x16) == '\0') {
      iVar8 = *(int *)(param_1 + 0x914);
      iVar4 = (int)((uVar11 & 0x3fffffff) << 2);
      if (*(char *)((int)param_2 + 0x93) != '\0') {
        pbVar5 = *(unsigned char **)(param_1 + 0x6f10);
        *(unsigned char **)(param_1 + 0x6f10) = pbVar5 + 8;
        bVar1 = *pbVar5;
        puVar9 = (unsigned int *)((unsigned int)bVar1 * 8 + *(int *)(param_1 + 0x5180));
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar9,puVar9[1]);
        if (*(int *)(param_1 + 0x6f98) != 0) {
          iVar6 = (bVar1 + 0x1c01) * 4;
          *(int *)(param_1 + 0x6fcc) =
               *(int *)((unsigned int)bVar1 * 8 + *(int *)(param_1 + 0x5180) + 4) +
               *(int *)(param_1 + 0x6fcc);
          *(int *)(iVar6 + param_1) = *(int *)(iVar6 + param_1) + 1;
          *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
        }
        if (bVar1 == bVar10) {
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned short *)(iVar8 + iVar4),
                            *(unsigned int *)(param_1 + 0xa24));
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                            (*(int *)(iVar8 + iVar4) << 0x10) >> 0x14,
                            *(unsigned int *)(param_1 + 0xa28));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(int *)(param_1 + 0x6fd4) =
                 *(int *)(param_1 + 0xa28) + *(int *)(param_1 + 0xa24) + *(int *)(param_1 + 0x6fd4);
          }
        }
        else {
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(pbVar5 + 4),
                            *(unsigned char *)((unsigned int)*pbVar5 + *(int *)(param_1 + 0x5188)));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(unsigned int *)(param_1 + 0x6fd0) =
                 (unsigned int)*(unsigned char *)((unsigned int)*pbVar5 + *(int *)(param_1 + 0x5188)) +
                 *(int *)(param_1 + 0x6fd0);
          }
        }
      }
      if (((*(unsigned int *)(iVar8 + iVar4) & 3) != 0) &&
         (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                            ((unsigned __int64)*(unsigned int *)(iVar8 + iVar4) & 3) - 1,1),
         *(int *)(param_1 + 0x6f98) != 0)) {
        *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
      }
    }
    if (*(char *)(param_2 + 0x16) == '\x01') {
      cVar2 = *(char *)((int)param_2 + 0x93);
      uVar12 = 8;
      puVar9 = (unsigned int *)(*(int *)(param_1 + 0x5178) + cVar2 * 8);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar9,puVar9[1]);
      uVar13 = 0;
      do {
        iVar8 = *(int *)(param_1 + 0x914);
        iVar4 = (int)(((__int64)(int)(uVar13 & 2) * (__int64)*(int *)(param_1 + 0x2d0) +
                       ((unsigned __int64)uVar13 & 1) + uVar11 & 0x3fffffff) << 2);
        if (((int)cVar2 & uVar12) != 0) {
          pbVar5 = *(unsigned char **)(param_1 + 0x6f10);
          *(unsigned char **)(param_1 + 0x6f10) = pbVar5 + 8;
          bVar1 = *pbVar5;
          puVar9 = (unsigned int *)((unsigned int)bVar1 * 8 + *(int *)(param_1 + 0x5180));
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar9,puVar9[1]);
          if (*(int *)(param_1 + 0x6f98) != 0) {
            iVar6 = (bVar1 + 0x1c01) * 4;
            *(int *)(param_1 + 0x6fcc) =
                 *(int *)((unsigned int)bVar1 * 8 + *(int *)(param_1 + 0x5180) + 4) +
                 *(int *)(param_1 + 0x6fcc);
            *(int *)(iVar6 + param_1) = *(int *)(iVar6 + param_1) + 1;
            *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
          }
          if (bVar1 == bVar10) {
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned short *)(iVar4 + iVar8),
                              *(unsigned int *)(param_1 + 0xa24));
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                              (*(int *)(iVar4 + iVar8) << 0x10) >> 0x14,
                              *(unsigned int *)(param_1 + 0xa28));
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(int *)(param_1 + 0x6fd4) =
                   *(int *)(param_1 + 0xa28) + *(int *)(param_1 + 0xa24) +
                   *(int *)(param_1 + 0x6fd4);
            }
          }
          else {
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(pbVar5 + 4),
                              *(unsigned char *)((unsigned int)*pbVar5 + *(int *)(param_1 + 0x5188)));
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(unsigned int *)(param_1 + 0x6fd0) =
                   (unsigned int)*(unsigned char *)((unsigned int)*pbVar5 + *(int *)(param_1 + 0x5188)) +
                   *(int *)(param_1 + 0x6fd0);
            }
          }
        }
        if (((*(unsigned int *)(iVar4 + iVar8) & 3) != 0) &&
           (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                              ((unsigned __int64)*(unsigned int *)(iVar4 + iVar8) & 3) - 1,1),
           *(int *)(param_1 + 0x6f98) != 0)) {
          *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
        }
        uVar13 = uVar13 + 1;
        uVar12 = (int)uVar12 >> 1;
      } while ((int)uVar13 < 4);
    }
    if (*(char *)((int)param_2 + 0x92) != '\0') {
      iVar8 = *(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(iVar8 + -8),
                        *(unsigned int *)(iVar8 + -4));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(int *)(param_1 + 0x6fbc) =
             *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c) + -4) +
             *(int *)(param_1 + 0x6fbc);
        iVar8 = *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c) + -4);
        *(int *)(param_1 + 0x75d4) = *(int *)(param_1 + 0x75d4) + 1;
        *(int *)(param_1 + 0x6fc4) = iVar8 + *(int *)(param_1 + 0x6fc4);
      }
      if (*(int *)(param_1 + 0x97c) != 0) {
        fn_82F15CE8(param_1,param_2[0x18]);
      }
      if ((*(int *)(param_1 + 0x648) != 0) && (*(int *)(param_1 + 0x61c) != 0)) {
        uVar11 = (~(unsigned __int64)*param_2 & 0xffffffff) >> 0x19 & 8;
        puVar7 = param_2;
        for (iVar8 = 0;
            ((puVar7 = puVar7 + 1, *puVar7 == 0 || (*(char *)((int)param_2 + iVar8 + 0x4a) != '\0'))
            && (iVar8 < 6)); iVar8 = iVar8 + 1) {
        }
        cVar2 = *(char *)((int)param_2 + iVar8 + 0x38);
        if (cVar2 == '\x01') {
          uVar11 = (__int64)*(char *)((int)param_2 + iVar8 + 0x80) + uVar11;
        }
        else if (cVar2 == '\x02') {
          uVar11 = (__int64)*(char *)((int)param_2 + iVar8 + 0x86) + uVar11 + 3;
        }
        else if (cVar2 == '\x04') {
          uVar11 = uVar11 + 7;
        }
        iVar8 = (int)((uVar11 & 0x1fffffff) << 3);
        puVar9 = (unsigned int *)(iVar8 + *(int *)(param_1 + 0x7600));
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar9,puVar9[1]);
        *(int *)(param_1 + 0x75e4) =
             *(int *)(iVar8 + *(int *)(param_1 + 0x7600) + 4) + *(int *)(param_1 + 0x75e4);
      }
    }
  }
  return;
}

