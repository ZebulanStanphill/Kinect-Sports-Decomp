extern int fn_82FA9530();
extern int fn_82FA9920();
extern int fn_82FAD390();
extern int fn_82FAE168();
extern int fn_82FAE648();
extern unsigned int iStack_40;


unsigned __int64 fn_82FAD888(int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iStack_40;
  int aiStack_3c;
  
  iVar1 = param_1[1];
  iStack_40 = 0;
  uVar5 = 0;
  aiStack_3c = iVar1;
  if (*(int *)(iVar1 + 0x40) != 0) {
    uVar5 = *(unsigned int *)(*(int *)(iVar1 + 0x40) + 0x60);
    iVar2 = fn_82FAE648(uVar5,param_2,param_3,&iStack_40);
    if (iVar2 != 1) {
      *param_4 = 0;
      return 2;
    }
  }
  if ((((*(unsigned short *)(param_2 + 0x14) & 0x1000) == 0) || (iStack_40 != 0)) ||
     (uVar6 = 1, (*(unsigned short *)(param_2 + 0x14) & 0xe000) == 0x2000)) {
    uVar6 = 0;
  }
  uVar3 = fn_82FA9920(iVar1,iStack_40,param_2,uVar6);
  *param_4 = uVar3;
  (**(int (***)())(*param_1 + 4))(param_1,&aiStack_3c,iStack_40);
  iVar2 = *(int *)(aiStack_3c + 4);
  if (iVar2 != 0) {
    aiStack_3c = iVar2;
    iVar4 = fn_82FAE168(uVar5);
    *(int *)(iVar2 + 0xc) = iVar4 - iStack_40;
    fn_82FA9530(iVar1);
    uVar5 = fn_82FAD390(param_1);
    *param_4 = uVar5;
  }
  return 1;
}

