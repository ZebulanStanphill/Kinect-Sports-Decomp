extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82696D38();


void fn_827AC070(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  unsigned int *apuStack_20 [2];
  
  pcVar5 = "fontFamily";
  pcVar4 = *(char **)*param_2;
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    pcVar4 = "font-family";
  }
  else {
    pcVar5 = "fontSize";
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      pcVar4 = "font-size";
    }
    else {
      pcVar5 = "fontStyle";
      pcVar6 = pcVar4;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        pcVar4 = "font-style";
      }
      else {
        pcVar5 = "fontWeight";
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          pcVar4 = "font-weight";
        }
        else {
          pcVar5 = "letterSpacing";
          pcVar6 = pcVar4;
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            pcVar4 = "letter-spacing";
          }
          else {
            pcVar5 = "marginLeft";
            pcVar6 = pcVar4;
            do {
              cVar1 = *pcVar6;
              cVar2 = *pcVar5;
              if (cVar1 == '\0') break;
              pcVar6 = pcVar6 + 1;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              pcVar4 = "margin-left";
            }
            else {
              pcVar5 = "marginRight";
              pcVar6 = pcVar4;
              do {
                cVar1 = *pcVar6;
                cVar2 = *pcVar5;
                if (cVar1 == '\0') break;
                pcVar6 = pcVar6 + 1;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                pcVar4 = "margin-right";
              }
              else {
                pcVar5 = "textAlign";
                pcVar6 = pcVar4;
                do {
                  cVar1 = *pcVar6;
                  cVar2 = *pcVar5;
                  if (cVar1 == '\0') break;
                  pcVar6 = pcVar6 + 1;
                  pcVar5 = pcVar5 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 == cVar2) {
                  pcVar4 = "text-align";
                }
                else {
                  pcVar5 = "textDecoration";
                  pcVar6 = pcVar4;
                  do {
                    cVar1 = *pcVar6;
                    cVar2 = *pcVar5;
                    if (cVar1 == '\0') break;
                    pcVar6 = pcVar6 + 1;
                    pcVar5 = pcVar5 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 == cVar2) {
                    pcVar4 = "text-decoration";
                  }
                  else {
                    pcVar5 = "textIndent";
                    pcVar6 = pcVar4;
                    do {
                      cVar1 = *pcVar6;
                      cVar2 = *pcVar5;
                      if (cVar1 == '\0') break;
                      pcVar6 = pcVar6 + 1;
                      pcVar5 = pcVar5 + 1;
                    } while (cVar1 == cVar2);
                    if (cVar1 == cVar2) {
                      pcVar4 = "text-indent";
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  fn_8268B610(*(unsigned int *)(param_1 + 8),pcVar4,0xffffffffffffffff);
  fn_8268B610(*(unsigned int *)(param_1 + 8),0xffffffff8201232c,0xffffffffffffffff);
  fn_82696D38(apuStack_20,param_3,*(unsigned int *)(param_1 + 4),0xffffffffffffffff,0);
  fn_8268B610(*(unsigned int *)(param_1 + 8),*apuStack_20[0],0xffffffffffffffff);
  uVar3 = apuStack_20[0][2];
  apuStack_20[0][2] = (int)((unsigned __int64)uVar3 - 1);
  if ((unsigned __int64)uVar3 - 1 == 0) {
    fn_826944C8(apuStack_20[0]);
  }
  fn_8268B610(*(unsigned int *)(param_1 + 8),0xffffffff82015e28,0xffffffffffffffff);
  return;
}

