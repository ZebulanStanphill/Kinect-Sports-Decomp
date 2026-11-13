extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_822C8A18();
extern int fn_823F2E20();
extern unsigned int iStack_1c;


void fn_82308DF0(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x114);
  uVar1 = fn_822C8A18(auStack_20,uVar2,0xffffffff821ae914);
  fn_823F2E20(uVar2 + 0x28,uVar1);
  if (iStack_1c != 0) {
    fn_822315A0();
    return;
  }
  return;
}

