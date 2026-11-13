extern int fn_82CD74F8();


void fn_82CD7AB0(unsigned __int64 param_1, unsigned __int64 param_2, int param_3, int param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, int param_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, unsigned __int64 unused_arg_11, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, int in_stack_0000007c, int in_stack_00000084)

{
  unsigned char uVar1;
  int iVar2;
  unsigned char *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar9;
  __int64 lVar10;



  
  uVar8 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar8 = (int)in_stack_0000006c >> 1;
  }
  iVar2 = (int)param_5 >> 1;
  iVar4 = (int)param_6 >> 1;
  lVar9 = (__int64)iVar4;
  if ((uVar8 & 3) == 0) {
    fn_82CD74F8(in_stack_0000007c,param_3,param_8,uVar8,(__int64)iVar2,lVar9);
    fn_82CD74F8(in_stack_00000084,param_4);
  }
  else if (0 < iVar4) {
    iVar4 = 0;
    in_stack_0000007c = in_stack_0000007c - in_stack_00000084;
    do {
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar2) {
        lVar10 = (__int64)iVar2;
        iVar5 = iVar4;
        do {
          puVar3 = (unsigned char *)(iVar5 + param_3);
          uVar1 = *(unsigned char *)(iVar4 + param_4 + iVar7);
          iVar7 = iVar7 + 1;
          iVar5 = iVar4 + iVar7;
          *(unsigned char *)(in_stack_0000007c + in_stack_00000084 + iVar6) = *puVar3;
          *(unsigned char *)(in_stack_00000084 + iVar6) = uVar1;
          iVar6 = iVar6 + uVar8;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      lVar9 = lVar9 + -1;
      iVar4 = iVar4 + param_8;
      in_stack_00000084 = in_stack_00000084 + 1;
    } while (lVar9 != 0);
  }
  fn_82CD74F8(param_1,param_2,param_7,in_stack_0000006c,param_5,param_6);
  return;
}

