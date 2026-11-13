extern int fn_82CD5F00();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int *iStack00000044;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82CD6F98(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
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
  int iVar11;
  __int64 lVar12;
  int iVar13;
  __int64 lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
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
  unsigned int uStack_9c;
  
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) == 1)
  {
    uStack_a0 = in_stack_00000064;
  }
  else {
    uStack_a0 = (int)in_stack_00000064 >> 1;
  }
  uVar8 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar8 = (int)in_stack_0000006c >> 1;
  }
  lVar12 = (param_5 & 0xffff) * 0x10000;
  iVar7 = (int)lVar12;
  lVar14 = (param_6 & 0xffff) * 0x10000;
  uVar9 = lVar12 - 0x10000;
  uVar5 = lVar14 - 0x10000;
  uVar20 = (unsigned __int64)in_stack_00000054 - 1;
  uVar19 = (unsigned __int64)in_stack_0000005c - 1;
  uVar1 = (int)uVar9 / (int)uVar20;
  trapWord(6,uVar20,0);
  trapWord(5,uVar20 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uVar2 = (int)uVar5 / (int)uVar19;
  trapWord(6,uVar19,0);
  trapWord(5,uVar19 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000044 = param_7;
  if (((in_stack_0000007c + 1U & 3) == 0) &&
     (((__int64)((int)in_stack_0000005c >> 1) +
       (unsigned __int64)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 1) != 0) & 3) == 0)) {
    fn_82CD5F00(in_stack_0000007c + -3);
    fn_82CD5F00(in_stack_00000084 + -3,param_4);
    iVar7 = uStack_9c;
  }
  else {
    uStack_9c = (int)lVar14;
    iVar18 = 0x8000;
    iVar16 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_9c + -0x8000;
    if (0x7fff < iVar16) {
      iVar10 = 0;
      iVar17 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar7 + -0x8000;
      do {
        iVar15 = 0;
        iVar13 = 0x8000;
        if (0x7fff < iVar17) {
          iVar6 = (iVar18 >> 0x11) * param_8;
          iVar11 = iVar10;
          do {
            iVar4 = iVar13 >> 0x11;
            iVar13 = uVar1 * 2 + iVar13;
            uVar3 = *(unsigned char *)(iVar6 + param_4 + iVar4);
            *(unsigned char *)(iVar11 + in_stack_0000007c) = *(unsigned char *)(iVar6 + iVar4 + param_3);
            *(unsigned char *)(iVar10 + in_stack_00000084 + iVar15) = uVar3;
            iVar15 = iVar15 + uVar8;
            iVar11 = iVar10 + iVar15;
          } while (iVar13 <= iVar17);
        }
        iVar18 = uVar2 * 2 + iVar18;
        iVar10 = iVar10 + uStack_a0;
      } while (iVar18 <= iVar16);
    }
  }
  if (((param_1 + 1U & 3) == 0) && ((in_stack_0000005c & 3) == 0)) {
    fn_82CD5F00(param_1 + -3,param_2,iStack00000044,in_stack_0000006c,param_5,param_6,
                  (unsigned __int64)in_stack_00000054,in_stack_0000005c);
  }
  else {
    iVar16 = 0x8000;
    iVar18 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_9c + -0x8000;
    if (0x7fff < iVar18) {
      iVar7 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar7 + -0x8000;
      do {
        iVar10 = 0;
        iVar17 = 0x8000;
        if (0x7fff < iVar7) {
          do {
            iVar13 = iVar17 >> 0x10;
            iVar17 = iVar17 + uVar1;
            uVar3 = *(unsigned char *)
                     (((int)(iVar16 + uVar2) >> 0x10) * iStack00000044 + param_2 + iVar13);
            *(unsigned char *)(param_1 + iVar10) =
                 *(unsigned char *)((iVar16 >> 0x10) * iStack00000044 + param_2 + iVar13);
            *(unsigned char *)(param_1 + in_stack_00000064 + iVar10) = uVar3;
            iVar10 = iVar10 + in_stack_0000006c;
          } while (iVar17 <= iVar7);
        }
        iVar16 = uVar2 * 2 + iVar16;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar16 <= iVar18);
    }
  }
  return;
}

