extern unsigned int lbl_83175598;
extern unsigned int lbl_8322B4F0;


void fn_8312AAE0(void)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = lbl_83175598;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  lbl_8322B4F0 = pcVar2 + (-1 - (int)lbl_83175598);
  return;
}

