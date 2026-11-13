typedef unsigned char bool;
extern int fn_82FAB9C0();
extern int fn_83032B40();
extern int fn_83032D88();
extern unsigned int iStack_5c;
extern unsigned int iStack_e0;
extern unsigned int iStack_e8;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832643DC;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64 fn_83039600(int param_1,unsigned __int64 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  int iStack_e8;
  unsigned char bStack_e4;
  unsigned char bStack_e3;
  int iStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  struct { unsigned int first; unsigned int second; } stack_pair_d0;

  unsigned int uStack_c8;
  unsigned int *puStack_c4;
  unsigned __int64 uStack_c0;
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned int uStack_a8;
  unsigned int uStack_64;
  unsigned int uStack_60;
  int iStack_5c;
  unsigned int *puStack_58;
  unsigned int uStack_54;
  unsigned char uStack_50;
  unsigned char uStack_4f;
  
  piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
  if (piVar4 == (int *)0x0) {
    uVar3 = 2;
  }
  else {
    iStack_e8 = param_1 + 0x17c;
    uStack_f0 = *(unsigned int *)(param_1 + 0x58);
    uStack_ec = *(unsigned int *)(param_1 + 0x5c);
    bStack_e4 = *(unsigned char *)(param_1 + 0x60) >> 7;
    uStack_dc = *(unsigned int *)(param_1 + 0x130);
    bStack_e3 = *(unsigned char *)(param_1 + 0x60) >> 6 & 1;
    iStack_e0 = 0;
    iVar5 = fn_83032B40();
    iVar2 = iStack_e0;
    bVar1 = iStack_e0 != 0;
    iStack_e0 = iVar5;
    if (bVar1) {
      fn_83032D88(iVar2);
    }
    stack_pair_d0.second = *(unsigned int *)(param_1 + 0x1d4);
    uStack_c0 = *(unsigned __int64 *)(param_1 + 0x40);
    uStack_b8 = *(unsigned __int64 *)(param_1 + 0x48);
    uStack_b0 = *(unsigned __int64 *)(param_1 + 0x50);
    uStack_c8 = *(unsigned int *)(param_1 + 0x70);
    iStack_5c = param_3 * 0x30;
    uStack_54 = *(unsigned int *)(param_1 + 100);
    puStack_58 = &uStack_f0;
    puStack_c4 = &uStack_d8;
    stack_pair_d0.first = 2;
    uStack_64 = 0;
    uStack_50 = 0;
    uStack_a8 = 0;
    uStack_d8 = 0;
    uStack_d4 = 9;
    uStack_60 = 0;
    uStack_4f = 0;
    uVar3 = (**(int (***)())(*piVar4 + 0x18))(piVar4,&stack_pair_d0.first);
    if ((*(unsigned char *)(param_1 + 0xd9) & 0x20) != 0) {
      *(unsigned char *)(param_1 + 0xd9) = *(unsigned char *)(param_1 + 0xd9) | 0x10;
    }
    (**(int (***)())(*piVar4 + 8))(piVar4);
    lbl_832643DC = lbl_832643DC + 1;
    if (iStack_e0 != 0) {
      fn_83032D88();
    }
  }
  return uVar3;
}

