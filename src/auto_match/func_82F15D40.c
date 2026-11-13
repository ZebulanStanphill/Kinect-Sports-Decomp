typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F02410();
extern int fn_82F15CE8();
extern unsigned int lbl_831AFCA0;
extern unsigned int lbl_831B8ED8;
extern unsigned int lbl_831B8EDC;


void fn_82F15D40(int param_1,unsigned int *param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  bool bVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = *(int *)(param_1 + 0x2d0);
  uVar3 = *(unsigned int *)(param_1 + 0x1ebc);
  if (*(int *)(param_1 + 0x8d0) == 0) {
    fn_82F02410(uVar3,(param_2[0x17] & 0xf0000000) == 0x10000000,1);
  }
  if (*(int *)(param_1 + 0x8c4) == 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*param_2 >> 0x1f,1);
  }
  iVar14 = (iVar13 * param_4 + param_3) * 4;
  iVar13 = *(int *)(param_1 + 0x914);
  bVar4 = *(unsigned char *)((int)param_2 + 0x93) | *(unsigned char *)((int)param_2 + 0x92);
  if ((param_2[0x17] & 0xf0000000) == 0x10000000) goto LAB_82f15fc4;
  if ((*param_2 & 0x80000000) == 0) {
    bVar1 = **(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58);
    puVar5 = (unsigned int *)((unsigned int)bVar1 * 8 + *(int *)(param_1 + 0x5150));
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar5,puVar5[1]);
    if (*(int *)(param_1 + 0x6f98) != 0) {
      iVar12 = (bVar1 + 0x1c01) * 4;
      *(int *)(param_1 + 0x6fcc) =
           *(int *)((unsigned int)bVar1 * 8 + *(int *)(param_1 + 0x5150) + 4) + *(int *)(param_1 + 0x6fcc);
      *(int *)(iVar12 + param_1) = *(int *)(iVar12 + param_1) + 1;
      *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
    }
    if ((bVar1 == 0x22) || (bVar1 == 0x47)) {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned short *)(iVar13 + iVar14),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xa24) -
                        (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                        (int)(*(unsigned int *)(iVar13 + iVar14) << 0x10 |
                             *(unsigned int *)(iVar13 + iVar14) >> 0x10) >> 0x14,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xa28) -
                        (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        iVar12 = (*(int *)(param_1 + 0xa24) - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                 *(int *)(param_1 + 0x6fd4);
        *(int *)(param_1 + 0x6fd4) = iVar12;
        *(int *)(param_1 + 0x6fd4) =
             (iVar12 - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) + *(int *)(param_1 + 0xa28);
      }
    }
    else {
      puVar11 = *(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar11 >> 1 & 0x1ffff,
                        (&lbl_831AFCA0)[*(int *)(param_1 + 0xa00) * 0x49 + (unsigned int)*(unsigned char *)puVar11]);
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(unsigned int *)(param_1 + 0x6fd0) =
             (unsigned int)(unsigned char)(&lbl_831AFCA0)
                         [(unsigned int)**(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58) +
                          *(int *)(param_1 + 0xa00) * 0x49] + *(int *)(param_1 + 0x6fd0);
      }
    }
    *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) = *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) + 4;
  }
  if ((*(unsigned int *)(iVar13 + iVar14) & 4) != 0) goto LAB_82f15fc4;
  iVar12 = (int)param_2[0x17] >> 0x1c;
  if (iVar12 == *(int *)(param_1 + 0x860)) {
    uVar8 = 2;
LAB_82f15fb8:
    uVar9 = 2;
  }
  else {
    if (iVar12 != *(int *)(param_1 + 0x85c)) {
      if (iVar12 != 2) goto LAB_82f15fc4;
      uVar8 = 3;
      goto LAB_82f15fb8;
    }
    uVar9 = 1;
    uVar8 = 0;
  }
  fn_82F02410(uVar3,uVar8,uVar9);
LAB_82f15fc4:
  if ((*param_2 & 0x80000000) != 0) {
    return;
  }
  if ((*(unsigned int *)(iVar13 + iVar14) & 8) == 0) {
    if (bVar4 != 0) {
      return;
    }
    if ((*(unsigned int *)(iVar13 + iVar14) & 4) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x97c) != 0) {
      fn_82F15CE8(param_1,param_2[0x18]);
    }
  }
  else {
    if ((param_2[0x17] & 0xf0000000) == 0x20000000) {
      bVar1 = **(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58);
      puVar5 = (unsigned int *)((unsigned int)bVar1 * 8 + *(int *)(param_1 + 0x5150));
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar5,puVar5[1]);
      if (*(int *)(param_1 + 0x6f98) != 0) {
        iVar12 = (bVar1 + 0x1c01) * 4;
        *(int *)(param_1 + 0x6fcc) =
             *(int *)((unsigned int)bVar1 * 8 + *(int *)(param_1 + 0x5150) + 4) + *(int *)(param_1 + 0x6fcc)
        ;
        *(int *)(iVar12 + param_1) = *(int *)(iVar12 + param_1) + 1;
        *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
      }
      if ((bVar1 == 0x22) || (bVar1 == 0x47)) {
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                          *(unsigned short *)(iVar14 + *(int *)(param_1 + 0x1eb0)),
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa24) -
                          (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                          (*(int *)(iVar14 + *(int *)(param_1 + 0x1eb0)) << 0x10) >> 0x14,
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa28) -
                          (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
        if (*(int *)(param_1 + 0x6f98) != 0) {
          iVar12 = (*(int *)(param_1 + 0xa24) - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                   *(int *)(param_1 + 0x6fd4);
          *(int *)(param_1 + 0x6fd4) = iVar12;
          *(int *)(param_1 + 0x6fd4) =
               (iVar12 - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) + *(int *)(param_1 + 0xa28);
        }
      }
      else {
        puVar11 = *(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar11 >> 1 & 0x1ffff,
                          (&lbl_831AFCA0)[*(int *)(param_1 + 0xa00) * 0x49 + (unsigned int)*(unsigned char *)puVar11]
                         );
        if (*(int *)(param_1 + 0x6f98) != 0) {
          *(unsigned int *)(param_1 + 0x6fd0) =
               (unsigned int)(unsigned char)(&lbl_831AFCA0)
                           [(unsigned int)**(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58) +
                            *(int *)(param_1 + 0xa00) * 0x49] + *(int *)(param_1 + 0x6fd0);
        }
      }
      *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) = *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) + 4;
    }
    if (bVar4 != 0) {
      if (param_2[0x1d] != 0) {
        fn_82F02410(uVar3,param_2[7],1);
      }
      iVar12 = *(int *)(param_1 + 0x600);
      if (((*(int *)(param_1 + 0x648) == 0) || (*(int *)(param_1 + 0x61c) == 0)) ||
         (bVar7 = true, (*(unsigned int *)(iVar13 + iVar14) & 4) != 0)) {
        bVar7 = false;
      }
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                        *(unsigned int *)(*(int *)(param_1 + 0x5140) + (char)bVar4 * 4),
                        *(unsigned char *)(*(int *)(param_1 + 0x5144) + (int)(char)bVar4));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(unsigned int *)(param_1 + 0x6fbc) =
             (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x5144) + (int)(char)bVar4) +
             *(int *)(param_1 + 0x6fbc);
      }
      if (*(int *)(param_1 + 0x97c) != 0) {
        fn_82F15CE8(param_1,param_2[0x18]);
      }
      if (iVar12 != 0) {
        uVar6 = *param_2 >> 0x16 & 3;
        fn_82F02410(uVar3,(&lbl_831B8ED8)[uVar6],(&lbl_831B8EDC)[uVar6]);
      }
      if (!bVar7) {
        return;
      }
      uVar10 = (~(unsigned __int64)*param_2 & 0xffffffff) >> 0x19 & 8;
      puVar11 = param_2;
      for (iVar13 = 0;
          ((puVar11 = puVar11 + 1, *puVar11 == 0 ||
           (*(char *)((int)param_2 + iVar13 + 0x4a) != '\0')) && (iVar13 < 6)); iVar13 = iVar13 + 1)
      {
      }
      cVar2 = *(char *)((int)param_2 + iVar13 + 0x38);
      if (cVar2 == '\x01') {
        uVar10 = (__int64)*(char *)((int)param_2 + iVar13 + 0x80) + uVar10;
      }
      else if (cVar2 == '\x02') {
        uVar10 = (__int64)*(char *)((int)param_2 + iVar13 + 0x86) + uVar10 + 3;
      }
      else if (cVar2 == '\x04') {
        uVar10 = uVar10 + 7;
      }
      puVar5 = (unsigned int *)(*(int *)(param_1 + 0x7600) + (int)((uVar10 & 0xffffffff) << 3));
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar5,puVar5[1]);
      return;
    }
    if ((*(unsigned int *)(iVar13 + iVar14) & 4) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x97c) != 0) {
      fn_82F15CE8(param_1,param_2[0x18]);
      fn_82F02410(uVar3,param_2[7],1);
      return;
    }
  }
  fn_82F02410(uVar3,param_2[7],1);
  return;
}

