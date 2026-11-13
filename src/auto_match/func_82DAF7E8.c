extern int fn_82CFF8D0();
extern int fn_82D714B8();
extern int fn_82D717C8();


void fn_82DAF7E8(int param_1,int *param_2)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*(unsigned int *)(param_1 + 0x50) & 0x80000000) == 0) {
    uVar4 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x48),*(unsigned int *)(param_1 + 0x50) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141e94,*(unsigned int *)(param_1 + 0x48),
               *(int *)(param_1 + 0x4c) << 2,uVar4);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(iVar6 + *(int *)(param_1 + 0x48));
      (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82141e60,iVar2,0);
      (**(int (***)())(*param_2 + 0x18))(param_2,0xffffffff82141e68);
      uVar1 = *(unsigned short *)(iVar2 + 0xb2);
      if ((uVar1 & 0x8000) == 0) {
        (**(int (***)())(*param_2 + 0x14))
                  (param_2,3,0xffffffff82141e74,*(unsigned int *)(iVar2 + 0xac),
                   (unsigned __int64)*(unsigned short *)(iVar2 + 0xb0) * 0x30,
                   (((unsigned __int64)uVar1 & 0x3fff) + ((unsigned __int64)uVar1 & 0x3fff) * 2) * 0x10);
      }
      iVar7 = 0;
      if (*(short *)(iVar2 + 0xb0) != 0) {
        iVar8 = 0;
        do {
          iVar3 = *(int *)(*(int *)(iVar2 + 0xac) + iVar8);
          if ((*(unsigned short *)(iVar3 + 4) & 0x7fff) != 0) {
            (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82141e80,iVar3,0);
          }
          iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0xac) + iVar8) + 0xc);
          if ((*(unsigned short *)(iVar3 + 4) & 0x7fff) != 0) {
            (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82141e8c,iVar3,0);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x30;
        } while (iVar7 < (int)(unsigned int)*(unsigned short *)(iVar2 + 0xb0));
      }
      (**(int (***)())(*param_2 + 0x1c))(param_2);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  if ((*(unsigned int *)(param_1 + 0x40) & 0x80000000) == 0) {
    uVar4 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x38),*(unsigned int *)(param_1 + 0x40) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141e54,*(unsigned int *)(param_1 + 0x38),
               *(int *)(param_1 + 0x3c) << 2,uVar4);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar6 = 0;
    do {
      (**(int (***)())(*param_2 + 0xc))
                (param_2,0xffffffff8213331c,*(unsigned int *)(iVar6 + *(int *)(param_1 + 0x38)),0);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x3c));
  }
  fn_82D717C8(param_1 + 0x58,param_2);
  (**(int (***)())(*param_2 + 0x18))(param_2,0xffffffff82141e48);
  fn_82D714B8(param_1 + 0x58,*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78),param_2);
  (**(int (***)())(*param_2 + 0x1c))(param_2);
  return;
}

