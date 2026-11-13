extern int fn_82FA9208();
extern int fn_82FA9428();
extern int fn_82FA94A0();
extern int fn_82FA9920();
extern int fn_82FAB9C0();
extern int fn_82FAD1F0();
extern int fn_82FADD68();
extern int fn_82FAE150();
extern int fn_82FAE168();
extern int fn_82FAE490();
extern int fn_82FAE648();
extern float lbl_8216CC20;
extern unsigned int lbl_832642E0;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


int fn_82FB7070(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned short uVar8;
  unsigned int *puVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  __int64 lStack_58;
  
  uStack_60 = 0;
  uVar8 = 0;
  if (param_3 != 0) {
    uVar2 = *(unsigned int *)(*(int *)(param_3 + 0x40) + 0x60);
    fn_82FAE490(uVar2,0,*(unsigned int *)(param_2 + 0x14) >> 0x1b,1,&uStack_60);
    uVar11 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
    lVar10 = (unsigned __int64)*(unsigned int *)(param_2 + 0x10) +
             (uVar11 + ((unsigned __int64)*(unsigned int *)(param_2 + 8) & 0x7fffffff) * 2 & 0xfffffff) * -0x10;
    if ((int)lVar10 < (int)-(unsigned __int64)uStack_60) {
      uVar1 = (unsigned int)((double)(__int64)(int)(*(unsigned int *)(param_2 + 0x10) + uStack_60) * lbl_8216CC20);
      lStack_58 = (__int64)(int)uVar1;
      uVar11 = (unsigned __int64)uVar1;
      lVar10 = -(unsigned __int64)uStack_60;
    }
    if ((((int)lVar10 == 0) && ((int)uVar11 == 0)) && ((*(unsigned int *)(param_2 + 0x14) & 0x4000000) != 0)
       ) {
      lVar10 = fn_82FAE150(uVar2);
    }
    lVar3 = fn_82FAE168(uVar2);
    fn_82FA94A0(param_3,uVar11,*(unsigned int *)(param_2 + 0xc),lVar3 + lVar10);
    uVar8 = *(unsigned short *)(param_3 + 0x30);
  }
  iVar5 = 0;
  puVar9 = (unsigned int *)(param_2 + 0x18);
  if ((param_4 & 0xffffffff) != 0) {
    piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,param_4);
    if (piVar4 == (int *)0x0) {
      *(unsigned char *)(param_1 + 0x74) = 0;
    }
    else {
      fn_82FAE648(piVar4,puVar9,0,&uStack_5c);
      iVar5 = fn_82FADD68(piVar4,param_1,*(unsigned int *)(*(int *)(param_1 + 0x38) + 0x28),
                                *(int *)(param_1 + 0x38) + 0x10);
      if (iVar5 == 0) {
        *(unsigned char *)(param_1 + 0x74) = 0;
      }
      (**(int (***)())(*piVar4 + 8))(piVar4);
    }
  }
  piVar4 = (int *)(param_1 + 0x40);
  iVar6 = fn_82FAD1F0(piVar4,uStack_60,iVar5);
  if (iVar5 != 0) {
    fn_82FA9208(iVar5);
  }
  if (iVar6 == 0) {
    iVar6 = (**(int (***)())(*piVar4 + 0x10))(piVar4);
  }
  else {
    if (iVar5 != 0) {
      if (((*(unsigned short *)(param_2 + 0x2c) & 0xe000) != 0) ||
         (uVar7 = 1, (*(unsigned short *)(param_2 + 0x2c) & 0x1000) == 0)) {
        uVar7 = 0;
      }
      lVar10 = fn_82FA9920(iVar6,uStack_5c,puVar9,uVar7);
      *(unsigned int *)(iVar6 + 0xc) = uStack_60;
      fn_82FA9428(iVar6,*puVar9,*(unsigned int *)(param_2 + 0x1c),*(unsigned int *)(iVar5 + 0x68),
                      -lVar10);
    }
    *(unsigned short *)(iVar6 + 0x30) = uVar8;
  }
  return iVar6;
}

