extern unsigned int *auStack_90;
extern int fn_82A1DDC0();
extern int fn_82A1E650();
extern int fn_82A29AC0();
extern int fn_82A2A108();


unsigned __int64 fn_82A10378(unsigned __int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, int *param_4, unsigned int *param_5, unsigned int *param_6, unsigned int *param_7, int *param_8, unsigned __int64 unused_arg_9, int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned short *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned short *in_stack_00000054;




  unsigned int auStack_90;
  
  uVar5 = *param_6;
  uVar6 = 0x40000 - *param_8;
  puVar7 = (unsigned short *)(*(int *)(*param_7 * 4 + in_stack_0000005c) + *param_8);
  uVar8 = uVar5;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
    uVar8 = uVar6;
  }
  for (; (2 < uVar5 && (uVar6 = (unsigned int)*puVar7, uVar6 + 2 <= uVar5));
      puVar7 = (unsigned short *)((int)puVar7 + uVar6 + 2)) {
    uVar9 = *param_5;
    if (uVar9 < 0x8000) {
      if (uVar9 == 0) {
        return 0xffffffff80004005;
      }
    }
    else {
      uVar9 = 0x8000;
    }
    auStack_90 = uVar9;
    iVar1 = LDIDecompress(param_3,puVar7 + 1,uVar6,*param_4,&auStack_90);
    if (iVar1 != 0) {
      return 0xffffffff80004005;
    }
    if (auStack_90 != uVar9) {
      return 0xffffffff80004005;
    }
    *param_4 = *param_4 + uVar9;
    *param_5 = *param_5 - uVar9;
    uVar5 = (uVar5 - uVar6) - 2;
  }
  if (uVar5 != 0) {
    fn_82A1DDC0(in_stack_00000054,puVar7,uVar5);
  }
  uVar6 = *param_6;
  *param_6 = uVar6 - uVar8;
  if (0x40000 < uVar6 - uVar8) {
    iVar1 = *param_7 * 0x14 + in_stack_00000064;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 0x80000;
    iVar1 = *param_7 * 4;
    iVar1 = fn_82A2A108(param_2,*(unsigned int *)(iVar1 + in_stack_0000005c),0x40000,
                              iVar1 + in_stack_0000006c,*param_7 * 0x14 + in_stack_00000064);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_82a2b798();
      *(unsigned int *)(*param_7 * 4 + in_stack_00000074) = uVar2;
      iVar1 = *(int *)(*param_7 * 4 + in_stack_00000074);
      if ((iVar1 != 0x3e5) && (iVar1 != 0x26)) {
        return 0xffffffff80004005;
      }
    }
    else {
      *(unsigned int *)(*param_7 * 4 + in_stack_00000074) = 0;
    }
  }
  if (*param_6 == 0) {
    puVar3 = (unsigned char *)0x0;
  }
  else {
    uVar4 = (unsigned __int64)*param_7 ^ 1;
    if (*(int *)((int)(uVar4 << 2) + in_stack_00000074) == 0x3e5) {
      iVar1 = fn_82A1E650(*(unsigned int *)
                            ((int)((uVar4 + (uVar4 & 0x3fffffff) * 4 & 0xffffffff) << 2) +
                             in_stack_00000064 + 0x10),0xffffffffffffffff);
      if (iVar1 != 0) {
        return 0xffffffff80004005;
      }
      iVar1 = fn_82A29AC0(param_2,(*param_7 ^ 1) * 0x14 + in_stack_00000064,
                                (*param_7 ^ 1) * 4 + in_stack_0000006c,0);
      if (iVar1 == 0) {
        return 0xffffffff80004005;
      }
    }
    uVar8 = *param_7 << 2 ^ 4;
    if (*param_6 < *(unsigned int *)(uVar8 + in_stack_0000006c)) {
      return 0xffffffff80004005;
    }
    puVar3 = *(unsigned char **)(uVar8 + in_stack_0000005c);
  }
  *param_8 = 0;
  if (uVar5 != 0) {
    if (puVar3 != (unsigned char *)0x0) {
      if (uVar5 == 1) {
        uVar5 = 2;
        *(unsigned char *)((int)in_stack_00000054 + 1) = *puVar3;
        *param_6 = *param_6 - 1;
        *param_8 = *param_8 + 1;
      }
      uVar8 = (unsigned int)*in_stack_00000054;
      if (uVar8 < 0x8001) {
        iVar1 = (uVar8 - uVar5) + 2;
        fn_82A1DDC0(uVar5 + (int)in_stack_00000054,puVar3 + *param_8,iVar1);
        *param_6 = *param_6 - iVar1;
        *param_8 = *param_8 + iVar1;
        uVar5 = *param_5;
        if (uVar5 < 0x8000) {
          if (uVar5 == 0) {
            return 0xffffffff80004005;
          }
        }
        else {
          uVar5 = 0x8000;
        }
        auStack_90 = uVar5;
        iVar1 = LDIDecompress(param_3,in_stack_00000054 + 1,uVar8,*param_4,&auStack_90);
        if ((iVar1 == 0) && (auStack_90 == uVar5)) {
          *param_4 = *param_4 + uVar5;
          *param_5 = *param_5 - uVar5;
          goto LAB_82a106f4;
        }
      }
    }
    return 0xffffffff80004005;
  }
LAB_82a106f4:
  *param_7 = *param_7 ^ 1;
  if (*param_6 == 0) {
    return -(unsigned __int64)(*param_5 != 0) & 0xffffffff80004005;
  }
  return 0xffffffff8000000a;
}

