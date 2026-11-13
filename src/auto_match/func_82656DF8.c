extern unsigned int *auStack_2d8;
extern int fn_82656570();
extern int fn_82657168();
extern int fn_82A1E6A0();
extern int fn_82A29B68();
extern int fn_82A29CD8();
extern int fn_82A29DE8();
extern int fn_82A2A958();
extern int fn_82F672D8();
extern int fn_82F691F0();
extern unsigned int lbl_83275D94;
extern unsigned int uStack_1bd;
extern unsigned int uStack_2e0;


unsigned __int64 fn_82656DF8(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  int iVar3;
  unsigned __int64 uVar2;
  char *pcVar4;
  unsigned int *puVar5;
  char *__s;
  unsigned __int64 uVar6;
  unsigned __int64 uStack_2e0;
  unsigned char auStack_2d8 [23];
  char acStack_2c1 [260];
  unsigned char uStack_1bd;
  char acStack_150 [336];
  
  if ((*(unsigned char *)(param_1 + 0x5e7c) & 0x10) == 0) {
    fn_82F672D8(acStack_2c1 + 1,0xffffffff83275f98,0x104);
    uStack_1bd = 0;
    pcVar4 = acStack_2c1 + 1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (int)(auStack_2d8 + (0x16 - (int)(acStack_2c1 + 1)));
    if (acStack_2c1 + 1 <= pcVar4) {
      do {
        if (*pcVar4 == '\\') break;
        pcVar4 = pcVar4 + -1;
      } while (acStack_2c1 + 1 <= pcVar4);
    }
    if (*pcVar4 == '\\') {
      *pcVar4 = '\0';
      RtlInitAnsiString(auStack_2d8,acStack_2c1 + 1);
      iVar3 = ObCreateSymbolicLink(0xffffffff831be888,auStack_2d8);
      if (-1 < iVar3) {
        xboxkrnl_sprintf(acStack_150,"%s:\\%s",0xffffffff821cd95c,pcVar4 + 1);
        iVar3 = fn_82656570(param_1,param_2,acStack_150);
        if (-1 < iVar3) {
          fn_82F672D8(acStack_2c1 + 1,acStack_150,0x104);
          uStack_1bd = 0;
          pcVar4 = acStack_2c1 + 1;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar4 = pcVar4 + (int)(auStack_2d8 + (0x16 - (int)(acStack_2c1 + 1)));
          __s = pcVar4;
          if (acStack_2c1 + 1 <= pcVar4) {
            do {
              if ((*__s == '.') || (*__s == '\\')) break;
              __s = __s + -1;
            } while (acStack_2c1 + 1 <= __s);
          }
          if (*__s != '.') {
            __s = pcVar4;
          }
          uVar6 = 0;
          if ((*(unsigned int *)(param_1 + 0x5e70) & 0xfc000) != 0) {
            puVar5 = (unsigned int *)(param_1 + 0x5c2c);
            do {
              if (lbl_83275D94 != '\0') goto LAB_82656e1c;
              xboxkrnl_sprintf(__s,"%d%s",uVar6,__s + 0x170);
              uVar2 = fn_82A29DE8(acStack_2c1 + 1,0x40000000,0,0,2,0x68000000,0);
              puVar5[1] = (int)uVar2;
              if ((int)uVar2 == -1) goto LAB_82656e1c;
              if ((uVar6 & 0xffffffff) ==
                  (((unsigned __int64)(*(unsigned int *)(param_1 + 0x5e70) >> 0xe) & 0x3f) - 1 & 0xffffffff)) {
                if (*(unsigned int *)(param_1 + 0x5d9c) == 0) {
                  uStack_2e0 = 0x100000000;
                }
                else {
                  uStack_2e0 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5d9c);
                }
              }
              else {
                uStack_2e0 = 0xfff00000;
              }
              fn_82A29B68(uVar2,(((unsigned __int64)(uStack_2e0) >> 32) & 0xFFFFFFFF),&uStack_2e0,0);
              puVar5 = puVar5 + 1;
              fn_82A29CD8(*puVar5);
              uVar6 = uVar6 + 1;
            } while ((uVar6 & 0xffffffff) < ((unsigned __int64)(*(unsigned int *)(param_1 + 0x5e70) >> 0xe) & 0x3f)
                    );
          }
          do {
            xboxkrnl_sprintf(__s,"%d%s",uVar6,__s + 0x170);
            uVar6 = uVar6 + 1;
            uVar2 = fn_82A2A958(acStack_2c1 + 1);
          } while ((int)uVar2 != 0);
          *(unsigned int *)(param_1 + 0x5d78) = 0;
          *(unsigned int *)(param_1 + 0x5d7c) = 0;
          *(unsigned int *)(param_1 + 0x5d80) = 0;
          *(unsigned int *)(param_1 + 0x5d84) = 0;
          *(unsigned int *)(param_1 + 0x5d88) = 0;
          iVar3 = fn_82A1E6A0(uVar2,0,0,0);
          *(int *)(param_1 + 0x5d88) = iVar3;
          if (iVar3 != 0) {
            *(unsigned int *)(param_1 + 0x5d80) = 0;
            *(unsigned int *)(param_1 + 0x5d84) = 0;
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(param_1 + 0x5c1c),0,0x800);
          }
        }
      }
    }
  }
LAB_82656e1c:
  fn_82657168(param_1);
  return 0;
}

