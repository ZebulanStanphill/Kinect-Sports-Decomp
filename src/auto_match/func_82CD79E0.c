extern int fn_82A1DDC0();


void fn_82CD79E0(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,__int64 param_6,__int64 param_7,__int64 param_8)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  
  uVar5 = (unsigned __int64)in_stack_0000007c;
  iVar1 = (int)param_5 >> 1;
  iVar2 = (int)param_6 >> 1;
  lVar3 = (__int64)iVar2;
  lVar4 = lVar3;
  if (0 < lVar3) {
    do {
      fn_82A1DDC0(uVar5,param_3,iVar1);
      lVar4 = lVar4 + -1;
      uVar5 = uVar5 + (__int64)((int)in_stack_00000064 >> 1);
      param_3 = param_3 + param_8;
    } while (lVar4 != 0);
  }
  uVar5 = (unsigned __int64)in_stack_00000084;
  if (0 < iVar2) {
    do {
      fn_82A1DDC0(uVar5,param_4,iVar1);
      lVar3 = lVar3 + -1;
      uVar5 = uVar5 + (__int64)((int)in_stack_00000064 >> 1);
      param_4 = param_4 + param_8;
    } while (lVar3 != 0);
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

