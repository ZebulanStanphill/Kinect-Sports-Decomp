extern unsigned int *auStack_120;
extern unsigned int *auStack_230;
extern unsigned int *auStack_440;
extern int fn_82579C28();
extern int fn_8257A438();
extern int fn_8257A660();
extern int fn_82F674A8();
extern int fn_82F67988();
extern int fn_82F68150();
extern int fn_82F68240();
extern int fn_82F68320();
extern int fn_82F68370();


__int64 fn_8257A140(unsigned __int64 param_1)

{
  char cVar1;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar2;
  char *pcVar5;
  unsigned int auStack_440 [3];
  char acStack_431 [513];
  unsigned char auStack_230 [272];
  unsigned char auStack_120 [288];
  
  fn_82579C28();
  fn_8257A438(0xffffffff821c134c,auStack_230);
  auStack_440[0] = 0;
  iVar3 = fn_82F674A8(auStack_440,auStack_230,0xffffffff821c550c);
  if (iVar3 == 0) {
    acStack_431[1] = 0;
    lVar2 = 0;
    do {
      iVar3 = fn_82F68320(auStack_440[0]);
      if ((iVar3 != 0) ||
         (iVar3 = fn_82F68370(acStack_431 + 1,0x1ff,auStack_440[0]), iVar3 == 0)) break;
      pcVar5 = acStack_431 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + (-1 - (int)(acStack_431 + 1));
      if ((pcVar5 != (char *)0x0) && (acStack_431[(int)pcVar5] == '\n')) {
        acStack_431[(int)pcVar5] = '\0';
      }
      lVar2 = fn_8257A660(param_1,acStack_431 + 1);
    } while (lVar2 == 0);
    fn_82F67988(auStack_440[0]);
  }
  else {
    auStack_440[0] = 0;
    puVar4 = (unsigned int *)fn_82F68240();
    fn_82F68150(auStack_120,0x100,*puVar4);
    lVar2 = 2;
  }
  return lVar2;
}

