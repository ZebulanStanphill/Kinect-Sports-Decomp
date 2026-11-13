extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern int fn_82A1E658();
extern int fn_82A29DE8();
extern int fn_82A29FE0();
extern int fn_82E1F8F0();
extern int fn_82F66368();
extern unsigned int uStack_40;


unsigned __int64 fn_82E1FB68(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  char *pcVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  int iVar5;
  char *pcVar6;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned char auStack_3c [12];
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar4 = fn_82E1F8F0();
    uVar3 = fn_82A29DE8(param_2,0x40000000,0,0,2,0x80,0);
    if ((int)uVar3 != -1) {
      pcVar2 = *(char **)(param_1 + 0x18);
      pcVar6 = pcVar2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + (-1 - (int)pcVar2);
      if ((char *)0x1c < pcVar6) {
        pcVar6 = (char *)0x1c;
      }
      uStack_40 = uVar4;
      fn_82F66368(auStack_3c,0x1c,pcVar2,pcVar6);
      iVar5 = fn_82A29FE0(uVar3,&uStack_40,0x20,auStack_50,0);
      if (iVar5 != 0) {
        fn_82A1E658(uVar3);
        return 0;
      }
      fn_82A1E658(uVar3);
    }
  }
  return 0xffffffff80004005;
}

