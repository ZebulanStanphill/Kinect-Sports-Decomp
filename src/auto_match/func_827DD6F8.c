extern int fn_827D50B8();
extern int fn_827D9ED0();
extern int fn_82A1E810();
extern int fn_82A29AC0();


unsigned __int64 fn_827DD6F8(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  unsigned __int64 uVar3;
  
  uVar1 = *param_2;
  iVar5 = param_2[7];
  iVar4 = fn_827D9ED0(uVar1);
  if ((iVar4 == -1) ||
     ((iVar4 = fn_827D50B8(param_2[1]), iVar4 != 0x3e5 &&
      (iVar4 = fn_827D50B8(param_2[1]), iVar4 != 0x3e4)))) {
    if (*(int *)(iVar5 + 0x10) != 0) {
      fn_82A1E810();
    }
    uVar3 = 6;
  }
  else {
    uVar2 = fn_827D9ED0(uVar1);
    iVar5 = fn_82A29AC0(uVar2,iVar5,param_2 + 6,0);
    if (iVar5 == 0) {
      uVar3 = thunk_FUN_82a2b798();
      uVar3 = -(unsigned __int64)(uVar3 != 0x26) & uVar3;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

