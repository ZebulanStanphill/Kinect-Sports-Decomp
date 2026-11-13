extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A20688();
extern int fn_82A236C8();
extern int fn_82A23980();
extern int fn_82A242E0();
extern int fn_82A25330();
extern unsigned int iStack_74;
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219B8C;
extern unsigned int uRam83219c54;
extern unsigned int uStack_78;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c4;


/* WARNING: Removing unreachable block (ram,0x82a256a0) */

unsigned __int64 fn_82A25478(int param_1)

{
  int *piVar2;
  int *piVar3;
  unsigned __int64 uVar1;
  char cVar6;
  int iVar4;
  int iVar5;
  int *piVar7;
  unsigned char auStack_d0 [2];
  short sStack_ce;
  unsigned char auStack_c8 [2];
  short sStack_c6;
  unsigned int uStack_c4;
  unsigned char auStack_c0 [8];
  unsigned int uStack_b8;
  unsigned char *puStack_b4;
  unsigned int uStack_b0;
  unsigned char auStack_a0 [40];
  unsigned int uStack_78;
  int iStack_74;
  
  uRam83219c54 = 1;
  iVar4 = 0;
  iVar5 = 0;
  piVar2 = (int *)fn_8265C940(0xc,lbl_8315D2EC);
  if (piVar2 == (int *)0x0) {
    uRam83219c54 = 0;
    return 0x1f;
  }
  piVar3 = (int *)fn_8265C940(0x10,lbl_8315D2EC);
  if (piVar3 == (int *)0x0) goto LAB_82a256ac;
  *piVar3 = param_1;
  piVar3[3] = -1;
  piVar3[2] = -1;
  piVar7 = piVar3 + 2;
  uStack_c4 = fn_82A236C8(param_1,auStack_d0);
  puStack_b4 = auStack_c8;
  sStack_c6 = sStack_ce + 1;
  uStack_b8 = 0xfffffffd;
  uStack_b0 = 0x40;
  uVar1 = (**(int (***)())(lbl_83219B8C + 0xc))(piVar7,0xffffffff80100080,&uStack_b8,auStack_c0,0,0,1,1)
  ;
  if ((uVar1 & 0xc0000000) == 0xc0000000) {
    *piVar7 = -1;
  }
  else if (((*(unsigned int *)(param_1 + 0x1c) & 0x10) != 0) ||
          (cVar6 = fn_82A23980(), *(char *)(param_1 + 0x19) == cVar6)) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar1 = NtQueryInformationFile(*piVar7,auStack_c0,auStack_a0,0x38,0x22);
      if ((uVar1 & 0xc0000000) == 0xc0000000) goto LAB_82a25640;
      *(int *)(param_1 + 8) = iStack_74;
    }
    else {
      uStack_78 = 0;
      iStack_74 = *(int *)(param_1 + 8);
    }
    uVar1 = fn_82A242E0(param_1,&uStack_78,piVar3 + 3,piVar2 + 2);
    if (((uVar1 & 0xc0000000) != 0xc0000000) &&
       (iVar4 = fn_8265C940(0x48,lbl_8315D2EC), iVar4 != 0)) {
      *(int **)(iVar4 + 0x40) = piVar2;
      *piVar2 = *piVar2 + 1;
      if (*(unsigned int *)(param_1 + 8) < 0x10001) {
LAB_82a256cc:
        *(unsigned int *)(iVar4 + 8) = 0;
        *(unsigned __int64 *)(iVar4 + 0x28) = 0;
        *(int **)(iVar4 + 0xc) = piVar3;
        *(int *)(iVar4 + 0x3c) = iVar5;
        *(int (***)())(iVar4 + 0x10) = fn_82A25330;
        *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_1 + 0x1c) | 0x20;
        fn_82A20688(iVar4);
        return 0;
      }
      iVar5 = fn_8265C940(0x48,lbl_8315D2EC);
      if (iVar5 != 0) {
        *(int **)(iVar5 + 0x40) = piVar2;
        goto LAB_82a256cc;
      }
    }
  }
LAB_82a25640:
  if (piVar3[3] != -1) {
    (**(int (***)())(lbl_83219B8C + 4))();
  }
  if (*piVar7 != -1) {
    (**(int (***)())(lbl_83219B8C + 4))();
  }
  fn_8265C990(piVar3,lbl_8315D2EC);
  if (iVar4 != 0) {
    fn_8265C990(iVar4,lbl_8315D2EC);
  }
LAB_82a256ac:
  fn_8265C990(piVar2,lbl_8315D2EC);
  uRam83219c54 = 0;
  return 0x1f;
}

