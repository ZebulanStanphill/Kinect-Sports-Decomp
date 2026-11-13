extern unsigned int *auStack_850;
extern int fn_82A1E108();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE7850();
extern int fn_82BE7B78();
extern int fn_82BE8F88();
extern int fn_82CE0708();
extern int fn_82CE0720();
extern int fn_82F691F0();
extern unsigned int lbl_8322B1E4;
extern unsigned int uStack_864;
extern unsigned int uStack_868;
extern unsigned int uStack_86c;


void fn_82BEE850(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int *piStack_870;
  unsigned int uStack_86c;
  unsigned int uStack_868;
  unsigned int uStack_864;
  unsigned char auStack_850 [2128];
  
  fn_82BE7B78();
  if (param_1 != 0) {
    piStack_870 = (int *)0x0;
    iVar1 = fn_82BE8F88();
    if (iVar1 != 0) {
      fn_82BE5340(param_1);
      iVar1 = *(int *)(param_1 + 8);
      while ((iVar1 != 0 && (lbl_8322B1E4 == 0))) {
        iVar1 = fn_82BE5378(param_1);
        if ((iVar1 != 0) &&
           ((*(char *)(iVar1 + 0x14) == '\x04' || (iVar2 = fn_82BE8F88(), iVar2 == 0)))) {
          iVar2 = fn_82CE0708(*(unsigned int *)(iVar1 + 0x18),0,&piStack_870);
          if (iVar2 == 0) {
            while (*piStack_870 == 0x2734) {
              fn_82A1E108(1);
            }
            if (*piStack_870 != 0) goto LAB_82bee8e4;
            uVar4 = *(unsigned int *)(iVar1 + 0x18);
            iVar2 = piStack_870[2];
          }
          else {
LAB_82bee8e4:
            uVar4 = 0;
            iVar2 = 0;
          }
          fn_82BE7850(*(unsigned char *)(iVar1 + 0x14),iVar2,uVar4);
          if (piStack_870 != (int *)0x0) {
            fn_82CE0720();
            piStack_870 = (int *)0x0;
          }
        }
        fn_82BE5350(param_1);
        iVar1 = *(int *)(param_1 + 8);
      }
    }
    fn_82BE5340(param_1);
    while (*(int *)(param_1 + 8) != 0) {
      puVar3 = (unsigned int *)fn_82BE5378(param_1);
      if (puVar3 != (unsigned int *)0x0) {
        (**(int (***)())*puVar3)(puVar3,1);
      }
      fn_82BE5350(param_1);
    }
    fn_82BE5478();
    fn_82BE5478(param_1);
    thunk_FUN_82be5558(param_1);
  }
  uStack_868 = 0;
  uStack_864 = 0;
  uStack_86c = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_850,0,0x820);
}

