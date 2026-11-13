extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_822AEA70();
extern int fn_822CEE40();
extern int fn_822CFA98();
extern int fn_82365BD8();
extern int fn_82373840();
extern int fn_82373AC0();
extern int fn_82379AB8();
extern unsigned int iStack_7c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821B37CC;
extern unsigned int lbl_821B37E4;
extern unsigned int lbl_821B37FC;
extern unsigned int lbl_821B3814;


void fn_82370D40(double param_1,unsigned __int64 param_2,int param_3,int *param_4,int param_5,
                  int param_6,int param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  int iVar6;
  int in_stack_0000005c;
  unsigned char auStack_80 [4];
  int iStack_7c;
  unsigned char auStack_78 [8];
  unsigned char **appuStack_70 [4];
  unsigned char ***pppuStack_60;
  
  iVar4 = param_7 * 0x148 + *param_4;
  iVar6 = iVar4 + 0x1dc;
  if ((double)lbl_8218E8E8 <= param_1) {
    iVar6 = iVar4 + 0x280;
  }
  uVar1 = *(unsigned int *)(iVar6 + 0x24);
  fn_82373840(param_3);
  pppuStack_60 = appuStack_70;
  appuStack_70[0] = &lbl_821B37CC;
  fn_822AEA70(*(unsigned int *)(param_3 + 8),appuStack_70);
  if (*(int *)(param_5 + 0x2c) != *(int *)(param_6 + 0x2c)) {
    *(unsigned int *)(param_6 + 0x34c) = uVar1;
  }
  pppuStack_60 = appuStack_70;
  appuStack_70[0] = &lbl_821B37E4;
  fn_822AEA70(*(unsigned int *)(param_3 + 8),appuStack_70);
  pppuStack_60 = appuStack_70;
  appuStack_70[0] = &lbl_821B37FC;
  fn_822AEA70(*(unsigned int *)(param_3 + 8),appuStack_70);
  iVar4 = fn_822CEE40(param_6);
  if (((*(int *)(param_5 + 0x2c) != *(int *)(param_6 + 0x2c)) && (iVar4 != 0)) &&
     ((*(int *)(param_6 + 0x24) != 0 || (iVar6 = fn_822CFA98(param_6,2), iVar6 == 0)))) {
    *(unsigned int *)(param_6 + 0x2b4) = 1;
    *(unsigned int *)(iVar4 + 0x2b4) = 1;
  }
  if (in_stack_0000005c != 0) {
    pppuStack_60 = appuStack_70;
    appuStack_70[0] = &lbl_821B3814;
    fn_822AEA70(*(unsigned int *)(param_3 + 8),appuStack_70);
  }
  puVar5 = (unsigned int *)fn_82373AC0(auStack_80,param_3);
  piVar2 = (int *)*puVar5;
  iVar4 = *piVar2;
  uVar3 = fn_82365BD8(auStack_78,param_4);
  (**(int (***)())(iVar4 + 0x20))(param_1,param_2,piVar2,uVar3,param_5,param_6,param_7);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  *(int *)(param_5 + 0x250) = param_7;
  fn_82379AB8(param_1,*param_4,param_5,param_6,param_7,param_8);
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return;
}

