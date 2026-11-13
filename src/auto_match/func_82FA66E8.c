extern int memcpy();
extern int fn_82FA5F18();
extern int fn_82FA6028();
extern int fn_82FA64D8();
extern int fn_82FA6668();


int fn_82FA66E8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  iVar3 = 0;
  if (param_2 == 0) {
    iVar3 = fn_82FA64D8(param_1,param_3);
    return iVar3;
  }
  if ((param_3 & 0xffffffff) != 0) {
    iVar3 = param_2 + -8;
    uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + -4) & 0xfffffffc;
    uVar5 = 0;
    uVar1 = *(unsigned int *)((*(unsigned int *)(param_2 + -4) & 0xfffffffc) + iVar3 + 8);
    if (((param_3 & 0xffffffff) < 0x40000000) && (uVar5 = param_3 + 3 & 0xfffffffc, uVar5 < 0xd)) {
      uVar5 = 0xc;
    }
    if (((uVar1 & 1) != 0) && (uVar5 < (((unsigned __int64)uVar1 & 0xfffffffc) + uVar4 + 4 & 0xffffffff)))
    {
      if (uVar4 < uVar5) {
        fn_82FA5F18(param_1,iVar3);
        iVar2 = (*(unsigned int *)(param_2 + -4) & 0xfffffffc) + iVar3;
        *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 8) & 0xfffffffd;
        *(unsigned int *)(param_2 + -4) = *(unsigned int *)(param_2 + -4) & 0xfffffffe;
      }
      fn_82FA6028(param_1,iVar3,uVar5);
      return param_2;
    }
    iVar3 = fn_82FA64D8(param_1,param_3);
    if (iVar3 == 0) {
      return 0;
    }
    if ((param_3 & 0xffffffff) <= uVar4) {
      uVar4 = param_3;
    }
    memcpy(iVar3,param_2,uVar4);
  }
  fn_82FA6668(param_1,param_2);
  return iVar3;
}

