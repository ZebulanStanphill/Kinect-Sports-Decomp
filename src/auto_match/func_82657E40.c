extern unsigned int *__imp__KeCertMonitorData;
extern unsigned int *__imp__KeDebugMonitorData;
extern int fn_82656DF8();
extern int fn_82657168();
extern int fn_82657578();
extern unsigned int lbl_83275D94;
extern unsigned int lbl_83275D95;
extern unsigned int lbl_83275D97;


int fn_82657E40(int param_1)

{
  int (**pcVar1)();
  __int64 lVar2;
  int iVar3;
  char acStack_110 [272];
  
  if (lbl_83275D97 != '\0') {
    if ((*(unsigned char *)(param_1 + 0x5e7c) & 0x10) == 0) {
      lVar2 = fn_82656DF8();
      iVar3 = xboxkrnl_sprintf(acStack_110,"%s 0x%08X",0xffffffff821cd980,
                      -(unsigned __int64)(lVar2 == 0) & 0xffffffff80004005);
      if ((int *)*__imp__KeCertMonitorData == (int *)0x0) {
        if (*__imp__KeDebugMonitorData == 0) {
          return iVar3;
        }
        pcVar1 = *(int (***)())(*__imp__KeDebugMonitorData + 0x18);
      }
      else {
        pcVar1 = *(int (***)())*__imp__KeCertMonitorData;
        if (pcVar1 == (int (**)())0x0) {
          return iVar3;
        }
      }
      param_1 = (*pcVar1)(0x1b,acStack_110);
    }
    else if (lbl_83275D94 == '\0') {
      if (lbl_83275D95 != '\0') {
        param_1 = fn_82657578();
      }
    }
    else {
      param_1 = fn_82657168();
    }
  }
  return param_1;
}

