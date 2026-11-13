extern unsigned int lbl_83265988;


void fn_82484998(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  
  iVar1 = lbl_83265988;
  pcVar2 = (char *)(param_1 + 0x234);
  cVar4 = 'b';
  cVar5 = *pcVar2;
  if (cVar5 == 'b') {
    cVar5 = 'b';
    pcVar3 = pcVar2;
    do {
      pcVar3 = pcVar3 + 1;
      if (cVar5 == '\0') goto LAB_82484a08;
      cVar4 = pcVar3[(int)"boxing_main" - (int)pcVar2];
      cVar5 = *pcVar3;
    } while (cVar5 == cVar4);
  }
  if (cVar5 == cVar4) {
LAB_82484a08:
    if (*(int *)(*(int *)(lbl_83265988 + 0x100) + 0x110) != param_2) {
      *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x110) = param_2;
    }
  }
  else {
    cVar5 = *pcVar2;
    cVar4 = 'f';
    if (cVar5 == 'f') {
      cVar5 = 'f';
      pcVar3 = pcVar2;
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar5 == '\0') goto LAB_82484a6c;
        cVar4 = pcVar3[(int)"football_main" - (int)pcVar2];
        cVar5 = *pcVar3;
      } while (cVar5 == cVar4);
    }
    if (cVar5 == cVar4) {
LAB_82484a6c:
      if (*(int *)(*(int *)(lbl_83265988 + 0x100) + 0x114) != param_2) {
        *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x114) = param_2;
      }
    }
    else {
      cVar5 = *pcVar2;
      cVar4 = 'v';
      if (cVar5 == 'v') {
        cVar5 = 'v';
        pcVar3 = pcVar2;
        do {
          pcVar3 = pcVar3 + 1;
          if (cVar5 == '\0') goto LAB_82484ad0;
          cVar4 = pcVar3[(int)"volleyball_main" - (int)pcVar2];
          cVar5 = *pcVar3;
        } while (cVar5 == cVar4);
      }
      if (cVar5 == cVar4) {
LAB_82484ad0:
        if (*(int *)(*(int *)(lbl_83265988 + 0x100) + 0x11c) != param_2) {
          *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x11c) = param_2;
        }
      }
      else {
        cVar5 = *pcVar2;
        cVar4 = 't';
        if (cVar5 == 't') {
          cVar5 = 't';
          pcVar3 = pcVar2;
          do {
            pcVar3 = pcVar3 + 1;
            if (cVar5 == '\0') goto LAB_82484b34;
            cVar4 = pcVar3[(int)"tabletennis_main" - (int)pcVar2];
            cVar5 = *pcVar3;
          } while (cVar5 == cVar4);
        }
        if (cVar5 == cVar4) {
LAB_82484b34:
          if (*(int *)(*(int *)(lbl_83265988 + 0x100) + 0x118) != param_2) {
            *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x118) = param_2;
          }
        }
        else {
          cVar5 = *pcVar2;
          cVar4 = 'b';
          if (cVar5 == 'b') {
            cVar5 = 'b';
            pcVar3 = pcVar2;
            do {
              pcVar3 = pcVar3 + 1;
              if (cVar5 == '\0') goto LAB_82484b98;
              cVar4 = pcVar3[(int)"bowling_main" - (int)pcVar2];
              cVar5 = *pcVar3;
            } while (cVar5 == cVar4);
          }
          if (cVar5 == cVar4) {
LAB_82484b98:
            if (*(int *)(*(int *)(lbl_83265988 + 0x100) + 0x10c) != param_2) {
              *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x10c) = param_2;
            }
          }
          else {
            pcVar2 = strstr(pcVar2,"athletics_main");
            if ((pcVar2 != (char *)0x0) && (*(int *)(*(int *)(iVar1 + 0x100) + 0x108) != param_2)) {
              *(int *)(*(int *)(iVar1 + 0x100) + 0x108) = param_2;
            }
          }
        }
      }
    }
  }
  return;
}

