extern unsigned int *auStack_c0;
extern unsigned int *auStack_cc;
extern int fn_82E67700();
extern int fn_82E67B18();
extern int fn_82E68010();
extern int fn_82E68FB0();
extern int fn_82E69048();
extern int fn_82E69118();
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;


unsigned __int64
fn_82E68100(int *param_1,int *param_2,int param_3,int param_4,__int64 param_5,int *param_6,
             __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar6;
  __int64 lVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  short sVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iStack00000024;
  int iStack0000002c;
  __int64 lStack00000030;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  int in_stack_00000074;
  int *in_stack_0000007c;
  int in_stack_00000084;
  unsigned int in_stack_0000008c;
  unsigned int in_stack_00000094;
  unsigned int in_stack_0000009c;
  int in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  unsigned int auStack_cc [3];
  unsigned char auStack_c0 [16];
  
  iVar1 = *param_1;
  *param_6 = 0;
  uVar13 = 0;
  sVar9 = 0;
  uVar11 = 0;
  if (in_stack_0000007c != (int *)0x0) {
    *in_stack_0000007c = 0;
  }
  if (in_stack_000000ac != (unsigned int *)0x0) {
    *in_stack_000000ac = 0;
  }
  if ((param_1[10] == 1) || ((2 < *(int *)(iVar1 + 0x3c) && (*(int *)(iVar1 + 0x1b8) == 1))))
  goto LAB_82e68f7c;
  if ((param_3 != 0) &&
     ((((param_1[0x4270] == 0 || (-1 < param_5)) || (in_stack_000000a4 == 0)) ||
      (param_1[0x4271] == 0)))) {
    if (((in_stack_0000005c != 0) || (in_stack_0000006c != 0)) || (*(int *)(*param_1 + 0xd4) == 0))
    {
      param_2[0x10] = 0;
    }
    param_2[0x10] = in_stack_0000006c + param_2[0x10];
  }
  piVar6 = param_1 + 0x4270;
  iVar12 = (int)param_8;
  if (((*piVar6 == 0) || (-1 < param_5)) || ((in_stack_000000a4 == 0 || (param_1[0x4271] == 0)))) {
    param_2[0x10] = iVar12 + param_2[0x10];
  }
  if (((*(int *)(iVar1 + 0xb0) == 0) && (param_1[0x1d76] < param_2[0x10])) &&
     ((uVar13 = 0xffffffff8001000c, in_stack_000000a4 != 0 || ((*piVar6 != 0 && (param_5 < 0))))))
  goto LAB_82e68f7c;
  if (((param_1[0x41f1] == 1) && (param_4 != 0)) ||
     (((param_1[0x41f1] == 0 && (param_3 != 0)) &&
      (((in_stack_0000005c != 0 || (in_stack_0000006c != 0)) || ((param_1[6] != 0 && (iVar12 != 0)))
       ))))) {
    *(unsigned __int64 *)(param_2 + 0x16) =
         (unsigned __int64)(unsigned int)param_2[0x1b] * (unsigned __int64)in_stack_0000008c +
         *(__int64 *)(param_2 + 0x16);
  }
  if (((param_1[5] != 0) || (param_1[6] != 0)) &&
     (*(__int64 *)(param_2 + 0x18) < *(__int64 *)(param_2 + 0x16))) {
    *(__int64 *)(param_2 + 0x16) = *(__int64 *)(param_2 + 0x18);
  }
  if (((*(int *)(*param_1 + 0xd4) == 0) || (param_1[6] != 0)) && (param_3 != 0)) {
    uVar14 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc);
  }
  else {
    uVar7 = param_2[0x1a];
    if (uVar7 == 0) {
      uVar14 = 0;
    }
    else {
      uVar10 = (unsigned __int64)uVar7;
      uVar3 = (unsigned __int64)(uVar7 >> 1) + *(__int64 *)(param_2 + 0x16);
      trapDoubleWordImmediate(6,uVar10,0);
      uVar14 = (unsigned __int64)(int)((__int64)uVar3 / (__int64)uVar10);
      trapDoubleWordImmediate(5,uVar10 & ~((uVar3 * 2 | uVar3 >> 0x3f) - 1),0xffff);
    }
  }
  lVar5 = *(__int64 *)(param_2 + 0x16) - (__int64)iVar12 * (unsigned __int64)(unsigned int)param_2[0x1a];
  *(__int64 *)(param_2 + 0x16) = lVar5;
  uVar10 = param_8;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  lStack00000030 = param_5;
  if (param_3 != 0) {
    *(unsigned __int64 *)(param_2 + 0x16) =
         lVar5 - (__int64)(int)in_stack_0000006c * (unsigned __int64)(unsigned int)param_2[0x1a];
    if ((param_2[9] == param_2[0x1d]) &&
       (((in_stack_0000005c != 0 || (in_stack_0000006c != 0)) || (*(int *)(iVar1 + 0xd4) != 1)))) {
      auStack_cc[0] = 0;
      uVar13 = fn_82E67700(param_1,param_2,1,auStack_cc,in_stack_000000a4,param_5);
      if ((int)uVar13 < 0) goto LAB_82e68f7c;
    }
    if (0 < iVar12) {
      fn_82E67B18(param_1,param_2,in_stack_0000009c,in_stack_000000a4);
    }
    uVar10 = param_8 + in_stack_0000006c;
    if (param_2[0x21] == 1) {
      uVar10 = uVar10 + in_stack_0000005c;
      sVar9 = -2;
    }
    else {
      sVar9 = -1;
    }
    if (param_2[0x23] == 0) {
      if (iVar12 != 0) {
        param_2[0x24] = param_2[0x24] + in_stack_0000008c;
      }
    }
    else {
      param_2[0x23] = 0;
      *(unsigned __int64 *)(param_2 + 0x26) = (unsigned __int64)in_stack_0000008c + *(__int64 *)(param_2 + 0x26);
    }
    if (in_stack_000000a4 != 0) {
      *(int *)param_2[0x1e] = *(int *)param_2[0x1e] + in_stack_0000008c;
      *(unsigned int *)param_2[0x1f] = in_stack_00000094;
    }
  }
  if ((((param_1[5] == 0) && (in_stack_00000084 < 0)) && ((__int64)(uVar14 - uVar10) < 0)) &&
     (uVar13 = 0xffffffff80040003, in_stack_000000a4 == 0)) goto LAB_82e68f7c;
  if (0 < (int)uVar10) {
    do {
      uVar7 = param_2[0x1d];
      uVar8 = *(unsigned int *)(iVar1 + 0xc);
      uVar3 = ((((unsigned __int64)uVar7 & 0x1fffffff) * 8 +
               ((unsigned __int64)(unsigned int)param_2[9] & 0x1fffffff) * -8) - (unsigned __int64)(unsigned int)param_2[0x12]) +
              (unsigned __int64)uVar8;
      iVar2 = (int)uVar10;
      uVar14 = uVar10;
      if ((int)uVar3 <= iVar2) {
        uVar14 = uVar3;
      }
      if (((int)uVar8 >> 3) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 7) != 0) + uVar7 <= (unsigned int)param_2[9]
         ) {
        if (in_stack_00000084 < 0) {
          if ((param_2[0x22] == 0) &&
             (auStack_cc[0] = uVar8,
             uVar13 = fn_82E67700(param_1,param_2,0,auStack_cc,in_stack_000000a4,lStack00000030)
             , (int)uVar13 < 0)) goto LAB_82e68f7c;
          if (((in_stack_00000084 == -1) && ((iVar12 == 0 && (in_stack_0000006c != 0)))) &&
             ((in_stack_0000008c == 0 &&
              ((in_stack_000000a4 == 0 && (iVar2 < (int)in_stack_0000006c)))))) {
            param_2[0x23] = 1;
          }
          uVar7 = *(unsigned int *)(iVar1 + 0xc);
          param_2[0x22] = 0;
          param_2[0x1e] = param_2[0x1e] + 4;
          param_2[0x1d] =
               ((int)uVar7 >> 3) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 7) != 0) + param_2[0x1d];
          param_2[0x1f] = param_2[0x1f] + 4;
          *(__int64 *)(param_2 + 0x26) = (__int64)param_2[0x24] + *(__int64 *)(param_2 + 0x26);
          param_2[0x24] = 0;
          *(unsigned char *)((int)param_2 + 0x81) = 0;
        }
        else {
          uVar8 = *(unsigned int *)(iVar1 + 0xc);
          auStack_cc[0] = iVar2 + in_stack_00000084;
          param_2[0x22] = 0;
          *(__int64 *)(param_2 + 0x26) = (__int64)param_2[0x24] + *(__int64 *)(param_2 + 0x26);
          param_2[0x1d] = ((int)uVar8 >> 3) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 7) != 0) + uVar7;
          param_2[0x1e] = param_2[0x1e] + 4;
          param_2[0x1f] = param_2[0x1f] + 4;
          param_2[0x24] = 0;
          *(unsigned char *)((int)param_2 + 0x81) = 0;
          uVar13 = fn_82E67700(param_1,param_2,0,auStack_cc,in_stack_000000a4,lStack00000030);
          if ((int)uVar13 < 0) goto LAB_82e68f7c;
        }
        uVar8 = *(unsigned int *)(iVar1 + 0xc);
        uVar14 = ((((unsigned __int64)(unsigned int)param_2[0x1d] & 0x1fffffff) * 8 +
                  ((unsigned __int64)(unsigned int)param_2[9] & 0x1fffffff) * -8) - (unsigned __int64)(unsigned int)param_2[0x12])
                 + (unsigned __int64)uVar8;
        if (iVar2 <= (int)uVar14) {
          uVar14 = uVar10;
        }
      }
      iVar4 = (int)uVar11;
      iVar2 = (int)uVar14;
      if (sVar9 == -2) {
        if (iVar4 == 0) {
          uVar11 = (unsigned __int64)in_stack_0000005c;
        }
        iVar4 = (int)uVar11;
        uVar7 = in_stack_0000005c - iVar4;
        uVar14 = uVar11;
        if (iVar2 < iVar4) {
          uVar8 = iVar2 + 7;
          uVar14 = ((__int64)((int)uVar8 >> 3) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 7) != 0) &
                   0x1fffffff) << 3;
          if (iVar4 < (int)uVar14) {
            uVar14 = uVar11;
          }
        }
        uVar13 = fn_82E68010(param_1,param_2,
                               (__int64)((int)uVar7 >> 3) +
                               (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 7) != 0) +
                               (unsigned __int64)in_stack_00000054,uVar14,in_stack_000000a4);
        if ((int)uVar13 < 0) goto LAB_82e68f7c;
        uVar11 = uVar11 - uVar14;
        uVar10 = uVar10 - uVar14;
        *(unsigned __int64 *)(param_2 + 0x16) =
             *(__int64 *)(param_2 + 0x16) -
             (unsigned __int64)(unsigned int)param_2[0x1a] * (__int64)(int)in_stack_0000005c;
        *param_6 = *param_6 + (unsigned int)uVar14;
        if ((uVar11 == 0) && (sVar9 = -1, (unsigned int)uVar14 == in_stack_0000005c)) {
          param_2[0x21] = 0;
        }
      }
      else if (sVar9 == -1) {
        if (iVar4 == 0) {
          uVar11 = (unsigned __int64)in_stack_0000006c;
        }
        iVar4 = (int)(in_stack_0000006c - uVar11);
        lVar5 = (__int64)(iVar4 >> 3) +
                (unsigned __int64)(iVar4 < 0 && (in_stack_0000006c - uVar11 & 7) != 0);
        uVar14 = uVar11;
        if (iVar2 < (int)uVar11) {
          uVar7 = iVar2 + 7;
          uVar14 = ((__int64)((int)uVar7 >> 3) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 7) != 0) &
                   0x1fffffff) << 3;
          if ((int)uVar11 < (int)uVar14) {
            uVar14 = uVar11;
          }
        }
        if ((*piVar6 == 0) || (param_1[0x4271] == 0)) {
          iVar2 = param_1[0x41fd];
        }
        else {
          iVar2 = param_2[0x10];
        }
        if ((((*(int *)(iVar1 + 600) != 0) && (in_stack_000000a4 != 0)) && ((int)lVar5 == 0)) &&
           (iVar2 < (int)uVar8)) {
          fn_82E69118(auStack_c0,(unsigned __int64)in_stack_00000064,0);
          fn_82E68FB0(auStack_c0,iVar2,*(unsigned int *)(iVar1 + 0x268));
          fn_82E69048(auStack_c0);
        }
        uVar13 = fn_82E68010(param_1,param_2,lVar5 + (unsigned __int64)in_stack_00000064,uVar14,
                               in_stack_000000a4);
        if ((int)uVar13 < 0) goto LAB_82e68f7c;
        uVar11 = uVar11 - uVar14;
        uVar10 = uVar10 - uVar14;
        *param_6 = *param_6 + (int)uVar14;
        if (uVar11 == 0) {
          sVar9 = 0;
        }
      }
      else {
        if (iVar4 == 0) {
          uVar11 = param_8;
        }
        iVar4 = (int)uVar11;
        uVar7 = iVar12 - iVar4;
        uVar14 = uVar11;
        if (iVar2 < iVar4) {
          uVar8 = iVar2 + 7;
          uVar14 = ((__int64)((int)uVar8 >> 3) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 7) != 0) &
                   0x1fffffff) << 3;
          if (iVar4 < (int)uVar14) {
            uVar14 = uVar11;
          }
        }
        uVar13 = fn_82E68010(param_1,param_2,
                               (__int64)((int)uVar7 >> 3) +
                               (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 7) != 0) + param_7,uVar14,
                               in_stack_000000a4);
        if ((int)uVar13 < 0) goto LAB_82e68f7c;
        uVar11 = uVar11 - uVar14;
        uVar10 = uVar10 - uVar14;
        *param_6 = *param_6 + (int)uVar14;
      }
      param_4 = iStack0000002c;
    } while (0 < (int)uVar10);
  }
  if (param_4 != 0) {
    iVar12 = param_1[5];
    if (iVar12 == 0) {
LAB_82e68960:
      if ((*piVar6 == 0) && (0x10 < param_1[0x1d8a])) {
        iVar12 = param_1[0x1d8a] + -8;
      }
      else {
LAB_82e68988:
        if (((iVar12 != 0) || (*piVar6 != 0)) ||
           (iVar12 = param_1[0x1d8a] + -4, param_1[0x1d8a] < 9)) {
          iVar12 = param_1[0x1d8a];
        }
      }
    }
    else {
      if (param_1[7] != 0) {
        if (iVar12 == 0) goto LAB_82e68960;
        goto LAB_82e68988;
      }
      iVar12 = param_1[0x1d8a];
      if (2 < iVar12) {
        iVar12 = 2;
      }
    }
    if (param_2[0x22] == 0) {
      auStack_cc[0] = 0;
      uVar13 = fn_82E67700(param_1,param_2,1,auStack_cc,in_stack_000000a4,lStack00000030);
      if ((int)uVar13 < 0) goto LAB_82e68f7c;
    }
    uVar7 = *(unsigned int *)(iVar1 + 0xc);
    lVar5 = (((unsigned __int64)(unsigned int)param_2[9] - (unsigned __int64)(unsigned int)param_2[0x1d] & 0x1fffffff) * 8 -
            (unsigned __int64)uVar7) + (unsigned __int64)(unsigned int)param_2[0x12];
    if (-1 < lVar5) {
      iVar2 = param_2[0x24];
      param_2[0x22] = 0;
      param_2[0x24] = 0;
      param_2[0x1e] = param_2[0x1e] + 4;
      param_2[0x1d] = ((int)uVar7 >> 3) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 7) != 0) + param_2[0x1d]
      ;
      param_2[0x1f] = param_2[0x1f] + 4;
      *(__int64 *)(param_2 + 0x26) = (__int64)iVar2 + *(__int64 *)(param_2 + 0x26);
      *(unsigned char *)((int)param_2 + 0x81) = 0;
      if (0 < (int)lVar5) {
        auStack_cc[0] = 0;
        uVar13 = fn_82E67700(param_1,param_2,1,auStack_cc,in_stack_000000a4,lStack00000030);
        if ((int)uVar13 < 0) goto LAB_82e68f7c;
      }
    }
    iVar2 = (param_2[9] - param_2[0x1d]) * 8 + param_2[0x12];
    lVar5 = ((((unsigned __int64)(unsigned int)param_2[0x1d] & 0x1fffffff) * 8 +
             ((unsigned __int64)(unsigned int)param_2[9] & 0x1fffffff) * -8) - (unsigned __int64)(unsigned int)param_2[0x12]) +
            (unsigned __int64)*(unsigned int *)(iVar1 + 0xc);
    if ((((__int64)((__int64)(int)*(unsigned int *)(iVar1 + 0xc) * (unsigned __int64)(unsigned int)param_2[0x1a]) <
          (__int64)
          (((((__int64)(*(int *)(iVar1 + 0x104) + *(int *)(iVar1 + 0x100)) *
              (__int64)param_2[0x1b] & 0xffffffffU) +
            ((__int64)iVar2 + -1) * (unsigned __int64)(unsigned int)param_2[0x1a]) - *(__int64 *)(param_2 + 0x18)
           ) + *(__int64 *)(param_2 + 0x16))) && (param_1[5] == 0)) ||
       ((*(int *)(iVar1 + 0xd4) != 0 &&
        ((*(char *)((int)param_2 + 0x81) == *(char *)(param_1 + 0x1d70) &&
         (iVar2 < *(int *)(iVar1 + 0xc))))))) {
      if ((((*(int *)(iVar1 + 0x3c) < 3) &&
           ((8 << (*(unsigned int *)(iVar1 + 8) & 0x3f)) + -8 < param_2[0x10])) &&
          ((uVar13 = 0xffffffff8001000c, in_stack_000000a4 != 0 ||
           ((*piVar6 != 0 && (lStack00000030 < 0)))))) ||
         (uVar13 = fn_82E68010(param_1,param_2,0,lVar5,in_stack_000000a4), (int)uVar13 < 0))
      goto LAB_82e68f7c;
      iVar2 = param_2[0x24];
      *(unsigned __int64 *)(param_2 + 0x16) =
           *(__int64 *)(param_2 + 0x16) - (unsigned __int64)(unsigned int)param_2[0x1a] * (__int64)(int)lVar5;
      uVar7 = *(unsigned int *)(iVar1 + 0xc);
      param_2[0x1f] = param_2[0x1f] + 4;
      param_2[0x22] = 0;
      param_2[0x24] = 0;
      *(__int64 *)(param_2 + 0x26) = (__int64)iVar2 + *(__int64 *)(param_2 + 0x26);
      param_2[0x1e] = param_2[0x1e] + 4;
      *(unsigned char *)((int)param_2 + 0x81) = 0;
      param_2[0x1d] = ((int)uVar7 >> 3) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 7) != 0) + param_2[0x1d]
      ;
    }
    if (in_stack_000000a4 == 0) {
      if (in_stack_0000007c != (int *)0x0) {
        uVar7 = *(unsigned int *)(iVar1 + 0xc);
        uVar8 = param_2[0x11];
        uVar11 = (__int64)((int)uVar7 >> 3) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 7) != 0);
        trapWord(6,uVar11,0);
        trapWord(5,uVar11 & ~((((unsigned __int64)uVar8 & 0x7fffffff) << 1 | (unsigned __int64)(uVar8 >> 0x1f)) -
                             1),0xffff);
        *in_stack_0000007c = ((int)uVar8 / (int)uVar11) * uVar7 + *in_stack_0000007c;
      }
      uVar7 = *(unsigned int *)(iVar1 + 0xc);
      uVar8 = param_2[0x11];
      iVar2 = *param_2;
      uVar11 = (__int64)((int)uVar7 >> 3) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 7) != 0);
      param_2[0x1e] = param_2[1];
      param_2[0x1d] = iVar2;
      param_2[6] = iVar2;
      param_2[0x1f] = param_2[2];
      iVar4 = uVar8 - ((int)uVar8 / (int)uVar11) * (int)uVar11;
      trapWord(5,uVar11 & ~((((unsigned __int64)uVar8 & 0x7fffffff) << 1 | (unsigned __int64)(uVar8 >> 0x1f)) - 1)
               ,0xffff);
      param_2[0x11] = iVar4;
      trapWord(6,uVar11,0);
      param_2[9] = iVar4 + iVar2;
    }
    if (in_stack_00000074 == 0) {
      if ((*piVar6 == 0) && (param_1[7] == 0)) {
        uVar11 = (__int64)(int)(unsigned int)*(unsigned short *)(iVar1 + 0x22) * (__int64)*(int *)(iVar1 + 0x58);
        trapWord(6,uVar11,0);
        uVar14 = (unsigned __int64)*(int *)(iVar1 + 0x100);
        uVar11 = (unsigned __int64)(unsigned int)param_1[0x1dd1] / (uVar11 & 0xffffffff) +
                 *(__int64 *)(param_1 + 0x1d4e);
        trapDoubleWordImmediate(6,uVar14,0);
        trapDoubleWordImmediate(5,uVar14 & ~((uVar11 * 2 | uVar11 >> 0x3f) - 1),0xffff);
        if (((int)((unsigned int)*(unsigned short *)(param_1 + 0x4234) * *(int *)(iVar1 + 0x100)) + lStack00000030
             == ((__int64)uVar11 / (__int64)uVar14 - (__int64)iVar12) * uVar14) &&
           (((param_1[0x1d52] == 0 && (*(int *)(iVar1 + 0xd4) != 0)) &&
            (*(__int64 *)(param_2 + 0x26) <=
             *(__int64 *)(param_1 + 0x1d4e) - (__int64)param_1[0x1d50])))) goto LAB_82e68d98;
      }
    }
    else {
LAB_82e68d98:
      uVar7 = *(unsigned int *)(iVar1 + 0xc);
      uVar14 = (unsigned __int64)uVar7;
      uVar11 = ((unsigned __int64)(unsigned int)param_2[0x11] & 0x1fffffff) * 8 + (unsigned __int64)(unsigned int)param_2[0x12];
      trapWord(6,uVar14,0);
      lVar5 = uVar14 - (uVar11 - (__int64)((int)uVar11 / (int)uVar7) * (__int64)(int)uVar7);
      trapWord(5,uVar14 & ~(((uVar11 & 0x7fffffff) << 1 | (uVar11 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      iVar12 = (int)lVar5;
      if ((in_stack_000000ac != (unsigned int *)0x0) && (0 < iVar12)) {
        *in_stack_000000ac = 1;
      }
      if ((((*(int *)(iVar1 + 0x3c) < 3) &&
           ((8 << (*(unsigned int *)(iVar1 + 8) & 0x3f)) + -8 < param_2[0x10])) &&
          ((uVar13 = 0xffffffff8001000c, in_stack_000000a4 != 0 ||
           ((*piVar6 != 0 && (lStack00000030 < 0)))))) ||
         (uVar13 = fn_82E68010(param_1,param_2,0,lVar5,in_stack_000000a4), (int)uVar13 < 0))
      goto LAB_82e68f7c;
      iVar2 = param_2[0x24];
      *(unsigned __int64 *)(param_2 + 0x16) =
           *(__int64 *)(param_2 + 0x16) - (unsigned __int64)(unsigned int)param_2[0x1a] * (__int64)iVar12;
      uVar7 = *(unsigned int *)(iVar1 + 0xc);
      param_2[0x1e] = param_2[0x1e] + 4;
      param_2[0x22] = 0;
      param_2[0x24] = 0;
      param_2[0x1f] = param_2[0x1f] + 4;
      param_2[0x1d] = ((int)uVar7 >> 3) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 7) != 0) + param_2[0x1d]
      ;
      *(__int64 *)(param_2 + 0x26) = (__int64)iVar2 + *(__int64 *)(param_2 + 0x26);
      *(unsigned char *)((int)param_2 + 0x81) = 0;
    }
  }
  if (param_1[5] == 0) {
    uVar7 = param_2[0x1a];
    if (uVar7 == 0) {
      lVar5 = 0;
    }
    else {
      uVar11 = (unsigned __int64)uVar7;
      uVar14 = (unsigned __int64)(uVar7 >> 1) + *(__int64 *)(param_2 + 0x16);
      trapDoubleWordImmediate(6,uVar11,0);
      lVar5 = (__int64)(int)((__int64)uVar14 / (__int64)uVar11);
      trapDoubleWordImmediate(5,uVar11 & ~((uVar14 * 2 | uVar14 >> 0x3f) - 1),0xffff);
    }
    if ((param_1[6] != 0) &&
       ((iStack0000002c != 0 ||
        (((iStack00000024 != 0 && (in_stack_0000005c == 0)) && (in_stack_0000006c == 0)))))) {
      lVar5 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc) + lVar5;
    }
    if (((in_stack_00000084 < 0) || (iStack0000002c != 0)) && ((__int64)(lVar5 - uVar10) < 0)) {
      uVar13 = 0xffffffff80040003;
    }
  }
LAB_82e68f7c:
  if ((param_1[5] != 0) && (param_1[9] == 0)) {
    *(unsigned __int64 *)(param_2 + 0x16) = *(unsigned __int64 *)(param_2 + 0x18);
  }
  return uVar13;
}

