extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A8BBF8();
extern int fn_8314304C();


__int64 fn_82A8BC78(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  *param_4 = 0;
  uVar2 = fn_8265C940(param_3,0x20980000);
  if (uVar2 != 0) {
    uVar3 = fn_8265C940(0x59c0,0x20980000);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82A8BBF8(uVar3,param_3,uVar2);
    }
    *param_4 = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
      lVar4 = fn_8314304C(param_1,param_2,uVar3 + 0x2c,uVar3 + 0x10);
      if (-1 < lVar4) {
        return lVar4;
      }
      goto LAB_82a8bd0c;
    }
  }
  lVar4 = -0x7ff8fff2;
LAB_82a8bd0c:
  iVar1 = *param_4;
  if (iVar1 == 0) {
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8265C990(uVar2,0x20980000);
    }
  }
  else {
    (**(int (***)())(*(int *)(iVar1 + 8) + 4))(iVar1 + 8);
    *param_4 = 0;
  }
  return lVar4;
}

