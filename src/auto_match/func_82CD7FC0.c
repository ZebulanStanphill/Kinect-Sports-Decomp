extern int fn_82A1DDC0();


void fn_82CD7FC0(__int64 param_1,__int64 param_2,int param_3,int param_4,unsigned __int64 param_5,
                  __int64 param_6,__int64 param_7,int param_8)

{
  unsigned char uVar1;
  int iVar2;
  unsigned char *puVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  int in_stack_0000007c;
  
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    in_stack_0000006c = (int)in_stack_0000006c >> 1;
  }
  iVar2 = (int)param_5 >> 1;
  lVar5 = (__int64)((int)param_6 >> 1);
  if (0 < lVar5) {
    iVar8 = 0;
    do {
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar2) {
        lVar9 = (__int64)iVar2;
        iVar4 = iVar8;
        do {
          puVar3 = (unsigned char *)(iVar4 + param_3);
          uVar1 = *(unsigned char *)(iVar8 + param_4 + iVar7);
          iVar7 = iVar7 + 1;
          iVar4 = iVar8 + iVar7;
          *(unsigned char *)(in_stack_0000007c + iVar6) = *puVar3;
          *(unsigned char *)(in_stack_0000007c + 1 + iVar6) = uVar1;
          iVar6 = iVar6 + in_stack_0000006c * 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar5 = lVar5 + -1;
      iVar8 = iVar8 + param_8;
      in_stack_0000007c = in_stack_0000007c + ((int)in_stack_00000064 >> 1) * 2;
    } while (lVar5 != 0);
  }
  if (0 < (int)param_6) {
    do {
      fn_82A1DDC0(param_1,param_2,param_5);
      param_6 = param_6 + -1;
      param_1 = param_1 + (unsigned __int64)in_stack_00000064;
      param_2 = param_2 + param_7;
    } while (param_6 != 0);
  }
  return;
}

