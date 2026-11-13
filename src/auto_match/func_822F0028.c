extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822AF138();
extern int fn_822E5F48();
extern int fn_822F09C0();
extern int fn_82397F30();
extern int fn_82536070();
extern int fn_82536590();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_83265A28;


void fn_822F0028(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  double dVar5;
  double dVar6;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  fn_822E5F48(auStack_38,*(unsigned int *)(param_1 + 0xc));
  puVar1 = (unsigned int *)fn_822E5F48(auStack_40,*(unsigned int *)(param_1 + 0xc));
  dVar6 = (double)*(float *)*puVar1;
  piVar2 = (int *)fn_822E5F48(auStack_48,*(unsigned int *)(param_1 + 0xc));
  dVar5 = (double)*(float *)(*piVar2 + 8);
  piVar2 = (int *)fn_822E5F48(auStack_50,*(unsigned int *)(param_1 + 0xc));
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar3 = fn_822F09C0((double)*(float *)(*piVar2 + 4),dVar5,dVar6,param_1);
  if (iStack_4c != 0) {
    fn_822315A0(iStack_4c);
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if ((*(int *)(iVar3 + 0x178) == 1) &&
     (((*(int *)(iVar3 + 0xa0) == 0 || (*(int *)(*(int *)(iVar3 + 0xa0) + 0x40) != 1)) &&
      (*(int *)(iVar3 + 0xbd4) == 0)))) {
    fn_82536070(0xffffffff821b34b4,0xffffffff821b34ac);
    fn_82536590(iVar3 + 0xbc8,0);
    *(unsigned int *)(iVar3 + 0xbd4) = 1;
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
    uVar4 = 5;
  }
  else {
    iVar3 = fn_82397F30();
    if ((iVar3 != 0) && (iVar3 = *(int *)(param_1 + 0xc), *(int *)(iVar3 + 0x24) == 0)) {
      uVar4 = 6;
      goto LAB_822f01cc;
    }
    uVar4 = 7;
  }
  iVar3 = *(int *)(param_1 + 0xc);
LAB_822f01cc:
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(unsigned int *)(iVar3 + 0x110),uVar4);
}

