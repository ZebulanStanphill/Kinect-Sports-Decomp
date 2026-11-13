extern unsigned int *auStack_82e;
extern unsigned int *auStack_838;
extern unsigned int *auStack_840;
extern int fn_822315A0();
extern int fn_8226D6A0();
extern int fn_8226FE40();
extern int fn_822800E8();
extern int fn_822820E0();
extern int fn_82356F98();
extern int fn_823F2E20();
extern int fn_82528BF8();
extern unsigned int iStack_83c;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_830;


/* WARNING: Removing unreachable block (ram,0x82281630) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822815C8(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned char auStack_840 [4];
  int iStack_83c;
  unsigned char auStack_838 [8];
  unsigned short uStack_830;
  unsigned char auStack_82e [2046];

  if ((*(int *)(param_1 + 0x10) != 0) && (fn_822800E8(), *(int *)(param_1 + 0xc) != 0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(int *)(iVar1 + 0x44) != 0) &&
       (((*(int *)(iVar1 + 0x44) != 2 && (*(int *)(iVar1 + 0x8c) == 0)) &&
        (*(int *)(iVar1 + 0x6c) == 0)))) {
      if ((*(int *)(iVar1 + 0x44) == 1) || (*(int *)(iVar1 + 0x44) == 0)) {
        piVar4 = (int *)(iVar1 + 0x4c);
      }
      else {
        piVar4 = (int *)(iVar1 + 0x54);
      }
      if (*piVar4 != 0) {
        uStack_830 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        fn_82528BF8(auStack_82e,0,0x7fe);
      }
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + -0xc);
      iVar2 = fn_8226FE40(iVar1);
      if ((iVar2 != 0) &&
         (piVar4 = *(int **)(param_1 + 0x14),
         1 < (unsigned int)((*(int *)(param_1 + 0x18) - (int)piVar4) / 0xc))) {
        while ((piVar4 < *(int **)(param_1 + 0x18) && (*piVar4 != iVar1))) {
          fn_8226D6A0();
          fn_82356F98(auStack_840);
          fn_823F2E20(piVar4 + 1,auStack_840);
          if (iStack_83c != 0) {
            fn_822315A0();
          }
          puVar3 = (unsigned int *)fn_822820E0(auStack_838,(int *)(param_1 + 0x14),piVar4);
          piVar4 = (int *)*puVar3;
        }
      }
    }
  }
  return;
}
