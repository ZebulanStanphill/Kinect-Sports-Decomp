extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
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


void fn_8300FDB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  int *piVar1;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
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
  
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
  if (piVar1 != (int *)0x0) {
    puStack_a4 = &uStack_c0;
    uStack_44 = 0;
    uStack_30 = 0;
    uStack_88 = 0;
    uStack_b0 = 0;
    uStack_98 = uStack00000038;
    uStack_90 = uStack00000040;
    uStack_2f = 1;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_c0 = 0;
    uStack_bc = 4;
    piStack_ac = piVar1;
    uStack_a8 = param_3;
    (**(int (***)())(*piVar1 + 0x18))(piVar1,&uStack_b0);
    (**(int (***)())(*piVar1 + 8))(piVar1);
  }
  return;
}

