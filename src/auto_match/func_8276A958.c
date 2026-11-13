extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82686CA8();
extern int fn_82687270();
extern int fn_826874B8();
extern int fn_82687570();
extern int fn_82687AB8();
extern int fn_82768A90();
extern int fn_8276A8D0();
extern unsigned int iStack_40;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


unsigned __int64 fn_8276A958(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  int iStack_40;
  unsigned int uStack_3c;
  int *piStack_38;
  unsigned int uStack_34;
  
  fn_8276A8D0(&piStack_38,param_1,param_2,param_3);
  uVar4 = 0;
  iStack_40 = 0;
  uStack_3c = 0;
  iVar3 = fn_82687AB8(param_4,&iStack_40,&piStack_38);
  if (iVar3 != 3) {
    uVar4 = fn_82686CA8(&iStack_40);
    goto LAB_8276aa44;
  }
  uVar1 = (**(int (***)())(*param_3 + 4))(param_3,param_1,param_2);
  if (uVar1 == 0) {
LAB_8276aa14:
    fn_82687570(uStack_3c,0xffffffff82196582);
  }
  else {
    uVar2 = fn_8267B890(lbl_831E7E64,0x2c,0);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar4 = fn_82768A90(uVar2,uVar1,&piStack_38);
    }
    if ((uVar4 & 0xffffffff) == 0) goto LAB_8276aa14;
    fn_826874B8(uStack_3c,uVar4);
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar1);
  }
LAB_8276aa44:
  if (iStack_40 == 1) {
    fn_82687270(uStack_3c);
  }
  else if (1 < iStack_40) {
    fn_8267C4F0(uStack_3c);
  }
  if (piStack_38 != (int *)0x0) {
    (**(int (***)())(*piStack_38 + 8))(piStack_38,uStack_34);
  }
  return uVar4;
}

