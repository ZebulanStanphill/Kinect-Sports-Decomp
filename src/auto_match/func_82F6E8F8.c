#define true 1
extern int fn_82A2A378();
extern int fn_82F63BA0();
extern int fn_82F68240();
extern unsigned int iStack_40;
extern unsigned int lbl_831BBCA8;


unsigned int fn_82F6E8F8(int param_1,unsigned short *param_2,unsigned int param_3)

{
  char cVar1;
  unsigned short uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned short *puVar5;
  int iVar6;
  unsigned int uVar7;
  int iStack_40;
  char acStack_3c [60];
  
  iStack_40 = 0;
  uVar4 = 0;
  if ((param_1 != 0) && (param_3 == 0)) {
    return 0;
  }
  if (param_2 == (unsigned short *)0x0) {
    puVar3 = (unsigned int *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
  }
  else {
    if (param_1 == 0) {
      if (*(int *)(lbl_831BBCA8 + 0x14) == 0) {
        uVar2 = *param_2;
        uVar4 = 0;
        while( true ) {
          if (uVar2 == 0) {
            return uVar4;
          }
          if (0xff < uVar2) break;
          param_2 = param_2 + 1;
          uVar2 = *param_2;
          uVar4 = uVar4 + 1;
        }
      }
      else {
        uVar4 = fn_82A2A378(*(unsigned int *)(lbl_831BBCA8 + 4),0,param_2,0xffffffffffffffff
                                  ,0,0,0,&iStack_40);
        if ((uVar4 != 0) && (iStack_40 == 0)) {
LAB_82f6eba0:
          return uVar4 - 1;
        }
      }
    }
    else if (*(int *)(lbl_831BBCA8 + 0x14) == 0) {
      if (param_3 == 0) {
        return 0;
      }
      param_2 = param_2 + -1;
      while (param_2[1] < 0x100) {
        *(char *)(uVar4 + param_1) = (char)param_2[1];
        param_2 = param_2 + 1;
        if (*param_2 == 0) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        if (param_3 <= uVar4) {
          return uVar4;
        }
      }
    }
    else if (*(int *)(lbl_831BBCA8 + 0xac) == 1) {
      puVar5 = param_2;
      uVar4 = param_3;
      if (param_3 != 0) {
        do {
          if (*puVar5 == 0) break;
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        if ((uVar4 != 0) && (*puVar5 == 0)) {
          param_3 = ((int)puVar5 - (int)param_2 >> 1) + 1;
        }
      }
      uVar4 = fn_82A2A378(*(unsigned int *)(lbl_831BBCA8 + 4),0,param_2,param_3,param_1,
                                param_3,0,&iStack_40);
      if ((uVar4 != 0) && (iStack_40 == 0)) {
        if (*(char *)(uVar4 + param_1 + -1) != '\0') {
          return uVar4;
        }
        goto LAB_82f6eba0;
      }
    }
    else {
      uVar4 = fn_82A2A378(*(unsigned int *)(lbl_831BBCA8 + 4),0,param_2,0xffffffffffffffff,
                                param_1,param_3,0,&iStack_40);
      if (iStack_40 == 0) {
        if (uVar4 != 0) {
          return uVar4 - 1;
        }
        uVar4 = thunk_FUN_82a2b798();
        if (uVar4 == 0x7a) {
          uVar7 = 0;
          if (param_3 == 0) {
            return 0;
          }
          while ((((uVar4 = fn_82A2A378(*(unsigned int *)(lbl_831BBCA8 + 4),0,param_2,1,
                                              acStack_3c,*(unsigned int *)(lbl_831BBCA8 + 0xac),0,
                                              &iStack_40), uVar4 != 0 && (iStack_40 == 0)) &&
                  (-1 < (int)uVar4)) && (uVar4 < 6))) {
            if (param_3 < uVar4 + uVar7) {
              return uVar7;
            }
            iVar6 = 0;
            if (0 < (int)uVar4) {
              do {
                cVar1 = acStack_3c[iVar6];
                *(char *)(uVar7 + param_1) = cVar1;
                if (cVar1 == '\0') {
                  return uVar7;
                }
                iVar6 = iVar6 + 1;
                uVar7 = uVar7 + 1;
              } while (iVar6 < (int)uVar4);
            }
            param_2 = param_2 + 1;
            if (param_3 <= uVar7) {
              return uVar7;
            }
          }
        }
      }
    }
    puVar3 = (unsigned int *)fn_82F68240(uVar4);
    *puVar3 = 0x2a;
  }
  return 0xffffffff;
}

