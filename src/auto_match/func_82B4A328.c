extern int fn_82AA66A8();
extern int fn_82B466F8();
extern int fn_82B47730();
extern int fn_82F6DCE0();
extern unsigned int lbl_83160F7C;


void fn_82B4A328(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  char cVar1;
  char *pcVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  
  if (param_2 < 0xf) {
    pcVar2 = (&lbl_83160F7C)[param_2];
    if ((pcVar2 != (char *)0x0) && (pcVar4 = pcVar2, (param_3 & 0xffffffff) < 10)) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar3 = fn_82B47730(param_1,pcVar4 + (1 - (int)pcVar2),0);
      fn_82F6DCE0(uVar3,pcVar4 + (1 - (int)pcVar2),0xffffffff820d7c44,
                        (&lbl_83160F7C)[param_2],param_3);
      fn_82B466F8(param_1,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

