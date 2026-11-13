extern int fn_8265CCA8();
extern int fn_8265CE30();
extern int fn_8266C340();


void fn_82667720(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcStack00000014;
  char *pcStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  
  pcStack00000014 = param_1;
  pcStack_1c = param_1;
  if (param_1 != (char *)0x0) {
    while (iVar2 = fn_8265CCA8(*pcStack_1c), iVar2 != 0) {
      pcStack_1c = pcStack_1c + 1;
    }
    if (*pcStack_1c == '\0') {
      *pcStack00000014 = '\0';
    }
    else {
      iVar2 = fn_8265CE30(pcStack_1c);
      pcStack_20 = pcStack_1c + iVar2;
      do {
        pcVar1 = pcStack_20;
        pcStack_20 = pcVar1 + -1;
        iVar2 = fn_8265CCA8(*pcStack_20);
      } while (iVar2 != 0);
      if (pcStack_20 < pcStack_1c) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82001ca8,0x76,0xffffffff82001d0c);
      }
      *pcVar1 = '\0';
      if (pcStack00000014 < pcStack_1c) {
        pcStack_18 = pcStack00000014;
        for (; pcStack_1c <= pcVar1; pcStack_1c = pcStack_1c + 1) {
          *pcStack_18 = *pcStack_1c;
          pcStack_18 = pcStack_18 + 1;
        }
      }
    }
  }
  return;
}

