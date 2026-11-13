typedef unsigned char bool;
extern int fn_82E27090();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_821533C8;
extern unsigned int lbl_821533D8;
extern unsigned int lbl_821533E8;
extern unsigned int lbl_821533F8;
extern unsigned int lbl_82153408;
extern unsigned int lbl_82153418;
extern unsigned int lbl_82153428;
extern unsigned int lbl_82153448;
extern unsigned int lbl_82153838;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;


unsigned __int64 fn_82E27130(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,__int64 param_4)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  unsigned char *pbVar11;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  
  uVar7 = (unsigned int)param_4;
  pbVar11 = (unsigned char *)&stack0x00000010;
  pbVar9 = &lbl_821533C8;
  do {
    bVar2 = *pbVar11;
    bVar3 = *pbVar9;
    if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
    pbVar11 = pbVar11 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar11 != &stack0x00000020);
  if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
    return 0;
  }
  pbVar11 = (unsigned char *)&stack0x00000010;
  pbVar9 = (unsigned char *)&lbl_8202E618;
  do {
    bVar2 = *pbVar11;
    bVar3 = *pbVar9;
    if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
    pbVar11 = pbVar11 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar11 != &stack0x00000020);
  if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
    return 0;
  }
  pbVar11 = (unsigned char *)&stack0x00000010;
  pbVar9 = &lbl_821533D8;
  do {
    bVar2 = *pbVar11;
    bVar3 = *pbVar9;
    if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
    pbVar11 = pbVar11 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar11 != &stack0x00000020);
  if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
    if (param_3 == (unsigned int *)0x0) {
      return 0xffffffffc00d36b4;
    }
    if (uVar7 < 0x58) {
      return 0xffffffffc00d36b4;
    }
    param_4 = param_4 + -0x30;
LAB_82e272bc:
    param_3 = param_3 + 0xc;
  }
  else {
    pbVar11 = (unsigned char *)&stack0x00000010;
    pbVar9 = (unsigned char *)&lbl_821533E8;
    do {
      bVar2 = *pbVar11;
      bVar3 = *pbVar9;
      if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
      pbVar11 = pbVar11 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar11 != &stack0x00000020);
    if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
      if (param_3 == (unsigned int *)0x0) {
        return 0xffffffffc00d36b4;
      }
      if (uVar7 < 0x70) {
        return 0xffffffffc00d36b4;
      }
      param_4 = param_4 + -0x48;
    }
    else {
      pbVar11 = (unsigned char *)&stack0x00000010;
      pbVar9 = (unsigned char *)&lbl_82153408;
      do {
        bVar2 = *pbVar11;
        bVar3 = *pbVar9;
        if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar11 != &stack0x00000020);
      if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
        if (param_3 == (unsigned int *)0x0) {
          return 0xffffffffc00d36b4;
        }
        if (uVar7 < 0x60) {
          return 0xffffffffc00d36b4;
        }
        if (0x4000 < param_3[0x17]) {
          return 0xffffffffc00d36b4;
        }
        if (uVar7 < param_3[0x17] + 0x60) {
          return 0xffffffffc00d36b4;
        }
        param_4 = 0x28;
        goto LAB_82e272bc;
      }
      pbVar11 = (unsigned char *)&stack0x00000010;
      pbVar9 = &lbl_82153448;
      do {
        bVar2 = *pbVar11;
        bVar3 = *pbVar9;
        if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar11 != &stack0x00000020);
      if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) != 0) {
        pbVar11 = (unsigned char *)&stack0x00000010;
        pbVar9 = (unsigned char *)&lbl_821533F8;
        do {
          bVar2 = *pbVar11;
          bVar3 = *pbVar9;
          if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
          pbVar11 = pbVar11 + 1;
          pbVar9 = pbVar9 + 1;
        } while (pbVar11 != &stack0x00000020);
        if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
          if (param_3 == (unsigned int *)0x0) {
            return 0xffffffffc00d36b4;
          }
          if (uVar7 < 0x12) {
            return 0xffffffffc00d36b4;
          }
          if (0x4000 < *(unsigned short *)(param_3 + 4)) {
            return 0xffffffffc00d36b4;
          }
          bVar1 = uVar7 < *(unsigned short *)(param_3 + 4) + 0x12;
        }
        else {
          pbVar11 = (unsigned char *)&stack0x00000010;
          pbVar9 = (unsigned char *)&lbl_82153838;
          do {
            bVar2 = *pbVar11;
            bVar3 = *pbVar9;
            if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
            pbVar11 = pbVar11 + 1;
            pbVar9 = pbVar9 + 1;
          } while (pbVar11 != &stack0x00000020);
          if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
            if (param_3 == (unsigned int *)0x0) {
              return 0xffffffffc00d36b4;
            }
            if (uVar7 < 0xa4) {
              return 0xffffffffc00d36b4;
            }
            uVar4 = *param_3;
            if (uVar4 < 0xa4) {
              return 0xffffffffc00d36b4;
            }
            if (0x4000 < uVar4) {
              return 0xffffffffc00d36b4;
            }
            if (0x100 < param_3[0x29]) {
              return 0xffffffffc00d36b4;
            }
            uVar10 = (param_3[0x29] + 0x29) * 4;
            if (uVar7 < uVar10) {
              return 0xffffffffc00d36b4;
            }
            if (uVar4 < uVar10) {
              return 0xffffffffc00d36b4;
            }
            bVar1 = uVar7 < uVar4;
          }
          else {
            pbVar11 = (unsigned char *)&stack0x00000010;
            pbVar9 = (unsigned char *)&lbl_82153428;
            do {
              bVar2 = *pbVar11;
              bVar3 = *pbVar9;
              if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
              pbVar11 = pbVar11 + 1;
              pbVar9 = pbVar9 + 1;
            } while (pbVar11 != &stack0x00000020);
            if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) != 0) {
              pbVar11 = (unsigned char *)&stack0x00000010;
              pbVar9 = &lbl_82153418;
              do {
                bVar2 = *pbVar11;
                bVar3 = *pbVar9;
                if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
                pbVar11 = pbVar11 + 1;
                pbVar9 = pbVar9 + 1;
              } while (pbVar11 != &stack0x00000020);
              if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) != 0) {
                return 0xffffffffc00d3e98;
              }
              iVar8 = 8;
              if (param_3 == (unsigned int *)0x0) {
                return 0xffffffffc00d36b4;
              }
              if (uVar7 < 8) {
                return 0xffffffffc00d36b4;
              }
              uVar4 = param_3[1];
              if (0x400 < uVar4) {
                return 0xffffffffc00d36b4;
              }
              param_3 = param_3 + 2;
              uVar10 = 0;
              if (uVar4 == 0) {
                return 0;
              }
              do {
                if (uVar7 < iVar8 + 0x50U) {
                  return 0xffffffffc00d36b4;
                }
                uVar5 = param_3[0x12];
                if (0x4000 < uVar5) {
                  return 0xffffffffc00d36b4;
                }
                if (uVar7 < uVar5 + 0x50 + iVar8) {
                  return 0xffffffffc00d36b4;
                }
                uVar10 = uVar10 + 1;
                uVar5 = uVar5 + 0x57 & 0xfffffff8;
                iVar8 = uVar5 + iVar8;
                param_3 = (unsigned int *)(uVar5 + (int)param_3);
              } while (uVar10 != uVar4);
              return 0;
            }
            if (param_3 == (unsigned int *)0x0) {
              return 0xffffffffc00d36b4;
            }
            bVar1 = uVar7 < 0x20;
          }
        }
        if (bVar1) {
          return 0xffffffffc00d36b4;
        }
        return 0;
      }
      if (param_3 == (unsigned int *)0x0) {
        return 0xffffffffc00d36b4;
      }
      if (uVar7 < 0x84) {
        return 0xffffffffc00d36b4;
      }
      if (0x4000 < param_3[0x1d]) {
        return 0xffffffffc00d36b4;
      }
      if (uVar7 < param_3[0x1d] + 0x84) {
        return 0xffffffffc00d36b4;
      }
      param_4 = 0x28;
    }
    param_3 = param_3 + 0x12;
  }
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  uVar6 = fn_82E27090(param_3,param_4);
  return uVar6;
}

