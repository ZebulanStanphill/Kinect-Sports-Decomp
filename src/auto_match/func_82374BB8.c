extern unsigned int *auStack_830;
extern int fn_82292B40();
extern int fn_8229D5C0();
extern int fn_822AA770();
extern int fn_82358FD8();
extern int fn_82372F88();
extern int fn_8288B760();
extern unsigned int lbl_831D1BBC;


void fn_82374BB8(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  double dVar5;
  unsigned char auStack_830 [2096];
  
  iVar2 = fn_82372F88();
  piVar1 = *(int **)(iVar2 * 4 + **(int **)(param_1 + 8));
  iVar2 = fn_822AA770(piVar1);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar3 = *(unsigned int *)(iVar2 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      uVar4 = 1;
      fn_82292B40();
      goto LAB_82374c1c;
    }
  }
  uVar4 = 0;
LAB_82374c1c:
  iVar2 = *(int *)(param_1 + 0xd4);
  uVar3 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
  dVar5 = (double)lbl_831D1BBC;
  fn_82358FD8(*(unsigned int *)(iVar2 + 0x1c),auStack_830,0x400,0xffffffff821aa508);
  fn_8229D5C0(dVar5,*(unsigned int *)(iVar2 + 0x14),(unsigned __int64)uVar3 + 0xa8,auStack_830,
                    0xffffffff820e975c,uVar4);
  return;
}

