extern unsigned int *auStack_40;
extern unsigned int fStack_2c;
extern unsigned int fStack_34;
extern unsigned int fStack_3c;
extern int fn_8267C498();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_8269A1F0();
extern int fn_8269CEE0();
extern int fn_82F68CC0();
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82714A50(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned char auStack_40 [4];
  float fStack_3c;
  float fStack_34;
  float fStack_2c;
  
  cVar3 = fn_82695468(param_1,0x15);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef1c,0,0);
  }
  else {
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar4 = 0;
    }
    if ((uVar4 & 0xffffffff) != 0) {
      fn_8269CEE0(&uStack_50,uVar4 + 0x30);
      iVar1 = (((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF);
      if ((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) != 0) {
        *(int *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 4) = *(int *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 4) + 1;
        fn_8267C498((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF));
        fn_82F68CC0(auStack_40,(((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x24,0x20);
        uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)fStack_2c)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uVar2 = (((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF);
        uStack_48 = (__int64)fStack_34;
        uStack_50 = (__int64)fStack_3c;
        fn_8269A1F0(*(unsigned int *)(param_1 + 4),
                          (((((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF) & 0xff) << 8 | (((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF) & 0xff) << 8 |
                          uVar2 & 0xff);
        fn_8267C498(iVar1);
      }
    }
  }
  return;
}

