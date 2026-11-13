typedef unsigned char bool;
#define true 1
#define false 0


bool fn_829355C0(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_1;
  pcVar3 = param_1 + 1;
  if (cVar1 != 'o') {
    if ((cVar1 != 'r') && (cVar1 != 'e')) {
      return false;
    }
    if (cVar1 != 'o') {
      if (cVar1 == 'e') {
        cVar1 = *pcVar3;
        pcVar3 = param_1 + 2;
        if (cVar1 == 'A') {
          return *pcVar3 == '\0';
        }
        if (cVar1 != 'M') {
          return false;
        }
      }
      goto LAB_829356c0;
    }
  }
  pcVar4 = "Pts";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    return true;
  }
  pcVar4 = "Pos";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    return true;
  }
  if (*pcVar3 == 'C') {
    pcVar3 = param_1 + 2;
  }
LAB_829356c0:
  do {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      return true;
    }
    pcVar3 = pcVar3 + 1;
  } while (('/' < cVar1) && (cVar1 < ':'));
  return false;
}

