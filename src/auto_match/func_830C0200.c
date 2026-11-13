extern unsigned int *auStack_630;
extern int fn_82C76868();
extern int fn_82C77B70();
extern int fn_830C0798();
extern int fn_830C0AE0();
extern int fn_830CE8E0();
extern int fn_830CED00();
extern int fn_830DB5C0();
extern int fn_830FE568();
extern int fn_831067E8();
extern unsigned int lbl_8329F084;


unsigned __int64 fn_830C0200(int param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned char auStack_630 [1536];
  
  iVar3 = *(int *)(param_1 + 0x54c8) * 0x8a0 + param_1;
  iVar6 = iVar3 + 0x3e70;
  fn_830CE8E0(param_1,iVar6);
  fn_830C0798(lbl_8329F084,param_1 + 0x57a0);
  iVar5 = iVar3 + 0x43f0;
  uVar1 = fn_830CED00(param_1,iVar6,iVar5,0,0,*(unsigned short *)(iVar3 + 0x3ea4) >> 1);
  if (((((int)uVar1 == 0) && (uVar1 = fn_831067E8(param_1,iVar6,iVar5), (int)uVar1 == 0)) &&
      (uVar1 = fn_830FE568(param_1,iVar6,iVar5,0,0,*(unsigned short *)(iVar3 + 0x3ea4) >> 1),
      (int)uVar1 == 0)) &&
     (uVar1 = fn_830DB5C0(param_1,iVar6,iVar5,0,0,*(unsigned short *)(iVar3 + 0x3ea4) >> 1),
     (int)uVar1 == 0)) {
    if (*(int *)(param_1 + 0xf6c) != 0) {
      fn_82C77B70(param_1,iVar6,0,0,*(unsigned short *)(iVar3 + 0x3ea4) >> 1);
      lVar2 = (__int64)(*(int *)(param_1 + 0xd0) >> 1) * (__int64)*(int *)(iVar3 + 0x43c8);
      fn_82C76868(param_1,iVar6,
                        (__int64)(*(int *)(param_1 + 0xcc) >> 1) *
                        (__int64)*(int *)(iVar3 + 0x43c8) + (unsigned __int64)*(unsigned int *)(param_1 + 0xec0) +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xdc),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + lVar2 +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xe0),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xec8) + lVar2 +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xe0),0,*(unsigned short *)(iVar3 + 0x3ea4) >> 1);
    }
    fn_830C0AE0(param_1 + 0x57a0,auStack_630);
    if (((*(int *)(param_1 + 0xf6c) != 0) || (*(int *)(param_1 + 0x3a28) != 0)) ||
       (uVar4 = 0, *(int *)(param_1 + 0x3b9c) != -1)) {
      uVar4 = 1;
    }
    *(unsigned int *)(param_1 + 0x3d08) = uVar4;
    uVar1 = 0;
    *(unsigned int *)(param_1 + 0x3cf0) = 1;
  }
  return uVar1;
}

