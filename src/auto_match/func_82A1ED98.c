typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_180;
extern int main();
extern int UnhandledExceptionFilter();
extern int XapiCallThreadNotifyRoutines();
extern int XapiPAL50Incompatible();
extern int GetCommandLineA();
extern int _cinit();
extern int _rtinit();
extern int XapiInitProcess();
extern int _cexit();
extern int _mtinit();
extern unsigned int lbl_83219D30;
extern unsigned int lbl_8329F724;
extern unsigned int lbl_8329F728;


void mainCRTStartup(void)

{
  bool bVar1;
  int iVar3;
  char *pcVar4;
  unsigned __int64 uVar2;
  unsigned int *puVar5;
  char cVar6;
  char *pcVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int auStack_180 [20];
  char acStack_130 [304];
  
  lbl_8329F724 = 0xffffffff;
  lbl_8329F728 = 0xffffffff;
  XapiInitProcess();
  XapiCallThreadNotifyRoutines(1);
  iVar3 = XapiPAL50Incompatible();
  if (iVar3 != 0) {
    XamLoaderTerminateTitle();
  }
  _mtinit();
  _rtinit();
  _cinit(1);
  if (lbl_83219D30 == 0) {
    puVar5 = (unsigned int *)0x0;
    lVar9 = 0;
  }
  else {
    puVar5 = auStack_180;
    lVar9 = 0;
    pcVar4 = (char *)GetCommandLineA();
    if (pcVar4 != (char *)0x0) {
      pcVar7 = acStack_130;
      while( true ) {
        cVar6 = *pcVar4;
        while( true ) {
          lVar8 = (__int64)cVar6;
          if ((lVar8 == 0) || ((cVar6 != ' ' && (cVar6 != '\t')))) break;
          *pcVar7 = '\0';
          pcVar7 = pcVar7 + 1;
          pcVar4 = pcVar4 + 1;
          cVar6 = *pcVar4;
        }
        if (cVar6 == '\0') break;
        *puVar5 = pcVar7;
        lVar9 = lVar9 + 1;
        puVar5 = puVar5 + 1;
        bVar1 = false;
        do {
          if ((int)lVar8 == 0x22) {
            bVar1 = !bVar1;
          }
          else {
            *pcVar7 = cVar6;
            pcVar7 = pcVar7 + 1;
          }
          pcVar4 = pcVar4 + 1;
          cVar6 = *pcVar4;
          lVar8 = (__int64)cVar6;
        } while ((lVar8 != 0) && ((bVar1 || ((cVar6 != ' ' && (cVar6 != '\t'))))));
        if ((cVar6 == '\0') || (0x10 < (int)lVar9)) break;
      }
      *pcVar7 = '\0';
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = auStack_180;
  }
  uVar2 = main(lVar9,puVar5,0);
  _cexit();
  DbgPrint(0xffffffff82089248,uVar2);
  XamLoaderTerminateTitle();
  UnhandledExceptionFilter();
  return;
}

