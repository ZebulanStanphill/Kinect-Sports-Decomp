extern int fn_8263ABD0();
extern int fn_8263AD78();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8263BFD0(int param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  int iVar8;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int *in_stack_0000006c;
  unsigned int *in_stack_00000074;
  unsigned int *in_stack_0000007c;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  
  lVar7 = ((unsigned __int64)in_stack_00000054 & 0x7fffffff) * 2 + 1;
  lVar3 = param_4;
  if (param_1 == 3) {
LAB_8263c080:
    uVar4 = 1;
LAB_8263c08c:
    if (param_1 != 0x11) {
LAB_8263c094:
      lVar3 = 1;
    }
  }
  else {
    if (param_1 != 0x11) {
      if (param_1 == 0x12) {
        uVar4 = 3;
      }
      else {
        if (param_1 == 0x13) goto LAB_8263c080;
        uVar4 = uStack_78;
        if (param_1 != 0x14) goto LAB_8263c08c;
        uVar4 = 0;
        param_8 = 0;
      }
      goto LAB_8263c094;
    }
    uVar4 = 2;
  }
  if ((param_5 & 0xffffffff) == 0) {
    param_5 = fn_8263ABD0(param_2,param_3,lVar3,in_stack_00000054);
  }
  if ((int)param_8 == 2) {
    param_8 = -(unsigned __int64)(1 < param_5) & 1;
  }
  fn_8263AD78(param_2,param_3,param_4,param_5,param_7 & 0x3f,uVar4,(param_7 & 0xffffffff) >> 8 & 1
                ,param_8);
  uVar6 = 0x100003;
  if ((param_6 & 4) != 0) {
    uVar6 = 0x300003;
  }
  if ((param_6 & 0x200) != 0) {
    uVar6 = uVar6 | 0x400000;
  }
  *in_stack_0000006c = uVar6;
  uVar6 = in_stack_0000006c[0xc];
  in_stack_0000006c[1] = 1;
  uVar2 = (uVar4 & 3) << 9;
  in_stack_0000006c[5] = 0xffff0000;
  in_stack_0000006c[6] = 0xffff0000;
  in_stack_0000006c[2] = 0;
  in_stack_0000006c[0xc] = uVar2 | uVar6 & 0xfffff9ff;
  iVar8 = (int)param_2;
  iVar1 = (int)lVar7;
  if (uVar4 == 0) {
    uVar4 = in_stack_0000006c[9] & 0xff000000 | iVar8 - iVar1 & 0xffffffU;
LAB_8263c1ec:
    in_stack_0000006c[9] = uVar4;
  }
  else {
    if (uVar4 == 1) {
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xffffe000 | iVar8 - iVar1 & 0x1fffU;
      uVar5 = (unsigned int)((param_3 - lVar7 & 0xffffffffU) << 0xd) & 0x3ffe000 |
              (unsigned int)((param_4 - 1U & 0xffffffff) << 0x1a);
      uVar4 = in_stack_0000006c[9] & 0x1fff;
    }
    else {
      if (2 < uVar4) {
        if (uVar4 != 3) goto LAB_8263c1f0;
        uVar4 = (unsigned int)((param_4 - 1U & 0xffffffff) << 0x1a) |
                (unsigned int)((param_3 - lVar7 & 0xffffffffU) << 0xd) & 0x3ffe000 | iVar8 - iVar1 & 0x1fffU
        ;
        goto LAB_8263c1ec;
      }
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xfffff800 | iVar8 - iVar1 & 0x7ffU;
      uVar4 = iVar8 - iVar1 & 0x7ff;
      uVar5 = (unsigned int)((param_3 - lVar7 & 0xffffffffU) << 0xb) & 0x3ff800 |
              (unsigned int)((param_4 - lVar7 & 0xffffffffU) << 0x16);
    }
    in_stack_0000006c[9] = uVar5 | uVar4;
  }
LAB_8263c1f0:
  iVar8 = (int)param_7;
  in_stack_0000006c[7] =
       ((((iVar8 >> 0xf & 3U) << 2 | iVar8 >> 0xd & 3U) << 2 | iVar8 >> 0xb & 3U) << 2 |
       iVar8 >> 9 & 3U) << 2 |
       (((iVar8 >> 8) << 0xe | uStack_80 & 0x3fff) & 0x7fe0) << 0x11 |
       in_stack_0000006c[7] & 0x3ffc00 | 2;
  in_stack_0000006c[0xb] =
       (unsigned int)((param_5 - 1 & 0xffffffff) << 6) & 0x3c0 | in_stack_0000006c[0xb] & 0xfffffc3f;
  in_stack_0000006c[8] =
       (unsigned int)(param_1 == 0x13) << 10 |
       (iVar8 >> 6 & 3U) << 6 | in_stack_0000006c[8] & 0xfffffb00 | (unsigned int)(param_7 & 0x3f);
  in_stack_0000006c[0xc] =
       (unsigned int)((param_8 & 0xffffffff) << 0xb) & 0x800 | uVar2 | uVar6 & 0xfffff1ff;
  in_stack_0000006c[10] =
       (in_stack_0000005c & 0x3f | in_stack_00000054 << 0x12) << 0xd | iVar8 >> 0x11 & 0x1fffU |
       in_stack_0000006c[10] & 0x7ff80000;
  *in_stack_00000074 = uStack_7c;
  *in_stack_0000007c = uStack_78;
  return;
}

