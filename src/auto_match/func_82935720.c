extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();
extern int fn_82F68CC0();


unsigned __int64 fn_82935720(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar7;
  unsigned int uVar6;
  char acStack_40 [64];
  
  if (*param_1 == 9) {
    pcVar4 = (char *)param_1[2];
    pcVar5 = pcVar4;
    do {
      cVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar7 != '\0');
    if (((int)pcVar5 - (int)pcVar4) - 1U < 0x14) {
      fn_82F68CC0(acStack_40,pcVar4,(int)pcVar5 - (int)pcVar4);
      pcVar4 = acStack_40;
      while ((acStack_40[0] != '\0' && (iVar3 = fn_82F66A40(*pcVar4), iVar3 != 0))) {
        pcVar4 = pcVar4 + 1;
        acStack_40[0] = *pcVar4;
      }
      if (*pcVar4 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_82F65B18(pcVar4);
      }
      *param_3 = uVar2;
      if (uVar2 < 0x10) {
        if (*pcVar4 != '\0') {
          *pcVar4 = '\0';
          pcVar4 = pcVar4 + 1;
        }
        cVar7 = *pcVar4;
        while ((cVar7 != '\0' && (iVar3 = fn_82F66A80(), iVar3 != 0))) {
          pcVar4 = pcVar4 + 1;
          cVar7 = *pcVar4;
        }
        if (*pcVar4 == '\0') {
          *param_2 = 0;
          pcVar5 = acStack_40;
          pcVar4 = "position";
          do {
            cVar7 = *pcVar5;
            cVar1 = *pcVar4;
            if (cVar7 == '\0') break;
            pcVar5 = pcVar5 + 1;
            pcVar4 = pcVar4 + 1;
          } while (cVar7 == cVar1);
          if (cVar7 == cVar1) {
            *param_2 = 0;
          }
          else {
            pcVar5 = acStack_40;
            pcVar4 = "blendweight";
            do {
              cVar7 = *pcVar5;
              cVar1 = *pcVar4;
              if (cVar7 == '\0') break;
              pcVar5 = pcVar5 + 1;
              pcVar4 = pcVar4 + 1;
            } while (cVar7 == cVar1);
            if (cVar7 == cVar1) {
              uVar6 = 1;
            }
            else {
              pcVar5 = acStack_40;
              pcVar4 = "blendindices";
              do {
                cVar7 = *pcVar5;
                cVar1 = *pcVar4;
                if (cVar7 == '\0') break;
                pcVar5 = pcVar5 + 1;
                pcVar4 = pcVar4 + 1;
              } while (cVar7 == cVar1);
              if (cVar7 == cVar1) {
                uVar6 = 2;
              }
              else {
                pcVar5 = acStack_40;
                pcVar4 = "normal";
                do {
                  cVar7 = *pcVar5;
                  cVar1 = *pcVar4;
                  if (cVar7 == '\0') break;
                  pcVar5 = pcVar5 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (cVar7 == cVar1);
                if (cVar7 == cVar1) {
                  uVar6 = 3;
                }
                else {
                  pcVar5 = acStack_40;
                  pcVar4 = "psize";
                  do {
                    cVar7 = *pcVar5;
                    cVar1 = *pcVar4;
                    if (cVar7 == '\0') break;
                    pcVar5 = pcVar5 + 1;
                    pcVar4 = pcVar4 + 1;
                  } while (cVar7 == cVar1);
                  if (cVar7 == cVar1) {
                    uVar6 = 4;
                  }
                  else {
                    pcVar5 = acStack_40;
                    pcVar4 = "texcoord";
                    do {
                      cVar7 = *pcVar5;
                      cVar1 = *pcVar4;
                      if (cVar7 == '\0') break;
                      pcVar5 = pcVar5 + 1;
                      pcVar4 = pcVar4 + 1;
                    } while (cVar7 == cVar1);
                    if (cVar7 == cVar1) {
                      uVar6 = 5;
                    }
                    else {
                      pcVar5 = acStack_40;
                      pcVar4 = "tangent";
                      do {
                        cVar7 = *pcVar5;
                        cVar1 = *pcVar4;
                        if (cVar7 == '\0') break;
                        pcVar5 = pcVar5 + 1;
                        pcVar4 = pcVar4 + 1;
                      } while (cVar7 == cVar1);
                      if (cVar7 == cVar1) {
                        uVar6 = 6;
                      }
                      else {
                        pcVar5 = acStack_40;
                        pcVar4 = "binormal";
                        do {
                          cVar7 = *pcVar5;
                          cVar1 = *pcVar4;
                          if (cVar7 == '\0') break;
                          pcVar5 = pcVar5 + 1;
                          pcVar4 = pcVar4 + 1;
                        } while (cVar7 == cVar1);
                        if (cVar7 == cVar1) {
                          uVar6 = 7;
                        }
                        else {
                          pcVar5 = acStack_40;
                          pcVar4 = "tessfactor";
                          do {
                            cVar7 = *pcVar5;
                            cVar1 = *pcVar4;
                            if (cVar7 == '\0') break;
                            pcVar5 = pcVar5 + 1;
                            pcVar4 = pcVar4 + 1;
                          } while (cVar7 == cVar1);
                          if (cVar7 == cVar1) {
                            uVar6 = 8;
                          }
                          else {
                            pcVar5 = acStack_40;
                            pcVar4 = "positiont";
                            do {
                              cVar7 = *pcVar5;
                              cVar1 = *pcVar4;
                              if (cVar7 == '\0') break;
                              pcVar5 = pcVar5 + 1;
                              pcVar4 = pcVar4 + 1;
                            } while (cVar7 == cVar1);
                            if (cVar7 == cVar1) {
                              return 0;
                            }
                            pcVar5 = acStack_40;
                            pcVar4 = "color";
                            do {
                              cVar7 = *pcVar5;
                              cVar1 = *pcVar4;
                              if (cVar7 == '\0') break;
                              pcVar5 = pcVar5 + 1;
                              pcVar4 = pcVar4 + 1;
                            } while (cVar7 == cVar1);
                            if (cVar7 == cVar1) {
                              uVar6 = 10;
                            }
                            else {
                              pcVar5 = acStack_40;
                              pcVar4 = "fog";
                              do {
                                cVar7 = *pcVar5;
                                cVar1 = *pcVar4;
                                if (cVar7 == '\0') break;
                                pcVar5 = pcVar5 + 1;
                                pcVar4 = pcVar4 + 1;
                              } while (cVar7 == cVar1);
                              if (cVar7 == cVar1) {
                                uVar6 = 0xb;
                              }
                              else {
                                pcVar5 = acStack_40;
                                pcVar4 = "depth";
                                do {
                                  cVar7 = *pcVar5;
                                  cVar1 = *pcVar4;
                                  if (cVar7 == '\0') break;
                                  pcVar5 = pcVar5 + 1;
                                  pcVar4 = pcVar4 + 1;
                                } while (cVar7 == cVar1);
                                if (cVar7 == cVar1) {
                                  uVar6 = 0xc;
                                }
                                else {
                                  pcVar5 = acStack_40;
                                  pcVar4 = "sample";
                                  do {
                                    cVar7 = *pcVar5;
                                    cVar1 = *pcVar4;
                                    if (cVar7 == '\0') break;
                                    pcVar5 = pcVar5 + 1;
                                    pcVar4 = pcVar4 + 1;
                                  } while (cVar7 == cVar1);
                                  if (cVar7 != cVar1) {
                                    return 0;
                                  }
                                  uVar6 = 0xd;
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
            }
            *param_2 = uVar6;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

