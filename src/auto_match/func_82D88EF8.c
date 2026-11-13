extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_82D888D0();
extern int fn_82D8E938();
extern int fn_82D96238();
extern int fn_82DA6530();
extern int fn_82DA6BA8();
extern unsigned int uStack_2a;
extern unsigned int uStack_2e;
extern unsigned int uStack_40;


unsigned __int64 fn_82D88EF8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char uStack_40;
  unsigned char auStack_38 [4];
  int *piStack_34;
  unsigned char auStack_30 [2];
  unsigned short uStack_2e;
  unsigned short uStack_2a;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar2 = (**(int (***)())(*(int *)param_2[3] + 0x20))();
    if ((iVar2 == 0xc) && (iVar2 = param_2[3], *(short *)(iVar2 + 0x1c) == 0)) {
      (**(int (***)())(**(int **)(iVar2 + 0x18) + 0x24))(*(int **)(iVar2 + 0x18),uStack_40,auStack_30);
      *(unsigned short *)(iVar2 + 0x1c) = uStack_2e;
      *(unsigned short *)(iVar2 + 0x1e) = uStack_2a;
    }
    *(unsigned char *)(param_1 + 0x9c) = 1;
    fn_82D96238(param_2);
    iVar2 = *(int *)(param_1 + 0x110) + 1;
    *(int *)(param_1 + 0x110) = iVar2;
    param_2[0xd] = iVar2;
    uVar1 = fn_82D8E938(param_1,param_2,1);
    iVar2 = (**(int (***)())(*param_2 + 0x18))(param_2);
    if (iVar2 == 1) {
      if (*(int *)(param_2[0x11] + 8) == 0) {
        fn_82D888D0(param_1);
      }
      (**(int (***)())(*(int *)param_2[3] + 0x40))();
    }
    *(unsigned char *)(param_1 + 0x9c) = 0;
    if ((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0x8c) != 0)) {
      *(unsigned int *)(param_1 + 0x8c) = 0;
      fn_82DA6BA8(*(unsigned int *)(param_1 + 0x88));
    }
  }
  else {
    auStack_38[0] = 8;
    piStack_34 = param_2;
    fn_82DA6530(*(unsigned int *)(param_1 + 0x88),auStack_38);
    uVar1 = 0;
  }
  return uVar1;
}

