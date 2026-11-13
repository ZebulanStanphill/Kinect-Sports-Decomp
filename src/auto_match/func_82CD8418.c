extern int fn_82CD7760();


void fn_82CD8418(unsigned __int64 param_1, unsigned __int64 param_2, int param_3, int param_4, int param_5, int param_6, unsigned __int64 param_7, int param_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, unsigned __int64 unused_arg_11, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, int in_stack_0000007c)

{
  unsigned char uVar1;
  unsigned char *puVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  __int64 lVar9;



  uVar7 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar7 = (int)in_stack_0000006c >> 1;
  }
  lVar3 = (__int64)(param_6 >> 1);
  if (0 < lVar3) {
    iVar5 = 0;
    do {
      iVar8 = 0;
      iVar4 = 0;
      if (0 < param_5 >> 1) {
        lVar9 = (__int64)(param_5 >> 1);
        iVar6 = iVar5;
        do {
          puVar2 = (unsigned char *)(iVar6 + param_3);
          uVar1 = *(unsigned char *)(iVar5 + param_4 + iVar4);
          iVar4 = iVar4 + 1;
          iVar6 = iVar5 + iVar4;
          *(unsigned char *)(in_stack_0000007c + iVar8) = *puVar2;
          *(unsigned char *)(in_stack_0000007c + 1 + iVar8) = uVar1;
          iVar8 = iVar8 + uVar7 * 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar3 = lVar3 + -1;
      iVar5 = iVar5 + param_8;
      in_stack_0000007c = in_stack_0000007c + -2;
    } while (lVar3 != 0);
  }
  fn_82CD7760(param_1,param_2,param_7,in_stack_0000006c);
  return;
}
