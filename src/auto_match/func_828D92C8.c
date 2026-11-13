extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_8265CA20();
extern int fn_828E9D28();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int iStack_38;
extern unsigned int lbl_82024DA0;
extern unsigned int lbl_82024DDC;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


unsigned __int64 fn_828D92C8(int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [16];
  unsigned char *puStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  uVar1 = *(unsigned int *)(&lbl_82024DA0 + param_2 * 4);
  if (param_3 == 0) {
    (**(int (***)())(*param_1 + 0x40))(param_1,auStack_70);
  }
  else {
    (**(int (***)())(*param_1 + 0x38))();
  }
  uVar5 = 0;
  puStack_40 = auStack_70 + (uVar1 >> 3);
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_3c = 0x19;
  fn_828E9D28(auStack_50,puStack_40,0x19);
  if ((uVar1 & 7) != 0) {
    iVar2 = fn_828E9DA8(auStack_50);
    iVar3 = fn_828E9D90(auStack_50);
    if ((int)(uVar1 & 7) <= iVar2 - iVar3) {
      fn_828E9FF8(auStack_50,uVar1 & 7);
    }
  }
  iVar2 = *(int *)(&lbl_82024DDC + param_2 * 4);
  if (iVar2 != 0) {
    iVar3 = fn_828E9DA8(auStack_50);
    iVar4 = fn_828E9D90(auStack_50);
    if (iVar2 <= iVar3 - iVar4) {
      uVar5 = fn_828E9FF8(auStack_50,iVar2);
    }
  }
  if (iStack_38 != 0) {
    fn_8265CA20();
  }
  return uVar5;
}

