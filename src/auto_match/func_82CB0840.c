extern int fn_82C4E5E8();
extern int memset();
extern unsigned int uStack00000034;


unsigned __int64
fn_82CB0840(int param_1,unsigned int *param_2,__int64 param_3,unsigned __int64 param_4,unsigned int param_5,
             unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  __int64 *plVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int uVar9;
  int iVar10;
  __int64 lVar11;
  unsigned int uVar12;
  __int64 lVar13;
  int iVar14;
  unsigned int uStack00000034;
  unsigned int in_stack_00000054;
  
  uVar9 = *(unsigned int *)(param_1 + 0x154);
  uVar12 = *(unsigned int *)(param_1 + 0x6ec);
  lVar8 = (__int64)(int)(((int)in_stack_00000054 >> 1) + *(unsigned int *)(param_1 + 0x4fb4)) *
          (__int64)*(int *)(param_1 + 0xd0) + (__int64)((int)param_8 >> 1) +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x4fb4);
  iVar14 = *(int *)(param_1 + 0xed4) + (int)lVar8;
  lVar11 = (unsigned __int64)*(unsigned char *)(param_2 + 1) * 0x14 + (unsigned __int64)*(unsigned int *)(param_1 + 0x19d0);
  lVar13 = (__int64)(int)(((int)param_7 >> 1) + *(unsigned int *)(param_1 + 0x4fb0)) *
           (__int64)*(int *)(param_1 + 0xcc) + (unsigned __int64)*(unsigned int *)(param_1 + 0xecc) +
           (__int64)((int)param_6 >> 1) + (unsigned __int64)*(unsigned int *)(param_1 + 0x4fb0);
  uVar2 = ~param_6 & 1;
  uVar3 = ~param_7 & 1;
  uVar4 = ~param_8 & 1;
  uVar5 = ~in_stack_00000054 & 1;
  lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0xed0) + lVar8;
  if (*(int *)(param_1 + 0x14c) != 0) {
    uVar9 = *(unsigned char *)param_2 & 7;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iVar10 = param_1 + 0xb64;
  }
  else {
    iVar10 = ((*param_2 >> 0x16 & 3) + 0x2df) * 4 + param_1;
  }
  uStack00000034 = param_5;
  if (*(unsigned char *)((int)param_2 + 0x13) == 0) {
    (**(int (***)())(param_1 + 0xc30))
              (param_1,param_3,lVar13,*(int *)(param_1 + 0xcc),uVar2,uVar3,
               *(unsigned int *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb09e8;
    }
    else {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar1 = *(__int64 **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(unsigned int *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
        if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar7 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb09e8:
        uVar12 = *(unsigned int *)(param_1 + 0x6ec);
        uVar6 = (**(int (***)())(param_1 + 0xc78))
                          (param_1,iVar10,*(unsigned int *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(int (***)())(param_1 + 0xc80))(uVar12,uVar12,8,*(unsigned int *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    (**(int (***)())(param_1 + 0xc2c))
              (param_1,param_3,uVar12,lVar13,*(unsigned int *)(param_1 + 0xcc),uVar2,uVar3,
               *(unsigned int *)(param_1 + 0x150));
  }
  param_3 = param_3 + 8;
  lVar13 = lVar13 + 8;
  if (*(unsigned char *)((int)param_2 + 0x12) == 0) {
    (**(int (***)())(param_1 + 0xc30))
              (param_1,param_3,lVar13,*(unsigned int *)(param_1 + 0xcc),uVar2,uVar3,
               *(unsigned int *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb0d54;
    }
    else {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar1 = *(__int64 **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(unsigned int *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
        if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar7 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb0d54:
        uVar12 = *(unsigned int *)(param_1 + 0x6ec);
        uVar6 = (**(int (***)())(param_1 + 0xc78))
                          (param_1,iVar10,*(unsigned int *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(int (***)())(param_1 + 0xc80))(uVar12,uVar12,8,*(unsigned int *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    (**(int (***)())(param_1 + 0xc2c))
              (param_1,param_3,uVar12,lVar13,*(unsigned int *)(param_1 + 0xcc),uVar2,uVar3,
               *(unsigned int *)(param_1 + 0x150));
  }
  param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec) + param_3;
  lVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec) + lVar13;
  if (*(unsigned char *)((int)param_2 + 0x11) == 0) {
    (**(int (***)())(param_1 + 0xc30))
              (param_1,param_3,lVar13,*(unsigned int *)(param_1 + 0xcc),uVar2,uVar3,
               *(unsigned int *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb10c8;
    }
    else {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar1 = *(__int64 **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(unsigned int *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
        if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar7 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb10c8:
        uVar12 = *(unsigned int *)(param_1 + 0x6ec);
        uVar6 = (**(int (***)())(param_1 + 0xc78))
                          (param_1,iVar10,*(unsigned int *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(int (***)())(param_1 + 0xc80))(uVar12,uVar12,8,*(unsigned int *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    (**(int (***)())(param_1 + 0xc2c))
              (param_1,param_3,uVar12,lVar13,*(unsigned int *)(param_1 + 0xcc),uVar2,uVar3,
               *(unsigned int *)(param_1 + 0x150));
  }
  if (*(unsigned char *)(param_2 + 4) == 0) {
    (**(int (***)())(param_1 + 0xc30))
              (param_1,param_3 + 8,lVar13 + 8,*(unsigned int *)(param_1 + 0xcc),uVar2,uVar3,
               *(unsigned int *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb1438;
    }
    else {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar1 = *(__int64 **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(unsigned int *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
        if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar7 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb1438:
        uVar12 = *(unsigned int *)(param_1 + 0x6ec);
        uVar6 = (**(int (***)())(param_1 + 0xc78))
                          (param_1,iVar10,*(unsigned int *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(int (***)())(param_1 + 0xc80))(uVar12,uVar12,8,*(unsigned int *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    (**(int (***)())(param_1 + 0xc2c))
              (param_1,param_3 + 8,uVar12,lVar13 + 8,*(unsigned int *)(param_1 + 0xcc),uVar2,uVar3,
               *(unsigned int *)(param_1 + 0x150));
  }
  if (*(unsigned char *)((int)param_2 + 0xf) == 0) {
    (**(int (***)())(param_1 + 0xc44))
              (param_1,param_4,lVar8,*(unsigned int *)(param_1 + 0xd0),uVar4,uVar5,
               *(unsigned int *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb17a0;
    }
    else {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar13 = *plVar1;
      uVar9 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar13 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar13 < 0) {
        plVar1 = *(__int64 **)(param_1 + 0x54);
        lVar13 = *plVar1;
        uVar9 = *(unsigned int *)(plVar1 + 1);
        *plVar1 = lVar13 << 1;
        *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
        if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar13 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb17a0:
        uVar12 = *(unsigned int *)(param_1 + 0x6ec);
        uVar6 = (**(int (***)())(param_1 + 0xc78))
                          (param_1,iVar10,*(unsigned int *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(int (***)())(param_1 + 0xc80))(uVar12,uVar12,8,*(unsigned int *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
    }
    (**(int (***)())(param_1 + 0xc48))
              (param_1,param_4,uVar12,lVar8,*(unsigned int *)(param_1 + 0xd0),uVar4,uVar5,
               *(unsigned int *)(param_1 + 0x150));
  }
  if (*(unsigned char *)((int)param_2 + 0xe) == 0) {
    (**(int (***)())(param_1 + 0xc44))
              (param_1,uStack00000034,iVar14,*(unsigned int *)(param_1 + 0xd0),uVar4,uVar5,
               *(unsigned int *)(param_1 + 0x150));
    return 0;
  }
  if ((*param_2 & 0x10000000) == 0) {
    if (uVar9 != 0) goto LAB_82cb1b50;
  }
  else {
    plVar1 = *(__int64 **)(param_1 + 0x54);
    lVar8 = *plVar1;
    uVar9 = *(unsigned int *)(plVar1 + 1);
    *plVar1 = lVar8 << 1;
    *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
    if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar8 < 0) {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar8 = *plVar1;
      uVar9 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar8 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar9 - 1);
      if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      uVar9 = ((unsigned int)LZCOUNT((unsigned int)((unsigned __int64)lVar8 >> 0x3f)) >> 5 ^ 1) + 1;
      goto LAB_82cb1b50;
    }
    uVar9 = 0;
  }
  uVar12 = *(unsigned int *)(param_1 + 0x6ec);
  uVar6 = (**(int (***)())(param_1 + 0xc78))(param_1,iVar10,*(unsigned int *)(param_1 + 0x72c),0,lVar11);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  (**(int (***)())(param_1 + 0xc80))(uVar12,uVar12,8,*(unsigned int *)(param_1 + 0x798));
LAB_82cb1b50:
  if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
    memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
  }
  if (uVar9 != 2) {
    (**(int (***)())(param_1 + 0xc48))
              (param_1,uStack00000034,uVar12,iVar14,*(unsigned int *)(param_1 + 0xd0),uVar4,uVar5,
               *(unsigned int *)(param_1 + 0x150));
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  memset(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
}

