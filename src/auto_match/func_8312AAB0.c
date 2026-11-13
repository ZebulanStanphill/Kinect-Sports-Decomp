extern unsigned int lbl_8317546C;
extern unsigned int lbl_8322B26C;


void fn_8312AAB0(void)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = lbl_8317546C;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  lbl_8322B26C = pcVar2 + (-1 - (int)lbl_8317546C);
  return;
}

