extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82240378();
extern unsigned int uStack_6c;


unsigned __int64 fn_822C47A8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  char ******ppppppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *****apppppcStack_80 [5];
  unsigned int uStack_6c;
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x114) + 0x28);
  if (uVar1 == 0) {
    uVar3 = fn_82230110(auStack_60,0xffffffff82196582);
  }
  else {
    uVar3 = fn_8223B688(auStack_40,(unsigned __int64)uVar1 + 4);
  }
  fn_82240378(apppppcStack_80,uVar3);
  if (uVar1 == 0) {
    fn_82230300(auStack_60,1,0);
  }
  else {
    fn_82230300(auStack_40,1,0);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x114) + 0x20);
  pcVar6 = (char *)(iVar2 + 4);
  ppppppcVar4 = (char ******)apppppcStack_80[0];
  if (uStack_6c < 0x10) {
    ppppppcVar4 = apppppcStack_80;
  }
  pcVar5 = strstr((char *)ppppppcVar4,"tackle_");
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar6;
    if (0xf < *(unsigned int *)(iVar2 + 0x18)) {
      pcVar5 = *(char **)pcVar6;
    }
    pcVar5 = strstr(pcVar5,"tackle_");
    if (pcVar5 == (char *)0x0) {
      ppppppcVar4 = (char ******)apppppcStack_80[0];
      if (uStack_6c < 0x10) {
        ppppppcVar4 = apppppcStack_80;
      }
      pcVar5 = strstr((char *)ppppppcVar4,"tacklereact_");
      if (pcVar5 == (char *)0x0) {
        pcVar5 = pcVar6;
        if (0xf < *(unsigned int *)(iVar2 + 0x18)) {
          pcVar5 = *(char **)pcVar6;
        }
        pcVar5 = strstr(pcVar5,"tacklereact_");
        if (pcVar5 == (char *)0x0) {
          ppppppcVar4 = (char ******)apppppcStack_80[0];
          if (uStack_6c < 0x10) {
            ppppppcVar4 = apppppcStack_80;
          }
          pcVar5 = strstr((char *)ppppppcVar4,"hitreact_");
          if (pcVar5 == (char *)0x0) {
            pcVar5 = pcVar6;
            if (0xf < *(unsigned int *)(iVar2 + 0x18)) {
              pcVar5 = *(char **)pcVar6;
            }
            pcVar5 = strstr(pcVar5,"hitreact_");
            if (pcVar5 == (char *)0x0) {
              if (uStack_6c < 0x10) {
                apppppcStack_80[0] = (char *****)apppppcStack_80;
              }
              pcVar5 = strstr((char *)apppppcStack_80[0],"intercept_pass_");
              if (pcVar5 == (char *)0x0) {
                if (0xf < *(unsigned int *)(iVar2 + 0x18)) {
                  pcVar6 = *(char **)pcVar6;
                }
                pcVar6 = strstr(pcVar6,"intercept_pass_");
                if (pcVar6 == (char *)0x0) {
                  fn_82230300(apppppcStack_80,1,0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  fn_82230300(apppppcStack_80,1,0);
  return 0;
}

