extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82517A50();
extern int fn_827D5798();
extern int fn_827E2B30();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827e2a8c) */

unsigned __int64 fn_827E29F0(unsigned __int64 param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [56];
  
  iVar2 = fn_827D5798(param_2);
  if (iVar2 < 2) {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 0x44);
    if (uVar3 != *(unsigned int *)(param_2 + 0x48)) {
      do {
        fn_82517A50(auStack_38,uVar3);
        (**(int (***)())(iRam00000000 + 8))();
        uVar3 = uVar3 + 8;
      } while ((uVar3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_2 + 0x48));
    }
    fn_827E2B30(auStack_40,(unsigned int *)(param_2 + 0x44),*(unsigned int *)(param_2 + 0x44),
                      *(unsigned int *)(param_2 + 0x48));
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3e5;
  }
  return uVar1;
}

