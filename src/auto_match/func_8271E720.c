extern int fn_82695370();
extern int fn_82695608();
extern int fn_826A7398();
extern int fn_826C1BA0();
extern int fn_826FCCF8();


unsigned __int64
fn_8271E720(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  char cVar1;
  char cVar2;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
    iVar4 = fn_826A7398(param_2);
    pcVar8 = "disableFocusAutoRelease";
    pcVar10 = *(char **)*param_3;
    pcVar9 = pcVar10;
    do {
      cVar1 = *pcVar9;
      cVar2 = *pcVar8;
      if (cVar1 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar5 = fn_82695608(param_4,param_2);
      uVar5 = (uVar5 & 3) << 0x16 | *(unsigned int *)(iVar4 + 0xb00) & 0xff3fffff;
    }
    else {
      pcVar8 = "alwaysEnableArrowKeys";
      pcVar9 = pcVar10;
      do {
        cVar1 = *pcVar9;
        cVar2 = *pcVar8;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar5 = fn_82695608(param_4,param_2);
        uVar5 = (uVar5 & 3) << 0x18 | *(unsigned int *)(iVar4 + 0xb00) & 0xfcffffff;
      }
      else {
        pcVar8 = "alwaysEnableKeyboardPress";
        pcVar9 = pcVar10;
        do {
          cVar1 = *pcVar9;
          cVar2 = *pcVar8;
          if (cVar1 == '\0') break;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar5 = fn_82695608(param_4,param_2);
          uVar5 = (uVar5 & 3) << 0x1a | *(unsigned int *)(iVar4 + 0xb00) & 0xf3ffffff;
        }
        else {
          pcVar8 = "disableFocusRolloverEvent";
          pcVar9 = pcVar10;
          do {
            cVar1 = *pcVar9;
            cVar2 = *pcVar8;
            if (cVar1 == '\0') break;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 != cVar2) {
            pcVar8 = "disableFocusKeys";
            pcVar9 = pcVar10;
            do {
              cVar1 = *pcVar9;
              cVar2 = *pcVar8;
              if (cVar1 == '\0') break;
              pcVar9 = pcVar9 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              iVar6 = fn_82695608(param_4,param_2);
              *(unsigned int *)(iVar4 + 0xb00) = iVar6 << 0x1e | *(unsigned int *)(iVar4 + 0xb00) & 0x3fffffff;
              return 1;
            }
            pcVar9 = "modalClip";
            do {
              cVar1 = *pcVar10;
              cVar2 = *pcVar9;
              if (cVar1 == '\0') break;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              piVar7 = (int *)fn_82695370(param_4,param_2);
              if ((piVar7 == (int *)0x0) ||
                 (iVar6 = (**(int (***)())(*piVar7 + 0x9c))(piVar7), iVar6 != 2)) {
                piVar7 = (int *)0x0;
              }
              fn_826FCCF8(iVar4,piVar7);
              return 1;
            }
            goto LAB_8271e9a8;
          }
          uVar5 = fn_82695608(param_4,param_2);
          uVar5 = (uVar5 & 3) << 0x1c | *(unsigned int *)(iVar4 + 0xb00) & 0xcfffffff;
        }
      }
    }
    uVar3 = 1;
    *(unsigned int *)(iVar4 + 0xb00) = uVar5;
  }
  else {
LAB_8271e9a8:
    uVar3 = fn_826C1BA0(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar3;
}

