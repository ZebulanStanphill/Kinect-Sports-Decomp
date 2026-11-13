extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8223C478();
extern int fn_8265CA20();
extern int fn_828B0618();
extern int fn_828B0AF0();
extern int fn_828E9D28();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9DB8();
extern int fn_828E9FF8();
extern unsigned int iStack_48;
extern unsigned int lbl_82024D28;
extern unsigned int lbl_82024D64;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;


void fn_828B10F0(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char *puStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  uVar1 = *(unsigned int *)(&lbl_82024D64 + param_3 * 4);
  if ((int)param_4 == 0) {
    (**(int (***)())(*param_1 + 0x40))(param_1,auStack_70);
  }
  else {
    (**(int (***)())(*param_1 + 0x38))(param_1,auStack_70,param_4);
  }
  puStack_50 = auStack_70 + (uVar1 >> 3);
  iStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_4c = 1;
  fn_828E9D28(auStack_60,puStack_50,1);
  if ((uVar1 & 7) != 0) {
    iVar3 = fn_828E9DA8(auStack_60);
    iVar4 = fn_828E9D90(auStack_60);
    if ((int)(uVar1 & 7) <= iVar3 - iVar4) {
      fn_828E9FF8(auStack_60,uVar1 & 7);
    }
  }
  uVar2 = *(unsigned int *)(&lbl_82024D28 + param_3 * 4);
  fn_8223C478(auStack_60,uVar2,0);
  fn_828E9DB8(auStack_60,param_2,uVar2);
  if ((int)param_4 == 0) {
    fn_828B0AF0(param_1,auStack_70);
  }
  else {
    fn_828B0618(param_1,auStack_70,param_4);
  }
  if (iStack_48 != 0) {
    fn_8265CA20();
  }
  return;
}

