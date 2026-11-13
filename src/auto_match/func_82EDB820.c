typedef unsigned char bool;
extern int fn_82F68CC0();


void fn_82EDB820(unsigned __int64 param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned int param_5,unsigned __int64 param_6,unsigned int param_7,unsigned __int64 param_8)

{
  int iVar2;
  __int64 lVar1;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  unsigned int uVar7;
  __int64 lVar6;
  int iVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar14;
  __int64 lVar13;
  unsigned int uVar15;
  unsigned int uVar17;
  __int64 lVar16;
  unsigned int uVar18;
  __int64 lVar19;
  __int64 lVar20;
  __int64 lVar21;
  bool bVar22;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000074;
  unsigned int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  
  if ((in_stack_0000008c != 0) || ((in_stack_0000007c != 0 && (in_stack_0000007c != 3)))) {
    param_5 = (param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f);
  }
  if ((in_stack_00000094 != 0) || ((in_stack_0000007c != 0 && (in_stack_0000007c != 3)))) {
    param_7 = (param_7 ^ (int)param_7 >> 0x1f) - ((int)param_7 >> 0x1f);
  }
  iVar2 = 0;
  iVar8 = 0;
  uVar15 = (unsigned int)param_4;
  uVar11 = (unsigned int)param_6;
  iVar5 = (int)param_8;
  if (in_stack_0000007c < 0x5031345a) {
    if (in_stack_0000007c == 0x50313459) goto LAB_82edbc08;
    if (0x32315659 < in_stack_0000007c) {
      if (in_stack_0000007c == 0x32595559) goto LAB_82edbc08;
      if (in_stack_0000007c != 0x39555659) {
        uVar18 = 0x41595556;
        goto LAB_82edbab0;
      }
      iVar8 = 0x11;
      lVar21 = (__int64)((int)uVar15 >> 2) + (unsigned __int64)((int)uVar15 < 0 && (param_4 & 3) != 0);
      lVar20 = (__int64)((int)uVar11 >> 2) + (unsigned __int64)((int)uVar11 < 0 && (param_6 & 3) != 0);
      lVar10 = (__int64)((int)in_stack_0000006c >> 2) +
               (unsigned __int64)((int)in_stack_0000006c < 0 && (in_stack_0000006c & 3) != 0);
      uVar9 = (__int64)((int)in_stack_00000074 >> 2) +
              (unsigned __int64)((int)in_stack_00000074 < 0 && (in_stack_00000074 & 3) != 0);
      lVar3 = (__int64)(iVar5 >> 2) + (unsigned __int64)(iVar5 < 0 && (param_8 & 3) != 0);
      lVar1 = (__int64)((int)in_stack_0000005c >> 2) +
              (unsigned __int64)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 3) != 0);
      uVar18 = ((int)in_stack_00000054 >> 2) +
               (unsigned int)((int)in_stack_00000054 < 0 && (in_stack_00000054 & 3) != 0);
      bVar22 = (int)in_stack_00000064 < 0 && (in_stack_00000064 & 3) != 0;
      iVar2 = (int)in_stack_00000064 >> 2;
LAB_82edb92c:
      uVar17 = iVar2 + (unsigned int)bVar22;
LAB_82edb930:
      uVar12 = (unsigned __int64)in_stack_00000074;
      uVar14 = iVar8 * (int)((__int64)(int)uVar15 * (__int64)(int)param_5);
      uVar7 = iVar8 * (int)((__int64)(int)uVar11 * (__int64)(int)param_7);
      lVar4 = (__int64)(int)uVar18 * (__int64)(int)lVar21;
      lVar6 = (__int64)(int)uVar17 * (__int64)(int)lVar20;
      lVar16 = (__int64)(int)uVar15 * (__int64)(int)in_stack_00000054 + param_3 + param_8;
      lVar13 = (__int64)(int)uVar11 * (__int64)(int)in_stack_00000064 + param_2 +
               (unsigned __int64)in_stack_0000005c;
      lVar19 = lVar4 + (__int64)(int)uVar15 * (__int64)(int)param_5 + lVar3 + param_3;
      param_3 = (__int64)((int)uVar14 >> 4) + (unsigned __int64)((int)uVar14 < 0 && (uVar14 & 0xf) != 0) +
                lVar4 + lVar3 + param_3;
      lVar4 = lVar6 + (__int64)(int)uVar11 * (__int64)(int)param_7 + lVar1 + param_2;
      param_2 = (__int64)((int)uVar7 >> 4) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) +
                lVar6 + lVar1 + param_2;
      lVar1 = param_2;
      lVar3 = param_3;
      if (in_stack_0000007c == 0x32315659) {
        lVar1 = lVar4;
        lVar3 = lVar19;
        lVar19 = param_3;
        lVar4 = param_2;
      }
      if (0 < (int)in_stack_00000074) {
        do {
          fn_82F68CC0(lVar13,lVar16,in_stack_0000006c);
          uVar12 = uVar12 - 1;
          lVar16 = lVar16 + param_4;
          lVar13 = lVar13 + param_6;
        } while (uVar12 != 0);
      }
      if (0 < (int)uVar9) {
        do {
          fn_82F68CC0(lVar4,lVar19,lVar10);
          lVar19 = lVar21 + lVar19;
          lVar4 = lVar20 + lVar4;
          fn_82F68CC0(lVar1,lVar3,lVar10);
          uVar9 = uVar9 - 1;
          lVar3 = lVar21 + lVar3;
          lVar1 = lVar20 + lVar1;
        } while (uVar9 != 0);
      }
      return;
    }
    if (in_stack_0000007c == 0x32315659) {
LAB_82edb8d8:
      iVar8 = 0x14;
      lVar21 = (__int64)((int)uVar15 >> 1) + (unsigned __int64)((int)uVar15 < 0 && (param_4 & 1) != 0);
      lVar20 = (__int64)((int)uVar11 >> 1) + (unsigned __int64)((int)uVar11 < 0 && (param_6 & 1) != 0);
      lVar10 = (__int64)((int)in_stack_0000006c >> 1) +
               (unsigned __int64)((int)in_stack_0000006c < 0 && (in_stack_0000006c & 1) != 0);
      uVar9 = (__int64)((int)in_stack_00000074 >> 1) +
              (unsigned __int64)((int)in_stack_00000074 < 0 && (in_stack_00000074 & 1) != 0);
      lVar3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_8 & 1) != 0);
      lVar1 = (__int64)((int)in_stack_0000005c >> 1) +
              (unsigned __int64)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 1) != 0);
      uVar18 = ((int)in_stack_00000054 >> 1) +
               (unsigned int)((int)in_stack_00000054 < 0 && (in_stack_00000054 & 1) != 0);
      bVar22 = (int)in_stack_00000064 < 0 && (in_stack_00000064 & 1) != 0;
      iVar2 = (int)in_stack_00000064 >> 1;
      goto LAB_82edb92c;
    }
    if ((in_stack_0000007c != 0) && (in_stack_0000007c != 3)) {
      if (in_stack_0000007c != 0x30323449) goto LAB_82edbab8;
      goto LAB_82edb8d8;
    }
    if (in_stack_0000008c == 0) {
      iVar2 = -1;
      if ((int)param_5 < 1) goto LAB_82edba5c;
    }
    else if ((int)uVar15 < 1) {
      iVar2 = -1;
    }
    else {
LAB_82edba5c:
      iVar2 = 1;
    }
    if (in_stack_00000094 != 0) {
      if (0 < (int)uVar11) goto LAB_82edba70;
      goto LAB_82edba80;
    }
    if (0 < (int)param_7) goto LAB_82edba80;
  }
  else {
    if (in_stack_0000007c < 0x5559565a) {
      if (in_stack_0000007c != 0x55595659) {
        if (in_stack_0000007c == 0x50343232) {
          iVar8 = 0x18;
          lVar21 = (__int64)((int)uVar15 >> 1) + (unsigned __int64)((int)uVar15 < 0 && (param_4 & 1) != 0)
          ;
          uVar9 = (unsigned __int64)in_stack_00000074;
          lVar20 = (__int64)((int)uVar11 >> 1) + (unsigned __int64)((int)uVar11 < 0 && (param_6 & 1) != 0)
          ;
          lVar10 = (__int64)((int)in_stack_0000006c >> 1) +
                   (unsigned __int64)((int)in_stack_0000006c < 0 && (in_stack_0000006c & 1) != 0);
          lVar3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_8 & 1) != 0);
          lVar1 = (__int64)((int)in_stack_0000005c >> 1) +
                  (unsigned __int64)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 1) != 0);
          uVar18 = in_stack_00000054;
          uVar17 = in_stack_00000064;
          goto LAB_82edb930;
        }
        if (in_stack_0000007c != 0x54313459) {
          uVar18 = 0x54323459;
          goto LAB_82edbab0;
        }
      }
    }
    else if (in_stack_0000007c != 0x56323136) {
      if (in_stack_0000007c == 0x56555949) goto LAB_82edb8d8;
      uVar18 = 0x59565955;
LAB_82edbab0:
      if (in_stack_0000007c != uVar18) goto LAB_82edbab8;
    }
LAB_82edbc08:
    if ((in_stack_0000008c == 0) || (iVar2 = -1, 0 < (int)uVar15)) {
      iVar2 = 1;
    }
    if (in_stack_00000094 != 0) {
      if (0 < (int)uVar11) {
        iVar8 = 1;
        goto LAB_82edbab8;
      }
LAB_82edba80:
      iVar8 = -1;
      goto LAB_82edbab8;
    }
  }
LAB_82edba70:
  iVar8 = 1;
LAB_82edbab8:
  lVar1 = (__int64)
          ((int)(((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f)) * in_stack_00000084 + 0x1f
                & 0xffffffe0) >> 3) * (__int64)iVar2;
  uVar15 = (unsigned int)lVar1;
  if (in_stack_0000008c == 0) {
    if (iVar2 == 1) {
      lVar3 = (__int64)(int)uVar15 * (__int64)(int)in_stack_00000054;
    }
    else {
      lVar3 = (__int64)
              (int)(((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) +
                   (-1 - in_stack_00000054)) *
              (__int64)(int)((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f));
    }
  }
  else {
    lVar3 = (__int64)(int)uVar15 * (__int64)(int)in_stack_00000054;
  }
  lVar10 = (__int64)
           ((int)(((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) * in_stack_00000084 +
                  0x1f & 0xffffffe0) >> 3) * (__int64)iVar8;
  uVar11 = (unsigned int)lVar10;
  if (in_stack_00000094 == 0) {
    if (iVar8 == 1) {
      lVar20 = (__int64)(int)uVar11 * (__int64)(int)in_stack_00000064;
    }
    else {
      lVar20 = (__int64)
               (int)(((param_7 ^ (int)param_7 >> 0x1f) - ((int)param_7 >> 0x1f)) +
                    (-1 - in_stack_00000064)) *
               (__int64)(int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f));
    }
  }
  else {
    lVar20 = (__int64)(int)uVar11 * (__int64)(int)in_stack_00000064;
  }
  param_3 = (iVar5 * in_stack_00000084 >> 3) + lVar3 + param_3;
  uVar9 = (unsigned __int64)in_stack_00000074;
  param_2 = ((int)(in_stack_0000005c * in_stack_00000084) >> 3) + lVar20 + param_2;
  if ((int)in_stack_00000074 < 1) {
    return;
  }
  do {
    fn_82F68CC0(param_2,param_3,
                  (int)(in_stack_0000006c * in_stack_00000084 + 0x1f & 0xffffffe0) >> 3);
    uVar9 = uVar9 - 1;
    param_3 = lVar1 + param_3;
    param_2 = lVar10 + param_2;
  } while (uVar9 != 0);
  return;
}

