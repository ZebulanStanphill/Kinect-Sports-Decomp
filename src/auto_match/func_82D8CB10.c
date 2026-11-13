extern int fn_82CEFB20();
extern int fn_82DBB3F8();


void fn_82D8CB10(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_3 + 4) + 0xcc);
  if (*(short *)(iVar1 + 0x20) == -1) {
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 0xcc);
  }
  if (*(int *)(param_3 + 0x10) == 2) {
    uVar2 = *(unsigned __int64 *)(iVar1 + 0x28);
    fn_82CEFB20(iVar1 + 0x28);
    fn_82DBB3F8(param_1,param_2,*(unsigned int *)(param_3 + 0xc),param_4,param_5,iVar1);
    *(unsigned __int64 *)(iVar1 + 0x28) = uVar2;
  }
  else {
    fn_82DBB3F8(param_1,param_2,*(unsigned int *)(param_3 + 0xc),param_4,param_5,iVar1);
  }
  return;
}

