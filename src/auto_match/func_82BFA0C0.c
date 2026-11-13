extern int fn_82BF9038();
extern unsigned int lbl_8322FD2F;
extern unsigned int lbl_8322FD30;


void fn_82BFA0C0(void)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  if (lbl_8322FD30 == '\0') {
    if (lbl_8322FD2F == '\0') {
      uVar3 = 0x800;
      uVar4 = 0x3800;
      uVar1 = 0xffffffff8322f4f8;
    }
    else {
      uVar3 = 0x4000;
      uVar1 = 0xffffffff8322bcf8;
      uVar4 = 0;
    }
    iVar2 = fn_82BF9038(uVar1,uVar3,uVar4,0);
    if (iVar2 != 0) {
      lbl_8322FD2F = '\0';
    }
  }
  return;
}

