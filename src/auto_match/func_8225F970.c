extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8225F670();
extern int fn_8225F748();
extern int fn_825122A8();
extern int fn_82A1C048();
extern int XMemSet();
extern int fn_82E1CAD0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;


void fn_8225F970(void)

{
  char *pcVar1;
  char cVar3;
  int iVar2;
  unsigned __int64 auStack_80 [2];
  unsigned char auStack_70 [112];
  
  pcVar1 = (char *)fn_8225F670();
  iVar2 = lbl_83265988;
  if (*pcVar1 == '\0') {
    iVar2 = fn_8225F670();
    *(unsigned char *)(iVar2 + 1) = 1;
    iVar2 = fn_8225F670();
    if (*(char *)(iVar2 + 2) != '\0') {
      fn_8225F670();
      fn_8225F748();
    }
  }
  else if ((((lbl_832659CD != '\0') && (lbl_83265988 != 0)) &&
           (*(char *)(lbl_83265988 + 0xd8) == '\0')) &&
          (cVar3 = fn_82E1CAD0(1), cVar3 != '\0')) {
    auStack_80[0] = 0;
    fn_825122A8(iVar2,auStack_80);
    fn_82A1C048();
                    /* WARNING: Subroutine does not return */
    XMemSet(auStack_70,0,0x20);
  }
  return;
}

