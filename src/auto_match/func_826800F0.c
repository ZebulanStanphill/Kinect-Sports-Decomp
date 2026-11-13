unsigned __int64 fn_826800F0(int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar8;
  int iVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar1 >> 0x10;
  if ((uVar3 & 0x200) != 0) {
    param_1[2] = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
  }
  uVar2 = param_2[2];
  if ((uVar3 & 0x400) != 0) {
    param_1[1] = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
  }
  uVar2 = param_2[3];
  uVar4 = ((unsigned __int64)uVar3 & 0x800) >> 8;
  uVar6 = ((unsigned __int64)(uVar2 >> 0x10) | (unsigned __int64)uVar2 & 0xffffffffffff0000) >> 8 & 0xffff |
          ((((unsigned __int64)uVar2 & 0xffff) << 0x10 | (unsigned __int64)uVar2 & 0xffffffff0000ffff) & 0xffff00)
          << 8;
  iVar7 = (int)uVar6;
  if (uVar4 == 0) {
    if ((uVar1 & 0x800) != 0) {
      trapWord(6,(unsigned __int64)(unsigned int)param_1[2],0);
      iVar7 = (int)(uVar6 / (unsigned int)param_1[2] << 2);
      goto LAB_826801bc;
    }
  }
  else {
LAB_826801bc:
    param_1[3] = iVar7;
  }
  uVar2 = param_2[5];
  if ((uVar1 & 0x200) != 0) {
    param_1[6] = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
  }
  if ((uVar1 & 0x100000) == 0) {
    puVar8 = param_2 + 0x19;
LAB_82680440:
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = puVar8 + 5;
    }
    uVar5 = 1;
  }
  else {
    uVar1 = param_2[0x11];
    if ((((unsigned __int64)(uVar1 >> 0x10) | (unsigned __int64)uVar1 & 0xffffffffffff0000) >> 8 & 0xffff |
        ((((unsigned __int64)uVar1 & 0xffff) << 0x10 | (unsigned __int64)uVar1 & 0xffffffff0000ffff) & 0xffff00)
        << 8) == 0x20) {
      uVar1 = param_2[0x13];
      uVar2 = param_2[0x12] >> 0x18;
      puVar8 = param_2 + 0x14;
      uVar6 = ((unsigned __int64)(uVar1 >> 0x10) | (unsigned __int64)uVar1 & 0xffffffffffff0000) >> 8 & 0xffff |
              ((((unsigned __int64)uVar1 & 0xffff) << 0x10 | (unsigned __int64)uVar1 & 0xffffffff0000ffff) &
              0xffff00) << 8;
      if ((uVar2 & 4) == 0) {
        if (((uVar2 & 0x40) != 0) || ((uVar2 & 2) != 0)) {
          uVar1 = *puVar8;
          uVar6 = ((unsigned __int64)(uVar1 >> 0x10) | (unsigned __int64)uVar1 & 0xffffffffffff0000) >> 8 & 0xffff
                  | ((((unsigned __int64)uVar1 & 0xffff) << 0x10 | (unsigned __int64)uVar1 & 0xffffffff0000ffff) &
                    0xffff00) << 8;
          if (param_4 != (unsigned int *)0x0) {
            *param_4 = (unsigned int)uVar6;
          }
          if (uVar6 == 8) {
            if ((uVar2 & 2) != 0) {
              iVar7 = 9;
              goto LAB_82680344;
            }
          }
          else if (uVar6 == 0x18) {
            iVar7 = 2;
LAB_82680344:
            *param_1 = iVar7;
          }
          else if (uVar6 == 0x20) {
            *param_1 = 1;
          }
          if (uVar4 == 0) {
            param_1[3] = ((unsigned int)uVar6 >> 3) * param_1[1];
          }
          uVar1 = param_2[0x15];
          if (param_4 != (unsigned int *)0x0) {
            param_4[1] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
          }
          uVar1 = param_2[0x16];
          if (param_4 != (unsigned int *)0x0) {
            param_4[2] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
          }
          uVar1 = param_2[0x17];
          if (param_4 != (unsigned int *)0x0) {
            param_4[3] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
          }
          uVar1 = param_2[0x18];
          puVar8 = param_2 + 0x19;
          if ((param_4 != (unsigned int *)0x0) && ((uVar2 & 1) != 0)) {
            *(unsigned char *)(param_4 + 5) = 1;
            param_4[4] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
          }
        }
      }
      else {
        if (uVar6 == 0x35545844) {
          iVar7 = 0xc;
LAB_826802c0:
          *param_1 = iVar7;
        }
        else {
          if (uVar6 == 0x33545844) {
            iVar7 = 0xb;
            goto LAB_826802c0;
          }
          if (uVar6 == 0x31545844) {
            iVar7 = 10;
            goto LAB_826802c0;
          }
        }
        puVar8 = param_2 + 0x19;
      }
      if (*param_1 != 0) goto LAB_82680440;
    }
    uVar5 = 0;
  }
  return uVar5;
}

