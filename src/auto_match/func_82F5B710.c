extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_828F0DD0();
extern int fn_82F5B678();
extern unsigned int lbl_831BB030;
extern unsigned int lbl_831BB034;


unsigned __int64 fn_82F5B710(int param_1,unsigned __int64 param_2,int param_3)

{
  char cVar1;
  unsigned char *puVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  char *pcVar7;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *apiStack_40 [8];
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(int *)(param_1 + 0x38) = (int)param_2;
    *(unsigned int *)(param_1 + 0x40) = 6;
    if (param_3 == 1) {
      uVar6 = 0x140;
      uVar5 = 0xf0;
    }
    else {
      uVar6 = 0x280;
      uVar5 = 0x1e0;
    }
    *(unsigned int *)(param_1 + 0x44) = uVar6;
    *(unsigned int *)(param_1 + 0x48) = uVar5;
    apiStack_40[0] = (int *)0x0;
    pcVar7 = lbl_831BB030;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar4 = fn_828F0DD0(lbl_831BB030,
                              pcVar7 + (-1 - (int)lbl_831BB030),
                              0,0,0xffffffff82167bfc,0xffffffff8200532c,0,apiStack_40);
    if (-1 < iVar4) {
      (**(int (***)())(*apiStack_40[0] + 0xc))();
      uVar5 = fn_82631830();
      puVar2 = lbl_831BB030;
      *(unsigned int *)(param_1 + 0xc) = uVar5;
      piStack_50 = (int *)0x0;
      pcVar7 = puVar2;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar4 = fn_828F0DD0(puVar2,pcVar7 + (-1 - (int)puVar2),0,0,0xffffffff82167be8,
                                0xffffffff82005334,0,&piStack_50);
      if (-1 < iVar4) {
        (**(int (***)())(*piStack_50 + 0xc))();
        uVar5 = fn_82631488();
        *(unsigned int *)(param_1 + 0x10) = uVar5;
        (**(int (***)())(*piStack_50 + 8))(piStack_50);
        piStack_50 = (int *)0x0;
        piStack_4c = (int *)0x0;
        pcVar7 = lbl_831BB030;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar4 = fn_828F0DD0(lbl_831BB030,
                                  pcVar7 + (-1 - (int)
                                                 lbl_831BB030),0
                                  ,0,0xffffffff82167bd4,0xffffffff82005334,0,&piStack_4c);
        if (-1 < iVar4) {
          (**(int (***)())(*piStack_4c + 0xc))();
          uVar5 = fn_82631488();
          *(unsigned int *)(param_1 + 0x20) = uVar5;
          (**(int (***)())(*piStack_4c + 8))(piStack_4c);
          piStack_4c = (int *)0x0;
          uVar5 = fn_82631BF8(0xffffffff82167bb0);
          puVar2 = lbl_831BB034;
          *(unsigned int *)(param_1 + 8) = uVar5;
          piStack_48 = (int *)0x0;
          pcVar7 = puVar2;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar4 = fn_828F0DD0(puVar2,pcVar7 + (-1 - (int)puVar2),0,0,0xffffffff82167b98,
                                    0xffffffff8200532c,0,&piStack_48);
          if (-1 < iVar4) {
            (**(int (***)())(*piStack_48 + 0xc))();
            uVar5 = fn_82631830();
            *(unsigned int *)(param_1 + 0x18) = uVar5;
            (**(int (***)())(*piStack_48 + 8))();
            piStack_48 = (int *)0x0;
            piStack_44 = (int *)0x0;
            pcVar7 = lbl_831BB034;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            iVar4 = fn_828F0DD0(lbl_831BB034,
                                      pcVar7 + (-1 - (int)
                                                  lbl_831BB034
                                               ),0,0,0xffffffff82167b84,0xffffffff82005334,0,
                                      &piStack_44);
            if (-1 < iVar4) {
              (**(int (***)())(*piStack_44 + 0xc))();
              uVar5 = fn_82631488();
              *(unsigned int *)(param_1 + 0x1c) = uVar5;
              (**(int (***)())(*piStack_44 + 8))();
              piStack_44 = (int *)0x0;
              uVar5 = fn_82631BF8(0xffffffff82167b60);
              *(unsigned int *)(param_1 + 0x14) = uVar5;
              iVar4 = fn_82F5B678(param_1,param_2);
              if (-1 < iVar4) {
                *(unsigned int *)(param_1 + 0x24) = 1;
                goto LAB_82f5ba7c;
              }
            }
          }
        }
      }
    }
    uVar3 = 0xffffffff80004005;
  }
  else {
LAB_82f5ba7c:
    uVar3 = 0;
  }
  return uVar3;
}

