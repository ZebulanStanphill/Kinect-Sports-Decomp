extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83016050();
extern int fn_830162F8();
extern unsigned int lbl_831BC768;


int fn_830161E8(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  iVar1 = fn_83016050();
  if (iVar1 == 0) {
    iVar1 = fn_82FA5060(lbl_831BC768,0x324);
    if (iVar1 != 0) {
      RtlInitializeCriticalSection();
      *(unsigned int *)(iVar1 + 800) = 0;
      *(unsigned int *)(iVar1 + 800) = 0;
      puVar3 = (unsigned int *)(iVar1 + 0x18);
      lVar4 = 0xc1;
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar2 = fn_830162F8(param_1 + 0x1c,param_2,iVar1);
      if (iVar2 == 0) {
        fn_82FA5190(lbl_831BC768,iVar1);
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

