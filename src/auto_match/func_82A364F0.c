extern unsigned int lbl_8315D3D8;


unsigned __int64 fn_82A364F0(unsigned int param_1,unsigned char *param_2,__int64 param_3,unsigned char *param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  uVar4 = 0;
  if ((((param_2 == (unsigned char *)0x0) || (param_4 == (unsigned char *)0x0)) || (iVar5 = (int)param_3, iVar5 < -1))
     || (param_5 < -1)) {
    thunk_FUN_82a2b748(0x57);
    uVar3 = 0;
  }
  else {
    while (iVar5 != 0) {
      if (param_5 == 0) {
        if ((int)param_3 != 0) goto LAB_82a3669c;
        break;
      }
      bVar1 = *param_2;
      if ((bVar1 == 0) && (*param_4 == 0)) goto LAB_82a36668;
      if (bVar1 == 0) {
        return 1;
      }
      bVar2 = *param_4;
      if (bVar2 == 0) {
        return 3;
      }
      uVar6 = *(unsigned int *)(&lbl_8315D3D8 + (unsigned int)bVar1 * 4);
      uVar7 = *(unsigned int *)(&lbl_8315D3D8 + (unsigned int)bVar2 * 4);
      if ((~param_1 >> 0xc & 1) == 0) {
LAB_82a365f4:
        if ((param_1 & 4) == 0) {
LAB_82a36618:
          if ((param_1 & 1) != 0) {
            if ((uVar6 & 0x100000) != 0) {
              uVar6 = bVar1 + 0x20 | 0x80000;
            }
            if ((uVar7 & 0x100000) != 0) {
              uVar7 = bVar2 + 0x20 | 0x80000;
            }
          }
          if (uVar6 < uVar7) {
            return 1;
          }
          if (uVar7 < uVar6) {
            return 3;
          }
LAB_82a3664c:
          param_5 = param_5 + -1;
          param_4 = param_4 + 1;
        }
        else if ((uVar6 & 0x20000) == 0) {
          if ((uVar7 & 0x20000) != 0) goto LAB_82a3660c;
          goto LAB_82a36618;
        }
LAB_82a36654:
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      }
      else {
        if ((uVar6 & 0x10000) != 0) {
          if ((uVar7 & 0x10000) == 0) {
            if (uVar4 == 0) {
              uVar4 = 4;
            }
            uVar4 = uVar4 | 1;
            goto LAB_82a36654;
          }
          if (uVar6 < uVar7) {
            uVar4 = 7;
          }
          else if (uVar7 < uVar6) {
            uVar4 = 0xb;
          }
          goto LAB_82a3664c;
        }
        if ((uVar7 & 0x10000) == 0) goto LAB_82a365f4;
        if (uVar4 == 0) {
          uVar4 = 8;
        }
        uVar4 = uVar4 | 2;
LAB_82a3660c:
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      }
      iVar5 = (int)param_3;
    }
    if (param_5 == 0) {
LAB_82a36668:
      uVar3 = (unsigned __int64)*(unsigned int *)(uVar4 * 4 + -0x7cea2828);
    }
    else {
LAB_82a3669c:
      uVar3 = (-(unsigned __int64)(param_3 != 0) & 0xfffffffe) + 3;
    }
  }
  return uVar3;
}

