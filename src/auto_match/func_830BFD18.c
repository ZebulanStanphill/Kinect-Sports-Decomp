extern unsigned int *auStack_630;
extern int fn_830BD430();
extern int fn_830BD4B0();
extern int fn_830BF9A0();
extern int fn_830C0798();
extern int fn_830C0AE0();
extern int fn_830EF060();
extern int fn_830EF208();
extern unsigned int lbl_8329F084;


unsigned __int64 fn_830BFD18(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_630 [1536];
  
  iVar2 = param_1 + 0x3e70;
  fn_830BD430(param_1,iVar2);
  fn_830C0798(lbl_8329F084,param_1 + 0x57a0);
  uVar1 = fn_830BD4B0(param_1,iVar2,param_1 + 0x43f0,0,0,*(unsigned short *)(param_1 + 0x3ea4) >> 1);
  if (((int)uVar1 == 0) &&
     (uVar1 = fn_830BF9A0(param_1,iVar2,param_1 + 0x43f0,0,0,
                                *(unsigned short *)(param_1 + 0x3ea4) >> 1), (int)uVar1 == 0)) {
    if (*(int *)(param_1 + 0xf6c) != 0) {
      fn_830EF060(iVar2,*(unsigned int *)(param_1 + 0x110));
      fn_830EF208(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xec0) +
                                (unsigned __int64)*(unsigned int *)(param_1 + 0xdc),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0)
                        ,(unsigned __int64)*(unsigned int *)(param_1 + 0xe0) +
                         (unsigned __int64)*(unsigned int *)(param_1 + 0xec8),0);
      fn_830EF208(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xec0) +
                                (unsigned __int64)*(unsigned int *)(param_1 + 0xdc),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0)
                        ,(unsigned __int64)*(unsigned int *)(param_1 + 0xe0) +
                         (unsigned __int64)*(unsigned int *)(param_1 + 0xec8),1);
    }
    *(unsigned int *)(param_1 + 0x3cf0) = 0;
    *(unsigned int *)(param_1 + 0x3ce8) = 0;
    *(unsigned int *)(param_1 + 0x3d0c) = 0;
    fn_830C0AE0(param_1 + 0x57a0,auStack_630);
    uVar1 = 0;
  }
  return uVar1;
}

