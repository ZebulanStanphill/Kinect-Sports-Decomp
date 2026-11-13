extern unsigned int *auStack_20;
extern int fn_82579DB0();
extern int fn_82F67FE8();
extern unsigned int lbl_82195518;


unsigned __int64 fn_8257A0B0(unsigned __int64 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  unsigned __int64 auStack_20;
  
  pcVar2 = (char *)fn_82579DB0();
  pcVar4 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar4 - (int)pcVar2 != 1) {
      auStack_20 = lbl_82195518;
      iVar3 = fn_82F67FE8(pcVar2,0xffffffff821c5508,&auStack_20);
      if (iVar3 == 1) {
        return auStack_20;
      }
    }
  }
  return param_1;
}

