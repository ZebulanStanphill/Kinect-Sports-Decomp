extern int fn_82FF5DA8();
extern int fn_83037AA0();
extern int fn_83037C10();
extern unsigned int lbl_831BC768;
extern unsigned int uRam83264320;


void fn_8300F5B0(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(unsigned int *)(param_1 + 0x98) = 0;
  uVar1 = uRam83264320;
  uVar2 = fn_83037AA0();
  trapWord(6,uVar2,0);
  iVar3 = fn_83037C10(param_1 + 0x20,(unsigned __int64)uVar1 / (uVar2 & 0xffffffff));
  if ((iVar3 == 1) &&
     (iVar3 = fn_82FF5DA8(param_1 + 0x50,0x20,0xffffffffffffffff,lbl_831BC768), iVar3 == 1)) {
    fn_82FF5DA8(param_1 + 0x70,0x20,0xffffffffffffffff,lbl_831BC768);
  }
  return;
}

