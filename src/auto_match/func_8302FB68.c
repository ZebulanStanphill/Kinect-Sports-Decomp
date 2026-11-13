extern unsigned int *auStack_88;
extern int fn_82F68CC0();
extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64 fn_8302FB68(int param_1,int param_2,unsigned __int64 *param_3)

{
  unsigned int *puVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b0;
  int *piStack_ac;
  unsigned int uStack_a8;
  unsigned int *puStack_a4;
  unsigned __int64 uStack_a0;
  unsigned __int64 uStack_98;
  unsigned __int64 uStack_90;
  unsigned char auStack_88 [72];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned char uStack_30;
  unsigned char uStack_2f;
  
  piVar3 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
  if (piVar3 == (int *)0x0) {
    uVar2 = 2;
  }
  else {
    puVar1 = *(unsigned int **)(param_1 + 0xe4);
    uStack_bc = 4;
    for (; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1) {
      if (puVar1[1] == param_2) {
        if (puVar1 != (unsigned int *)0xfffffff8) {
          uStack_c0 = puVar1[3];
          goto LAB_8302fbd0;
        }
        break;
      }
    }
    uStack_c0 = 0;
LAB_8302fbd0:
    uStack_30 = 0;
    fn_82F68CC0(auStack_88,(int)param_3 + 0x1c,0x48);
    uStack_a8 = *(unsigned int *)(param_3 + 3);
    uStack_a0 = *param_3;
    uStack_98 = param_3[1];
    uStack_90 = param_3[2];
    puStack_a4 = &uStack_c0;
    uStack_40 = *(unsigned int *)((int)param_3 + 100);
    uStack_b0 = 0;
    uStack_2f = 1;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    piStack_ac = piVar3;
    uVar2 = (**(int (***)())(*piVar3 + 0x18))(piVar3,&uStack_b0);
    (**(int (***)())(*piVar3 + 8))(piVar3);
  }
  return uVar2;
}

