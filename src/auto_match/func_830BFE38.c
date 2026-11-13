extern unsigned int *auStack_630;
extern int fn_82C75FE0();
extern int fn_830BA448();
extern int fn_830BC7C0();
extern int fn_830BD1B0();
extern int fn_830C0798();
extern int fn_830C0AE0();
extern unsigned int lbl_8329F084;


unsigned __int64 fn_830BFE38(int param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned char auStack_630 [1584];
  
  iVar3 = *(int *)(param_1 + 0x54c8) * 0x8a0 + param_1;
  iVar4 = iVar3 + 0x3e70;
  fn_830BD1B0(param_1,iVar4);
  fn_830C0798(lbl_8329F084,param_1 + 0x57a0);
  uVar1 = fn_830BA448(param_1,iVar4,iVar3 + 0x43f0,0,0,*(unsigned short *)(iVar3 + 0x3ea4) >> 1);
  if (((int)uVar1 == 0) &&
     (uVar1 = fn_830BC7C0(param_1,iVar4,iVar3 + 0x43f0,0,0,*(unsigned short *)(iVar3 + 0x3ea4) >> 1),
     (int)uVar1 == 0)) {
    if (*(int *)(param_1 + 0xf6c) != 0) {
      lVar2 = (__int64)(*(int *)(param_1 + 0xd0) >> 1) * (__int64)*(int *)(iVar3 + 0x43c8);
      fn_82C75FE0(param_1,iVar4,
                        (__int64)(*(int *)(param_1 + 0xcc) >> 1) *
                        (__int64)*(int *)(iVar3 + 0x43c8) + (unsigned __int64)*(unsigned int *)(param_1 + 0xec0) +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xdc),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + lVar2 +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xe0),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xec8) + lVar2 +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xe0),0,*(unsigned int *)(param_1 + 0x8c));
    }
    *(unsigned int *)(param_1 + 0x3d0c) = 0;
    fn_830C0AE0(param_1 + 0x57a0,auStack_630);
    uVar1 = 0;
  }
  return uVar1;
}

