typedef unsigned char bool;
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826C6248();
extern int fn_826C72C8();
extern int fn_826C9648();
extern int fn_826D2B68();
extern int fn_82702118();
extern unsigned int iStack_30;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82703FE0(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int iStack_90;
  int iStack_8c;
  int aiStack_88 [2];
  int aiStack_80 [19];
  unsigned int uStack_34;
  int iStack_30;
  unsigned int uStack_2c;
  
  fn_826C6248(aiStack_80);
  fn_82702118(param_1,aiStack_80,param_3);
  if (uStack_2c == 0) {
    iVar2 = (**(int (***)())(*param_2 + 0x5c))(param_2);
    bVar1 = iStack_30 != 0;
    if (bVar1) {
      iVar3 = fn_82694700((unsigned __int64)*(unsigned int *)(iVar2 + 0x78) + 0x254);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      iVar2 = iStack_90;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x78) + 8);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      iVar3 = iStack_90;
    }
    aiStack_88[0] = iStack_90;
    *(int *)(iStack_90 + 8) = *(int *)(iStack_90 + 8) + 1;
    if (bVar1) {
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
      *(int *)(iVar3 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8();
      }
    }
    if (!bVar1) {
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 8) - 1;
      *(int *)(iVar2 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8(iVar2);
      }
    }
    fn_826D2B68(param_2,aiStack_80,aiStack_88,uStack_34,0,0xffffffffffffffff,4,0);
    iStack_8c = aiStack_88[0];
  }
  else {
    if (uStack_2c == 1) {
      fn_826C72C8(param_2,aiStack_80);
      goto LAB_82704218;
    }
    if (2 < uStack_2c) goto LAB_82704218;
    iVar2 = (**(int (***)())(*param_2 + 0x5c))(param_2);
    bVar1 = iStack_30 != 0;
    if (bVar1) {
      iVar3 = fn_82694700((unsigned __int64)*(unsigned int *)(iVar2 + 0x78) + 0x254);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      iVar2 = iStack_90;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x78) + 8);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      iVar3 = iStack_90;
    }
    iStack_8c = iStack_90;
    *(int *)(iStack_90 + 8) = *(int *)(iStack_90 + 8) + 1;
    if (bVar1) {
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
      *(int *)(iVar3 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8();
      }
    }
    if (!bVar1) {
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 8) - 1;
      *(int *)(iVar2 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8(iVar2);
      }
    }
    fn_826C9648(param_2,aiStack_80,&iStack_8c);
  }
  lVar4 = (unsigned __int64)*(unsigned int *)(iStack_8c + 8) - 1;
  *(int *)(iStack_8c + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8(iStack_8c);
  }
LAB_82704218:
  if (aiStack_80[0] != 0) {
    fn_8267C498();
  }
  return;
}

