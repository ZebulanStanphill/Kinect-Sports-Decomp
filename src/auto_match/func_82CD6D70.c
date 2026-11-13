extern int fn_82CD5D00();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000044;


void fn_82CD6D70(int param_1, int param_2, int param_3, int param_4, unsigned __int64 param_5, unsigned __int64 param_6, int param_7, int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, int in_stack_0000007c)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char uVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned int uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  int iVar19;
  int iStack0000001c;
  int iStack00000044;





  
  uVar14 = in_stack_00000064;
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) != 1)
  {
    uVar14 = (int)in_stack_00000064 >> 1;
  }
  uVar16 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar16 = (int)in_stack_0000006c >> 1;
  }
  lVar5 = (param_6 & 0xffff) * 0x10000;
  uVar13 = (unsigned __int64)in_stack_0000005c - 1;
  uVar18 = lVar5 - 0x10000;
  lVar8 = (param_5 & 0xffff) * 0x10000;
  uVar1 = (int)uVar18 / (int)uVar13;
  uVar12 = lVar8 - 0x10000;
  uVar10 = (unsigned __int64)in_stack_00000054 - 1;
  iVar7 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar5 + -0x8000;
  trapWord(6,uVar13,0);
  uVar2 = (int)uVar12 / (int)uVar10;
  trapWord(6,uVar10,0);
  trapWord(5,uVar10 & ~(((uVar12 & 0x7fffffff) << 1 | (uVar12 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar9 = 0x8000;
  iVar15 = (int)lVar8;
  if (0x7fff < iVar7) {
    iVar11 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + iVar15 + -0x8000;
    do {
      iVar19 = 0;
      iVar6 = 0x8000;
      if (0x7fff < iVar11) {
        iVar17 = (iVar9 >> 0x11) * param_8;
        do {
          iVar4 = iVar6 >> 0x11;
          iVar6 = uVar2 * 2 + iVar6;
          uVar3 = *(unsigned char *)(iVar17 + iVar4 + param_3);
          *(unsigned char *)(in_stack_0000007c + 1 + iVar19) =
               *(unsigned char *)(iVar17 + param_4 + iVar4);
          *(unsigned char *)(in_stack_0000007c + iVar19) = uVar3;
          iVar19 = iVar19 + uVar16 * 2;
        } while (iVar6 <= iVar11);
      }
      iVar9 = uVar1 * 2 + iVar9;
      in_stack_0000007c = in_stack_0000007c + uVar14 * 2;
    } while (iVar9 <= iVar7);
  }
  if (((param_1 + 1U & 3) == 0) && ((in_stack_00000054 & 3) == 0)) {
    iStack0000001c = param_2;
    iStack00000044 = param_7;
    fn_82CD5D00(param_1 + -3,param_2,param_7,in_stack_00000064);
  }
  else {
    iVar9 = 0x8000;
    if (0x7fff < iVar7) {
      iVar15 = ((int)uVar2 >> 4) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + iVar15 + -0x8000;
      do {
        iVar11 = 0;
        iVar6 = 0x8000;
        if (0x7fff < iVar15) {
          do {
            iVar19 = iVar6 >> 0x10;
            iVar6 = iVar6 + uVar2;
            uVar3 = *(unsigned char *)(((int)(iVar9 + uVar1) >> 0x10) * param_7 + param_2 + iVar19);
            *(unsigned char *)(param_1 + iVar11) =
                 *(unsigned char *)((iVar9 >> 0x10) * param_7 + param_2 + iVar19);
            *(unsigned char *)(param_1 + in_stack_00000064 + iVar11) = uVar3;
            iVar11 = iVar11 + in_stack_0000006c;
          } while (iVar6 <= iVar15);
        }
        iVar9 = uVar1 * 2 + iVar9;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar9 <= iVar7);
    }
  }
  return;
}

