extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696BC8();
extern int fn_826B32D0();


void fn_82750AC0(int param_1)

{
  char cVar2;
  int iVar1;
  int iVar3;
  
  cVar2 = fn_82695468(param_1,0x27);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edec,0,0);
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
      iVar1 = fn_826B32D0(*(int *)(param_1 + 0x18),*(unsigned int *)(iVar1 + 0x29c),iVar1 + 0xa4
                                ,0,0xffffffffffffffff);
      *(unsigned char *)(iVar1 + 0x30) = *(unsigned char *)(iVar3 + 0x30);
      *(unsigned char *)(iVar1 + 0x31) = *(unsigned char *)(iVar3 + 0x31);
      *(unsigned char *)(iVar1 + 0x32) = *(unsigned char *)(iVar3 + 0x32);
      *(unsigned char *)(iVar1 + 0x33) = *(unsigned char *)(iVar3 + 0x33);
      *(unsigned short *)(iVar1 + 0x34) = *(unsigned short *)(iVar3 + 0x34);
      *(unsigned short *)(iVar1 + 0x36) = *(unsigned short *)(iVar3 + 0x36);
      *(unsigned int *)(iVar1 + 0x38) = *(unsigned int *)(iVar3 + 0x38);
      fn_82696BC8(*(unsigned int *)(param_1 + 4),iVar1);
      if (iVar1 != 0) {
        fn_826824B0(iVar1);
      }
    }
  }
  return;
}

