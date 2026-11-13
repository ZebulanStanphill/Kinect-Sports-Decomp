extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern int fn_827EAAF0();
extern int fn_827EB678();
extern int fn_8285A808();
extern int fn_82863400();
extern unsigned int uRam832116a8;
extern unsigned int uRam832116b0;


unsigned __int64 fn_828635C8(void)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned char auStack_50 [4];
  float fStack_4c;
  unsigned char auStack_48 [72];
  
  iVar1 = fn_8285A808();
  lVar5 = 0;
  auStack_50[0] = 0;
  if (*(int *)(iVar1 + 0x94) == 0) {
    iVar4 = 0;
    if (uRam832116a8 != 0) {
      do {
        iVar2 = fn_827EB678(lVar5 + (unsigned __int64)uRam832116b0 + 4,
                             (unsigned __int64)*(unsigned int *)(iVar1 + 0x90) + 4,
                             (unsigned __int64)*(unsigned int *)(iVar1 + 0x90) + 0x10,auStack_50);
        if (iVar2 != 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0xd4;
      } while (iVar4 < (int)(unsigned int)uRam832116a8);
    }
  }
  else {
    iVar4 = 0;
    if (uRam832116a8 != 0) {
      do {
        uVar3 = (unsigned __int64)uRam832116b0;
        fn_82863400((unsigned __int64)*(unsigned int *)(iVar1 + 0x90) + 4,
                      (unsigned __int64)*(unsigned int *)(iVar1 + 0x90) + 0x10,*(unsigned int *)(iVar1 + 0x94),
                      auStack_48,&fStack_4c);
        iVar2 = fn_827EAAF0((double)fStack_4c,lVar5 + uVar3 + 4,auStack_48);
        if (iVar2 != 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0xd4;
      } while (iVar4 < (int)(unsigned int)uRam832116a8);
    }
  }
  return 0;
}

