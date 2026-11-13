typedef unsigned char bool;
extern unsigned int *auStack_b8;
extern int memcpy();
extern int fn_82FAB9C0();
extern int fn_82FF0BA8();
extern int fn_8301B7B8();
extern int fn_83032B08();
extern int fn_83032D88();
extern unsigned int iStack_f0;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642F8;
extern unsigned int lbl_832643DC;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_fc;


unsigned __int64 fn_830335A0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  int *piVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_110;

  unsigned int uStack_100;
  unsigned int uStack_fc;
  int *piStack_f8;
  unsigned char bStack_f4;
  unsigned char bStack_f3;
  int iStack_f0;
  unsigned int uStack_ec;
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  unsigned int uStack_d8;
  unsigned int *puStack_d4;
  unsigned __int64 uStack_d0;
  unsigned __int64 uStack_c8;
  unsigned __int64 uStack_c0;
  unsigned char auStack_b8 [72];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int *puStack_68;
  unsigned int uStack_64;
  unsigned char uStack_60;
  unsigned char uStack_5f;

  stack_pair_110.first = *(unsigned int *)(param_1 + 0x84);
  iVar2 = *(int *)(param_1 + 0x80);
  stack_pair_110.second = 4;
  if (iVar2 != 0) {
    if ((*(unsigned int *)(iVar2 + 0x1e0) & 0xf0000000) == 0x20000000) {
      stack_pair_110.second = 1;
    }
    fn_82FF0BA8(iVar2,&stack_pair_110.first);
  }
  piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,*(unsigned int *)(param_1 + 0x10));
  if (piVar4 == (int *)0x0) {
    uVar3 = 0xf;
  }
  else {
    uStack_100 = *(unsigned int *)(param_1 + 0x20);
    piVar5 = (int *)(param_1 + 0x2c);
    uStack_fc = *(unsigned int *)(param_1 + 0x24);
    bStack_f4 = *(unsigned char *)(param_1 + 0x28) >> 7;
    uStack_ec = *(unsigned int *)(param_1 + 0x9c);
    bStack_f3 = *(unsigned char *)(param_1 + 0x28) >> 6 & 1;
    iVar2 = *(int *)(param_1 + 0x34);
    iStack_f0 = 0;
    piStack_f8 = piVar5;
    if (iVar2 != 0) {
      fn_83032B08(iVar2);
    }
    bVar1 = iStack_f0 != 0;
    iStack_f0 = iVar2;
    if (bVar1) {
      fn_83032D88();
    }
    uStack_60 = 0;
    memcpy(auStack_b8,param_1 + 0x38,0x48);
    uStack_d8 = *(unsigned int *)(param_2 + 0x34);
    uStack_d0 = *(unsigned __int64 *)(param_2 + 0x18);
    uStack_c8 = *(unsigned __int64 *)(param_2 + 0x20);
    puStack_68 = &uStack_100;
    uStack_c0 = *(unsigned __int64 *)(param_2 + 0x28);
    puStack_d4 = &stack_pair_110.first;
    uStack_6c = *(unsigned int *)(param_2 + 0x10);
    stack_pair_e0.second = *(unsigned int *)(param_1 + 0x98);
    uStack_70 = *(unsigned int *)(param_1 + 0x88);
    uStack_5f = *(unsigned char *)(param_1 + 0x91);
    uStack_64 = *(unsigned int *)(param_1 + 0x8c);
    stack_pair_e0.first = 1;
    uVar3 = (**(int (***)())(*piVar4 + 0x18))(piVar4,&stack_pair_e0.first);
    lbl_832643DC = lbl_832643DC + 1;
    iVar2 = *(int *)(param_1 + 0x34);
    *(unsigned int *)(param_1 + 0x34) = 0;
    if (iVar2 != 0) {
      fn_83032D88();
    }
    if (*piVar5 != 0) {
      fn_8301B7B8(lbl_832642F8);
      *piVar5 = 0;
      *(unsigned int *)(param_1 + 0x30) = 0;
    }
    if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
      (**(int (***)())(**(int **)(param_1 + 0xa0) + 8))();
      *(unsigned int *)(param_1 + 0xa0) = 0;
    }
    (**(int (***)())(*piVar4 + 8))(piVar4);
    if (iStack_f0 != 0) {
      fn_83032D88();
    }
  }
  return uVar3;
}
