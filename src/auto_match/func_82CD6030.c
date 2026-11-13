extern int fn_82CD5C30();
extern unsigned int iStack0000001c;
extern unsigned int *iStack00000044;
extern unsigned int uStack00000014;
extern unsigned int uStack_a0;


void fn_82CD6030(unsigned int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  int iVar11;
  __int64 lVar12;
  int iVar13;
  int iVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  int iVar19;
  unsigned __int64 uVar20;
  int iVar21;
  unsigned int uStack00000014;
  int iStack0000001c;
  int iStack00000044;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_0000007c;
  int in_stack_00000084;
  unsigned int uStack_a0;
  
  uVar6 = in_stack_00000064;
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) != 1)
  {
    uVar6 = (int)in_stack_00000064 >> 1;
  }
  uVar15 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar15 = (int)in_stack_0000006c >> 1;
  }
  lVar9 = (param_5 & 0xffff) * 0x10000;
  iVar5 = (int)lVar9;
  lVar12 = (param_6 & 0xffff) * 0x10000;
  uVar20 = lVar9 - 0x10000;
  uVar18 = lVar12 - 0x10000;
  uVar16 = (unsigned __int64)in_stack_00000054 - 1;
  uVar7 = (unsigned __int64)in_stack_0000005c - 1;
  uVar1 = (int)uVar20 / (int)uVar16;
  trapWord(6,uVar16,0);
  trapWord(5,uVar16 & ~(((uVar20 & 0x7fffffff) << 1 | (uVar20 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uVar2 = (int)uVar18 / (int)uVar7;
  trapWord(6,uVar7,0);
  trapWord(5,uVar7 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000044 = param_7;
  if (((in_stack_0000007c & 3) == 0) &&
     ((((int)in_stack_00000054 >> 1) +
       (unsigned int)((int)in_stack_00000054 < 0 && (in_stack_00000054 & 1) != 0) & 3) == 0)) {
    fn_82CD5C30();
    fn_82CD5C30(in_stack_00000084,param_4);
    iVar5 = uStack_a0;
  }
  else {
    uStack_a0 = (int)lVar12;
    iVar19 = 0x8000;
    iVar14 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_a0 + -0x8000;
    if (0x7fff < iVar14) {
      iVar11 = 0;
      iVar17 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar5 + -0x8000;
      do {
        iVar13 = 0;
        iVar10 = 0x8000;
        if (0x7fff < iVar17) {
          iVar21 = (iVar19 >> 0x11) * param_8;
          iVar8 = iVar11;
          do {
            iVar4 = iVar10 >> 0x11;
            iVar10 = uVar1 * 2 + iVar10;
            uVar3 = *(unsigned char *)(iVar21 + param_4 + iVar4);
            *(unsigned char *)(iVar8 + in_stack_0000007c) = *(unsigned char *)(iVar21 + iVar4 + param_3);
            *(unsigned char *)(iVar11 + in_stack_00000084 + iVar13) = uVar3;
            iVar13 = iVar13 + uVar15;
            iVar8 = iVar11 + iVar13;
          } while (iVar10 <= iVar17);
        }
        iVar19 = uVar2 * 2 + iVar19;
        iVar11 = iVar11 + uVar6;
      } while (iVar19 <= iVar14);
    }
  }
  if (((param_1 & 3) == 0) && ((in_stack_00000054 & 3) == 0)) {
    fn_82CD5C30(param_1,iStack0000001c,iStack00000044,in_stack_00000064,param_5,param_6,
                  (__int64)(int)uVar1,uVar2);
  }
  else {
    iVar14 = 0x8000;
    iVar19 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_a0 + -0x8000;
    if (0x7fff < iVar19) {
      iVar5 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar5 + -0x8000;
      do {
        iVar11 = 0;
        lVar9 = 0x8000;
        if (0x7fff < iVar5) {
          do {
            iVar17 = (int)lVar9 >> 0x10;
            lVar9 = lVar9 + (int)uVar1;
            uVar3 = *(unsigned char *)
                     (((int)(iVar14 + uVar2) >> 0x10) * iStack00000044 + iStack0000001c + iVar17);
            *(unsigned char *)(param_1 + iVar11) =
                 *(unsigned char *)((iVar14 >> 0x10) * iStack00000044 + iStack0000001c + iVar17);
            *(unsigned char *)(param_1 + in_stack_00000064 + iVar11) = uVar3;
            iVar11 = iVar11 + in_stack_0000006c;
          } while ((int)lVar9 <= iVar5);
        }
        iVar14 = uVar2 * 2 + iVar14;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar14 <= iVar19);
    }
  }
  return;
}

