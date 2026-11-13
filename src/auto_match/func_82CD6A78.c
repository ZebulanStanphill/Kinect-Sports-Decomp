extern int fn_82CD5D00();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int *iStack00000044;
extern unsigned int uStack_a0;


void fn_82CD6A78(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  __int64 lVar11;
  int iVar12;
  int iVar13;
  __int64 lVar14;
  int iVar15;
  int iVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  int iVar19;
  int iVar20;
  unsigned __int64 uVar21;
  int iStack00000014;
  int iStack0000001c;
  int iStack00000044;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  int in_stack_0000007c;
  int in_stack_00000084;
  unsigned int uStack_a0;
  
  uVar8 = in_stack_00000064;
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) != 1)
  {
    uVar8 = (int)in_stack_00000064 >> 1;
  }
  uVar17 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar17 = (int)in_stack_0000006c >> 1;
  }
  lVar11 = (param_5 & 0xffff) * 0x10000;
  iVar7 = (int)lVar11;
  lVar14 = (param_6 & 0xffff) * 0x10000;
  uVar5 = lVar11 - 0x10000;
  uVar21 = lVar14 - 0x10000;
  uVar18 = (unsigned __int64)in_stack_00000054 - 1;
  uVar9 = (unsigned __int64)in_stack_0000005c - 1;
  uVar1 = (int)uVar5 / (int)uVar18;
  trapWord(6,uVar18,0);
  trapWord(5,uVar18 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uVar2 = (int)uVar21 / (int)uVar9;
  trapWord(6,uVar9,0);
  trapWord(5,uVar9 & ~(((uVar21 & 0x7fffffff) << 1 | (uVar21 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000044 = param_7;
  if (((in_stack_0000007c + 1U & 3) == 0) &&
     ((((int)in_stack_00000054 >> 1) +
       (unsigned int)((int)in_stack_00000054 < 0 && (in_stack_00000054 & 1) != 0) & 3) == 0)) {
    fn_82CD5D00(in_stack_0000007c + -3);
    fn_82CD5D00(in_stack_00000084 + -3,param_4);
    iVar7 = uStack_a0;
  }
  else {
    uStack_a0 = (int)lVar14;
    iVar20 = 0x8000;
    iVar16 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_a0 + -0x8000;
    if (0x7fff < iVar16) {
      iVar13 = 0;
      iVar19 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar7 + -0x8000;
      do {
        iVar15 = 0;
        iVar12 = 0x8000;
        if (0x7fff < iVar19) {
          iVar6 = (iVar20 >> 0x11) * param_8;
          iVar10 = iVar13;
          do {
            iVar4 = iVar12 >> 0x11;
            iVar12 = uVar1 * 2 + iVar12;
            uVar3 = *(unsigned char *)(iVar6 + param_4 + iVar4);
            *(unsigned char *)(iVar10 + in_stack_0000007c) = *(unsigned char *)(iVar6 + iVar4 + param_3);
            *(unsigned char *)(iVar13 + in_stack_00000084 + iVar15) = uVar3;
            iVar15 = iVar15 + uVar17;
            iVar10 = iVar13 + iVar15;
          } while (iVar12 <= iVar19);
        }
        iVar20 = uVar2 * 2 + iVar20;
        iVar13 = iVar13 + uVar8;
      } while (iVar20 <= iVar16);
    }
  }
  if (((param_1 + 1U & 3) == 0) && ((in_stack_00000054 & 3) == 0)) {
    fn_82CD5D00(param_1 + -3,iStack0000001c,iStack00000044,in_stack_00000064,param_5,param_6,
                  (__int64)(int)uVar1,uVar2);
  }
  else {
    iVar16 = 0x8000;
    iVar20 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_a0 + -0x8000;
    if (0x7fff < iVar20) {
      iVar7 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar7 + -0x8000;
      do {
        iVar13 = 0;
        lVar11 = 0x8000;
        if (0x7fff < iVar7) {
          do {
            iVar19 = (int)lVar11 >> 0x10;
            lVar11 = lVar11 + (int)uVar1;
            uVar3 = *(unsigned char *)
                     (((int)(iVar16 + uVar2) >> 0x10) * iStack00000044 + iStack0000001c + iVar19);
            *(unsigned char *)(param_1 + iVar13) =
                 *(unsigned char *)((iVar16 >> 0x10) * iStack00000044 + iStack0000001c + iVar19);
            *(unsigned char *)(param_1 + in_stack_00000064 + iVar13) = uVar3;
            iVar13 = iVar13 + in_stack_0000006c;
          } while ((int)lVar11 <= iVar7);
        }
        iVar16 = uVar2 * 2 + iVar16;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar16 <= iVar20);
    }
  }
  return;
}

