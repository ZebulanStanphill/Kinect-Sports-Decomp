extern int _initterm();
extern int fn_82F6CD94();
extern int _lock();
extern int iRam832633b0;
extern int iRam832633b4;
extern unsigned int iStack0000001c;
extern unsigned int lbl_832633AC;
extern unsigned int lbl_8329F724;
extern unsigned int lbl_8329F728;


void doexit(int param_1,int param_2)

{
  int (**pcVar1)();
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  _lock(8);
  if (iRam832633b4 != 1) {
    iVar2 = -0x7cda0000;
    if (iRam832633b0 == 1) {
      iVar2 = -0x7cda0000;
      KeBugCheck(0);
    }
    *(unsigned int *)(iVar2 + 0x33b0) = 1;
    lbl_832633AC = (unsigned char)param_2;
    if (param_1 == 0) {
      piVar4 = lbl_8329F728;
      piVar5 = lbl_8329F728;
      piVar3 = lbl_8329F724;
      piVar6 = lbl_8329F724;
      if (lbl_8329F728 != (int *)0x0) {
        while (piVar6 = piVar6 + -1, piVar4 <= piVar6) {
          if (*piVar6 != 0) {
            if (piVar6 < piVar4) break;
            pcVar1 = (int (**)())*piVar6;
            *piVar6 = 0;
            (*pcVar1)();
            if ((piVar5 != lbl_8329F728) || (piVar3 != lbl_8329F724)) {
              piVar4 = lbl_8329F728;
              piVar5 = lbl_8329F728;
              piVar3 = lbl_8329F724;
              piVar6 = lbl_8329F724;
            }
          }
        }
      }
      _initterm(0xffffffff83153548,0xffffffff83153554);
    }
    _initterm(0xffffffff83153558,0xffffffff8315355c);
  }
  fn_82F6CD94();
  if (iStack0000001c == 0) {
    KeBugCheck(0);
  }
  return;
}

