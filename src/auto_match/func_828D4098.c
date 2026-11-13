extern int fn_828D3770();
extern int fn_828D3860();
extern int fn_828D3EE8();
extern int fn_828D3F40();
extern unsigned int uStack_30;


void fn_828D4098(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned char uStack_30;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != iVar1) {
    uVar2 = fn_828D3770(iVar1,iVar1,*(int *)(param_1 + 0x14),uStack_30);
    fn_828D3860(uVar2,*(unsigned int *)(param_1 + 0x18),param_1 + 0x20,uStack_30);
    *(int *)(param_1 + 0x18) = (int)uVar2;
  }
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    uVar2 = fn_828D3EE8(*(int *)(param_1 + 8));
    fn_828D3F40(uVar2,*(unsigned int *)(param_1 + 8),param_1 + 0x10,uStack_30);
    *(int *)(param_1 + 8) = (int)uVar2;
  }
  return;
}

