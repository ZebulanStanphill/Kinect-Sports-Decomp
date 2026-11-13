extern int fn_82FAB9C0();
extern int fn_82FF86A8();
extern int fn_82FF8ED8();
extern int fn_830080D8();
extern int fn_83032458();


extern unsigned int lbl_8326434C;

int fn_82FFEF50(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  int uVar4;
  
  uVar4 = 1;
  puVar2 = (unsigned int *)fn_82FF8ED8(param_1 + 4,*(unsigned int *)(param_2 + 4));
  if (puVar2 == (unsigned int *)0x0) {
    return 2;
  }
  uVar1 = *puVar2;
  piVar3 = (int *)fn_82FAB9C0(param_4,uVar1);
  if (piVar3 == (int *)0x0) {
    RtlEnterCriticalSection(&lbl_8326434C);
    piVar3 = (int *)fn_83032458(uVar1);
    if (piVar3 == (int *)0x0) {
      uVar4 = 2;
    }
    else {
      uVar4 = (*(int (**)())(*piVar3 + 0x154))(piVar3,puVar2,*(unsigned int *)(param_2 + 4));
      if (uVar4 != 1) {
        (*(int (**)())(*piVar3 + 8))(piVar3);
      }
    }
    RtlLeaveCriticalSection(&lbl_8326434C);
    if (uVar4 != 1) goto LAB_82fff03c;
  }
  puVar2 = (unsigned int *)fn_830080D8(param_3 + 0x34);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = piVar3;
  }
LAB_82fff03c:
  fn_82FF86A8(param_1 + 4);
  return uVar4;
}

