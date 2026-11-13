extern int fn_82A1DDC0();
extern int fn_82CD31A8();
extern int fn_82CD4888();
extern int fn_82CD4988();
extern int fn_82CD58C0();
extern int memcpy();


unsigned __int64
fn_82CA2488(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int in_stack_00000054, int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074)

{
  short sVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;





  
  iVar6 = 0;
  if ((param_1 == (int *)0x0) || (param_3 == 0)) {
    return 1;
  }
  if (param_2 == 0) {
    uVar7 = param_1[0xe3f];
    uVar2 = param_1[0xe40];
    sVar1 = *(short *)(*param_1 + 0xe);
    iVar3 = *(int *)(*param_1 + 0x10);
  }
  else {
    uVar7 = *(unsigned int *)(param_2 + 4);
    uVar2 = *(unsigned int *)(param_2 + 8);
    sVar1 = *(short *)(param_2 + 0xe);
    iVar3 = *(int *)(param_2 + 0x10);
  }
  if (param_4 < 0) {
    return 1;
  }
  if (param_5 < 0) {
    return 1;
  }
  if (param_8 < 0) {
    return 1;
  }
  if (in_stack_00000054 < 0) {
    return 1;
  }
  if (-1 < param_6) {
    if (param_7 < 0) {
      return 1;
    }
    if (uVar7 < (unsigned int)(param_4 + param_8)) {
      return 1;
    }
    if ((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) < (unsigned int)(param_5 + in_stack_00000054)) {
      return 1;
    }
    if ((unsigned int)(param_6 + param_8) <= *(unsigned int *)(param_3 + 4)) {
      uVar4 = (int)*(unsigned int *)(param_3 + 8) >> 0x1f;
      if ((*(unsigned int *)(param_3 + 8) ^ uVar4) - uVar4 < (unsigned int)(param_7 + in_stack_00000054)) {
        return 1;
      }
      if (param_1[0xe43] != param_4) {
        param_1[0xe43] = param_4;
        iVar6 = 2;
      }
      if (param_1[0xe44] != param_5) {
        param_1[0xe44] = param_5;
        iVar6 = 2;
      }
      if (param_1[0xe45] != param_6) {
        param_1[0xe45] = param_6;
        iVar6 = 2;
      }
      if (param_1[0xe46] != param_7) {
        param_1[0xe46] = param_7;
        iVar6 = 2;
      }
      if (param_1[0xe2d] != param_8) {
        iVar6 = 2;
        *(int *)(*param_1 + 4) = param_8;
        param_1[0xe2d] = param_8;
      }
      if (param_1[0xe2e] != in_stack_00000054) {
        iVar6 = 2;
        *(int *)(*param_1 + 8) = in_stack_00000054;
        param_1[0xe2e] = in_stack_00000054;
      }
      if (param_1[0xe24] != param_8) {
        iVar6 = 2;
        *(int *)(param_1[1] + 4) = param_8;
        param_1[0xe24] = param_8;
      }
      if (param_1[0xe25] != in_stack_00000054) {
        iVar6 = 2;
        *(int *)(param_1[1] + 8) = in_stack_00000054;
        param_1[0xe25] = in_stack_00000054;
      }
      if (param_1[0xe3f] != uVar7) {
        param_1[0xe3f] = uVar7;
        iVar6 = (iVar6 == 2) + 1;
      }
      if (param_1[0xe40] != uVar2) {
        param_1[0xe40] = uVar2;
        iVar6 = 2;
      }
      if (param_1[0xe41] != *(int *)(param_3 + 4)) {
        param_1[0xe41] = *(int *)(param_3 + 4);
        iVar6 = (iVar6 == 2) + 1;
      }
      if (param_1[0xe42] != *(int *)(param_3 + 8)) {
        param_1[0xe42] = *(int *)(param_3 + 8);
        iVar6 = 2;
      }
      if (*(int *)(*param_1 + 0x10) != iVar3) {
        *(int *)(*param_1 + 0x10) = iVar3;
        iVar6 = 2;
      }
      if (*(int *)(param_1[1] + 0x10) != *(int *)(param_3 + 0x10)) {
        *(int *)(param_1[1] + 0x10) = *(int *)(param_3 + 0x10);
        iVar6 = 2;
      }
      if (*(short *)(*param_1 + 0xe) != sVar1) {
        iVar6 = 2;
        *(short *)(*param_1 + 0xe) = sVar1;
      }
      sVar1 = *(short *)(param_3 + 0xe);
      if (*(short *)(param_1[1] + 0xe) != sVar1) {
        *(short *)(param_1[1] + 0xe) = sVar1;
        iVar6 = 2;
      }
      if (param_1[0xe48] != in_stack_00000064) {
        param_1[0xe48] = in_stack_00000064;
        iVar6 = (iVar6 == 2) + 1;
      }
      if (param_1[0xe49] != in_stack_0000006c) {
        param_1[0xe49] = in_stack_0000006c;
        iVar6 = (iVar6 == 2) + 1;
      }
      if (param_1[0xe4a] != in_stack_00000074) {
        param_1[0xe4a] = in_stack_00000074;
        iVar6 = ((unsigned int)LZCOUNT(iVar6 + -2) >> 5) + 1;
      }
      if (param_1[0xe47] == in_stack_0000005c) {
        if (iVar6 != 2) {
          if (iVar6 != 1) {
            return 0;
          }
          fn_82CD31A8(param_1,param_1[0xe3f],param_1[0xe40],param_1[0xe41],param_1[0xe42],
                            sVar1);
          return 0;
        }
      }
      else {
        param_1[0xe47] = in_stack_0000005c;
      }
      uVar5 = fn_82CD4988(param_1);
      if ((int)uVar5 == 0) {
        if ((*(int *)(param_3 + 0x10) == 0) && (*(short *)(param_3 + 0xe) == 8)) {
          fn_82A1DDC0((unsigned __int64)(unsigned int)param_1[1] + 0x28,param_3 + 0x28,0x400);
        }
        else if (*(int *)(param_3 + 0x10) == 3) {
          memcpy((unsigned __int64)(unsigned int)param_1[1] + 0x28,param_3 + 0x28,0xc);
        }
        iVar6 = 1;
        if (*(int *)(param_3 + 8) < 0) {
          iVar6 = -1;
        }
        uVar7 = *(unsigned int *)(param_1[1] + 8);
        uVar2 = (int)uVar7 >> 0x1f;
        *(unsigned int *)(param_1[1] + 8) = ((uVar7 ^ uVar2) - uVar2) * iVar6;
        uVar5 = fn_82CD4888(param_1);
        if ((int)uVar5 == 0) {
          uVar5 = fn_82CD58C0(param_1);
          if ((int)uVar5 == 0) {
            return 0;
          }
          return uVar5;
        }
        return uVar5;
      }
      return uVar5;
    }
    return 1;
  }
  return 1;
}

