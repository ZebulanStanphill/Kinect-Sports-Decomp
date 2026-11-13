extern unsigned int *auStack_50;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_826972E0();
extern int fn_8269A240();
extern int fn_826A7398();
extern int fn_826F97E8();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_82005728;


void fn_82721190(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar6;
  char *pcVar7;
  unsigned __int64 uVar4;
  unsigned int uVar8;
  __int64 lVar5;
  int *piVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  double dVar12;
  double dVar13;
  int iStack_70;
  int iStack_6c;
  struct { float first; float second; } stack_pair_68;

  __int64 lStack_60;
  unsigned char auStack_50 [48];

  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  piVar6 = (int *)fn_826A7398(*(unsigned int *)(param_1 + 0x18));
  uVar10 = 1;
  uVar11 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    pcVar7 = (char *)fn_826957D0(param_1,0);
    if (*pcVar7 == '\x02') {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar10 = fn_826957D0(param_1,0);
      uVar10 = fn_82695608(uVar10,uVar2);
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,1);
        dVar12 = (double)fn_826972E0(uVar4,uVar2);
        uVar11 = (unsigned int)dVar12;
        lStack_60 = (__int64)(int)uVar11;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 == 1) {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        dVar12 = (double)fn_826972E0(uVar4,uVar2);
        uVar11 = (unsigned int)dVar12;
        lStack_60 = (__int64)(int)uVar11;
      }
      else if (1 < iVar3) {
        if (2 < iVar3) {
          uVar2 = *(unsigned int *)(param_1 + 0x18);
          uVar10 = fn_826957D0(param_1,2);
          uVar10 = fn_82695608(uVar10,uVar2);
        }
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        dVar12 = (double)fn_826972E0(uVar4,uVar2);
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,1);
        dVar13 = (double)fn_826972E0(uVar4,uVar2);
        iVar3 = piVar6[0x1a];
        if (iVar3 == 0) {
          return;
        }
        fn_8268CC00(auStack_50);
        fn_8269A240(iVar3,auStack_50);
        stack_pair_68.first = (float)(dVar12 * lbl_82005728);
        stack_pair_68.second = (float)(dVar13 * lbl_82005728);
        fn_8268CCB0(auStack_50,&iStack_70,&stack_pair_68.first);
        goto LAB_82721354;
      }
    }
  }
  uVar8 = (**(int (***)())(*piVar6 + 0xd0))(piVar6);
  if (uVar8 <= uVar11) {
    return;
  }
  if (uVar11 < 4) {
    piVar9 = piVar6 + uVar11 * 9 + 0x251;
  }
  else {
    piVar9 = (int *)0x0;
  }
  iStack_6c = piVar9[6];
  iStack_70 = piVar9[5];
LAB_82721354:
  lVar5 = fn_826F97E8(piVar6,&iStack_70,uVar10,0);
  if (lVar5 != 0) {
    fn_82696480(*(unsigned int *)(param_1 + 4));
  }
  return;
}
