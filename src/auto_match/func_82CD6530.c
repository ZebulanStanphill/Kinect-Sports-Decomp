extern int fn_82CD5DD0();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000044;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82CD6530(unsigned int param_1, int param_2, int param_3, int param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, unsigned int in_stack_0000007c, int in_stack_00000084)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  int iVar11;
  __int64 lVar12;
  int iVar13;
  int iVar14;
  unsigned __int64 uVar15;
  int iVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  int iVar20;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000044;






  unsigned int uStack_a0;
  unsigned int uStack_9c;
  
  uStack00000044 = (unsigned int)param_7;
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) == 1)
  {
    uStack_a0 = in_stack_00000064;
  }
  else {
    uStack_a0 = (int)in_stack_00000064 >> 1;
  }
  uVar6 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar6 = (int)in_stack_0000006c >> 1;
  }
  lVar10 = (param_5 & 0xffff) * 0x10000;
  iVar5 = (int)lVar10;
  lVar12 = (param_6 & 0xffff) * 0x10000;
  uVar7 = lVar10 - 0x10000;
  uVar19 = lVar12 - 0x10000;
  uVar18 = (unsigned __int64)in_stack_00000054 - 1;
  uVar15 = (unsigned __int64)in_stack_0000005c - 1;
  uVar1 = (int)uVar7 / (int)uVar18;
  trapWord(6,uVar18,0);
  trapWord(5,uVar18 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uVar2 = (int)uVar19 / (int)uVar15;
  trapWord(6,uVar15,0);
  trapWord(5,uVar15 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  if (((in_stack_0000007c & 3) == 0) &&
     (((__int64)((int)in_stack_0000005c >> 1) +
       (unsigned __int64)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 1) != 0) & 3) == 0)) {
    fn_82CD5DD0();
    fn_82CD5DD0(in_stack_00000084,param_4);
    iVar5 = uStack_9c;
  }
  else {
    uStack_9c = (int)lVar12;
    iVar17 = 0x8000;
    iVar14 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_9c + -0x8000;
    if (0x7fff < iVar14) {
      iVar8 = 0;
      iVar16 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar5 + -0x8000;
      do {
        iVar13 = 0;
        iVar11 = 0x8000;
        if (0x7fff < iVar16) {
          iVar20 = (iVar17 >> 0x11) * param_8;
          iVar9 = iVar8;
          do {
            iVar4 = iVar11 >> 0x11;
            iVar11 = uVar1 * 2 + iVar11;
            uVar3 = *(unsigned char *)(iVar20 + param_4 + iVar4);
            *(unsigned char *)(iVar9 + in_stack_0000007c) = *(unsigned char *)(iVar20 + iVar4 + param_3);
            *(unsigned char *)(iVar8 + in_stack_00000084 + iVar13) = uVar3;
            iVar13 = iVar13 + uVar6;
            iVar9 = iVar8 + iVar13;
          } while (iVar11 <= iVar16);
        }
        iVar17 = uVar2 * 2 + iVar17;
        iVar8 = iVar8 + uStack_a0;
      } while (iVar17 <= iVar14);
      param_7 = param_7 & 0xffffffff;
    }
  }
  if (((param_1 & 3) == 0) && ((in_stack_0000005c & 3) == 0)) {
    fn_82CD5DD0(param_1,param_2,param_7,in_stack_0000006c,param_5,param_6,
                  (unsigned __int64)in_stack_00000054,in_stack_0000005c);
  }
  else {
    iVar14 = 0x8000;
    iVar17 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_9c + -0x8000;
    if (0x7fff < iVar17) {
      iVar5 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar5 + -0x8000;
      do {
        iVar8 = 0;
        iVar16 = 0x8000;
        if (0x7fff < iVar5) {
          do {
            iVar11 = iVar16 >> 0x10;
            iVar16 = iVar16 + uVar1;
            uVar3 = *(unsigned char *)
                     (((int)(iVar14 + uVar2) >> 0x10) * (int)param_7 + param_2 + iVar11);
            *(unsigned char *)(param_1 + iVar8) =
                 *(unsigned char *)((iVar14 >> 0x10) * (int)param_7 + param_2 + iVar11);
            *(unsigned char *)(param_1 + in_stack_00000064 + iVar8) = uVar3;
            iVar8 = iVar8 + in_stack_0000006c;
          } while (iVar16 <= iVar5);
        }
        iVar14 = uVar2 * 2 + iVar14;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar14 <= iVar17);
    }
  }
  return;
}

