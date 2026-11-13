extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8225F670();
extern int fn_825122A8();
extern int fn_82A1C048();
extern int fn_82A1EFC0();
extern int fn_82E1CAD0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;


void fn_8225FAE0(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  unsigned __int64 auStack_a0 [2];
  unsigned char auStack_90 [144];
  
  pcVar2 = (char *)fn_8225F670();
  iVar1 = lbl_83265988;
  if (*pcVar2 != '\0') {
    if ((((lbl_832659CD != '\0') && (lbl_83265988 != 0)) && (*(char *)(lbl_83265988 + 0xd8) == '\0')
        ) && (cVar3 = fn_82E1CAD0(2), cVar3 != '\0')) {
      auStack_a0[0] = 0;
      fn_825122A8(iVar1,auStack_a0);
      fn_82A1C048();
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_90,0,0x20);
    }
  }
  return;
}

