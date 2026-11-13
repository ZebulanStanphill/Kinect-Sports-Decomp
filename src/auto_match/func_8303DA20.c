extern int fn_82FAB9C0();
extern int fn_8302BBA8();
extern unsigned int lbl_832642E0;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64 fn_8303DA20(int param_1,int param_2)

{
  int *piVar2;
  unsigned __int64 uVar1;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b0;
  int *piStack_ac;
  unsigned int uStack_a8;
  unsigned int *puStack_a4;
  unsigned __int64 uStack_98;
  unsigned __int64 uStack_90;
  unsigned int uStack_88;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned char uStack_30;
  unsigned char uStack_2f;
  
  piVar2 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,*(unsigned int *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0xf;
  }
  else {
    uStack_c0 = fn_8302BBA8(param_1);
    uStack_44 = 0;
    uStack_98 = *(unsigned __int64 *)(param_2 + 0x20);
    uStack_90 = *(unsigned __int64 *)(param_2 + 0x28);
    puStack_a4 = &uStack_c0;
    uStack_3c = *(unsigned int *)(param_2 + 0x10);
    uStack_a8 = *(unsigned int *)(param_2 + 0x34);
    uStack_30 = 0;
    uStack_88 = 0;
    uStack_b0 = 0;
    uStack_40 = 0;
    uStack_2f = 1;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_bc = *(unsigned int *)(param_1 + 0x14) >> 3 & 0x1f;
    piStack_ac = piVar2;
    uVar1 = (**(int (***)())(*piVar2 + 0x18))(piVar2,&uStack_b0);
    (**(int (***)())(*piVar2 + 8))(piVar2);
  }
  return uVar1;
}

