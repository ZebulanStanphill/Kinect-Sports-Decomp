typedef unsigned char bool;
extern int fn_82FAB9C0();
extern int fn_83032B40();
extern int fn_83032D88();
extern int iRam831bc8e0;
extern unsigned int iStack_4c;
extern unsigned int iStack_bc;
extern unsigned int iStack_e0;
extern unsigned int lbl_832642E0;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e3;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64 fn_830149A0(int param_1,unsigned __int64 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int *puStack_e8;
  unsigned char uStack_e4;
  unsigned char uStack_e3;
  int iStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c0;
  int iStack_bc;
  unsigned int uStack_b8;
  unsigned int *puStack_b4;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  unsigned int uStack_98;
  unsigned int uStack_54;
  unsigned int uStack_50;
  int iStack_4c;
  unsigned int *puStack_48;
  unsigned int uStack_44;
  unsigned char uStack_40;
  unsigned char uStack_3f;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
    if (piVar4 == (int *)0x0) {
      return 0xf;
    }
    puStack_e8 = &uStack_d0;
    uStack_d8 = 0;
    uStack_d4 = 4;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e4 = 0;
    uStack_e3 = 0;
    iStack_e0 = 0;
    uStack_dc = 0;
    iVar5 = fn_83032B40();
    iVar2 = iStack_e0;
    bVar1 = iStack_e0 != 0;
    iStack_e0 = iVar5;
    if (bVar1) {
      fn_83032D88(iVar2);
    }
    if (iStack_e0 != 0) {
      uStack_b0 = *(unsigned __int64 *)(param_1 + 0x40);
      uStack_a8 = *(unsigned __int64 *)(param_1 + 0x48);
      uStack_a0 = *(unsigned __int64 *)(param_1 + 0x50);
      uStack_b8 = *(unsigned int *)(param_1 + 0x3c);
      iStack_4c = param_3 * 0x30;
      puStack_b4 = &uStack_d8;
      uStack_54 = 0;
      puStack_48 = &uStack_f0;
      uStack_40 = 0;
      uStack_98 = 0;
      uStack_c0 = 2;
      uStack_50 = 0;
      uStack_3f = 1;
      iVar2 = *(int *)(param_1 + 0x7c);
      while (iVar5 = iRam831bc8e0, iVar2 == 0) {
        iRam831bc8e0 = iVar5 + 1;
        *(int *)(param_1 + 0x7c) = iVar5;
        iVar2 = iVar5;
      }
      uStack_44 = *(unsigned int *)(param_1 + 0x7c);
      iRam831bc8e0 = iVar5;
      iStack_bc = param_1;
      uVar3 = (**(int (***)())(*piVar4 + 0x18))(piVar4,&uStack_c0);
      (**(int (***)())(*piVar4 + 8))(piVar4);
      if (iStack_e0 == 0) {
        return uVar3;
      }
      fn_83032D88();
      return uVar3;
    }
    (**(int (***)())(*piVar4 + 8))(piVar4);
    if (iStack_e0 != 0) {
      fn_83032D88();
    }
  }
  return 2;
}

