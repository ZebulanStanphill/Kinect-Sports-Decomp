extern int fn_82CD7760();


void fn_82CD7E98(unsigned __int64 param_1, unsigned __int64 param_2, int param_3, int param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, int param_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, unsigned __int64 unused_arg_11, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, int in_stack_0000007c, int in_stack_00000084)

{
  unsigned char uVar1;
  int iVar2;
  unsigned char *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  __int64 lVar11;
  __int64 lVar12;



  
  uVar10 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar10 = (int)in_stack_0000006c >> 1;
  }
  iVar2 = (int)param_5 >> 1;
  iVar4 = (int)param_6 >> 1;
  lVar11 = (__int64)iVar4;
  if ((uVar10 & 3) == 0) {
    fn_82CD7760(in_stack_0000007c,param_3,param_8,uVar10,(__int64)iVar2,lVar11);
    fn_82CD7760(in_stack_00000084,param_4);
  }
  else if (0 < iVar4) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar8 = 0;
      iVar9 = 0;
      if (0 < iVar2) {
        lVar12 = (__int64)iVar2;
        iVar7 = iVar5;
        iVar6 = iVar4;
        do {
          puVar3 = (unsigned char *)(iVar7 + param_3);
          uVar1 = *(unsigned char *)(iVar5 + param_4 + iVar9);
          iVar9 = iVar9 + 1;
          iVar7 = iVar5 + iVar9;
          *(unsigned char *)(iVar6 + in_stack_0000007c) = *puVar3;
          *(unsigned char *)(iVar4 + in_stack_00000084 + iVar8) = uVar1;
          iVar8 = iVar8 + uVar10;
          iVar6 = iVar4 + iVar8;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      lVar11 = lVar11 + -1;
      iVar5 = iVar5 + param_8;
      iVar4 = iVar4 + -1;
    } while (lVar11 != 0);
  }
  fn_82CD7760(param_1,param_2,param_7,in_stack_0000006c,param_5,param_6);
  return;
}

