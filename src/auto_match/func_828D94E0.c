extern int fn_82882158();
extern int fn_82897BD0();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828B0488();
extern int fn_828B0528();
extern int fn_828B0ED0();
extern int fn_828B13E8();
extern int fn_828B1468();
extern int fn_828B14C0();
extern int fn_828EDD40();


void fn_828D94E0(int param_1,unsigned __int64 param_2)

{
  char cVar3;
  int iVar1;
  int iVar2;
  unsigned __int64 uVar4;
  
  cVar3 = fn_828B0528(*(unsigned int *)(param_1 + 0x14));
  if ((cVar3 != '\0') && (iVar1 = fn_828B0488(param_1), iVar1 != 0)) {
    uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x8c);
    if (*(char *)(iVar1 + 0x26) == '\0') {
      fn_82897BD0(iVar1);
      iVar2 = fn_82882158();
      if (iVar2 == -1) {
        iVar1 = fn_828B0ED0((unsigned __int64)*(unsigned int *)(iVar1 + 0x4c) + 0x38,1,0);
        if (iVar1 != 0) {
          fn_828B1468(param_1,4);
          return;
        }
        if (param_2 < 0x1d4d) {
          return;
        }
      }
    }
    else {
      cVar3 = fn_828AD488();
      if (cVar3 != '\0') {
        fn_828B13E8(param_1,1,*(unsigned char *)(param_1 + 0x1c));
        fn_828B14C0(param_1,uVar4 + 0x14,uVar4 + 0x40);
        fn_828B1468(param_1,6);
        return;
      }
      cVar3 = fn_828AD0F8(*(unsigned int *)(param_1 + 0x14));
      if ((cVar3 != '\0') && (cVar3 = fn_828EDD40(uVar4), cVar3 != '\0')) {
        fn_828B13E8(param_1,1,*(unsigned char *)(param_1 + 0x1c));
        fn_828B1468(param_1,3);
        return;
      }
    }
  }
  fn_828B1468(param_1,7);
  return;
}

