extern int fn_82813498();
extern int fn_82813A78();
extern int fn_82813AE0();
extern int fn_82813D80();
extern int fn_8281F720();
extern unsigned int lbl_8320A4D4;


void fn_82812B80(int param_1)

{
  int iVar1;
  char cVar4;
  unsigned __int64 uVar2;
  __int64 lVar3;
  double dVar5;
  int aiStack_20 [2];
  
  cVar4 = fn_82813A78();
  if (cVar4 != '\0') {
    uVar2 = (unsigned __int64)lbl_8320A4D4;
    if (uVar2 == 0) {
      uVar2 = fn_82813498();
    }
    dVar5 = (double)fn_8281F720(uVar2,1);
    *(float *)(param_1 + 0x10) = (float)dVar5;
    while (*(char *)(param_1 + 0x15) != '\0') {
      cVar4 = fn_82813AE0((unsigned __int64)*(unsigned int *)(param_1 + 0xc) + 0x88,aiStack_20);
      iVar1 = aiStack_20[0];
      if (cVar4 != '\0') {
        cVar4 = fn_82813A78(aiStack_20[0]);
        if (cVar4 == '\0') {
          *(unsigned char *)(iVar1 + 0x15) = 0;
          lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + 0x48;
        }
        else {
          lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + 0x88;
        }
        fn_82813D80(lVar3,aiStack_20);
      }
    }
  }
  return;
}

