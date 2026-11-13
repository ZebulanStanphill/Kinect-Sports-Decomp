extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82264BB8();
extern int fn_8240BCE8();
extern int fn_824569A8();
extern int fn_82458910();
extern int fn_82508078();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_821BA6F0;


void fn_8240C348(int *param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  int iVar4;
  int iStack_40;
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  piVar3 = (int *)(**(int (***)())(*param_1 + 8))();
  uVar2 = (**(int (***)())(*piVar3 + 0xc))(piVar3,param_2);
  fn_8240BCE8(param_1,3,param_2,uVar2);
  fn_82508078(*(unsigned int *)param_1[9],lbl_821BA6F0,0);
  fn_824569A8(param_1[0x3d]);
  piVar3 = (int *)(**(int (***)())(*param_1 + 8))(param_1);
  puVar1 = (unsigned int *)param_1[0x42];
  iVar4 = (**(int (***)())(*piVar3 + 0xc))(piVar3,param_2);
  (**(int (***)())(param_1[0x11] + 8))(param_1 + 0x11);
  (**(int (***)())(param_1[0x11] + 4))(param_1 + 0x11);
  fn_82458910(auStack_38,*puVar1,*(unsigned int *)(param_2 + 0x2c));
  fn_82458910(&iStack_40,*puVar1,*(unsigned int *)(iVar4 + 0x2c));
  fn_82264BB8(puVar1[0x16],*(unsigned int *)(iVar4 + 0x2c),*(int *)(iVar4 + 0x24) != 0,
                *(unsigned int *)(iStack_40 + 0xb0),*(unsigned int *)(iStack_40 + 0x60),
                *(unsigned int *)(iStack_40 + 0xd8),*(unsigned int *)(iStack_40 + 0xdc));
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return;
}

