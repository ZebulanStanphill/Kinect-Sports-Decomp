extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8223C478();
extern int fn_8223C610();
extern int fn_8233EBE0();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern int fn_828E9DB8();
extern unsigned int iStack_38;
extern unsigned int lbl_821C11C4;
extern unsigned int lbl_821C1200;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


void fn_824E25B0(int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char *puStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  uVar1 = *(unsigned int *)(&lbl_821C1200 + param_2 * 4);
  (**(int (***)())(*param_1 + 0x40))(param_1,auStack_60);
  puStack_40 = auStack_60 + (uVar1 >> 3);
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_3c = 5;
  fn_828E9D28(auStack_50,puStack_40,5);
  if ((uVar1 & 7) != 0) {
    fn_8223C610(auStack_50,uVar1 & 7,0,0);
  }
  uVar2 = *(unsigned int *)(&lbl_821C11C4 + param_2 * 4);
  fn_8223C478(auStack_50,uVar2,0);
  fn_828E9DB8(auStack_50,0,uVar2);
  fn_8233EBE0(param_1,auStack_60);
  if (iStack_38 != 0) {
    fn_8265CA20();
  }
  return;
}

