extern unsigned int *puRam83264404;
extern int fn_82FECB70();
extern int fn_82FECBF0();
extern int fn_82FED298();
extern int fn_82FED848();
extern int fn_82FEF760();
extern int fn_8301D200();
extern int fn_83024E30();
extern int iRam83264408;
extern unsigned int lbl_832643D8;
extern unsigned int lbl_83264400;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82FEDB28(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int *piVar7;

  uVar1 = *param_1;
  uVar4 = fn_82FECB70(uVar1);
  if ((uVar4 & 0xffffffff) == 0) {
    piVar7 = param_1 + 4;
    uVar5 = fn_82FED298(uVar1,piVar7);
    iVar6 = (int)uVar5;
    if (iVar6 == 0x3f) {
      puVar2 = (unsigned int *)*piVar7;
      if (puVar2 != (unsigned int *)0x0) {
        *puVar2 = 0;
        puVar3 = puVar2;
        if (puRam83264404 != (unsigned int *)0x0) {
          *puRam83264404 = puVar2;
          puVar3 = lbl_83264400;
        }
        lbl_83264400 = puVar3;
        puRam83264404 = puVar2;
        iRam83264408 = iRam83264408 + 1;
        return 1;
      }
    }
    else if (((iVar6 == 1) || (iVar6 == 0x2e)) && (*piVar7 != 0)) {
      iVar6 = fn_82FED848(uVar1);
      param_1[3] = iVar6;
      if (iVar6 != 0) {
        *(int *)(*piVar7 + 4) = lbl_832643D8;
        lbl_832643D8 = lbl_832643D8 + 1;
        puVar2 = (unsigned int *)param_1[3];
        puVar3 = (unsigned int *)*piVar7;
        *puVar3 = 0;
        if ((unsigned int *)puVar2[1] == (unsigned int *)0x0) {
          *puVar2 = puVar3;
        }
        else {
          *(unsigned int *)puVar2[1] = puVar3;
        }
        puVar2[1] = puVar3;
        puVar2[2] = puVar2[2] + 1;
        fn_83024E30((unsigned __int64)(unsigned int)param_1[3] + 0x10);
        return 1;
      }
      uVar5 = 2;
    }
    else if (iVar6 == 1) {
      return uVar5;
    }
    if (*piVar7 != 0) {
      fn_82FECBF0();
    }
  }
  else {
    fn_8301D200(uVar4 + 8,uVar1,0);
    fn_82FEF760(uVar1);
    uVar5 = 5;
  }
  return uVar5;
}
