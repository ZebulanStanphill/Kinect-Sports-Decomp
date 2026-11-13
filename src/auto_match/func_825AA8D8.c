typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_822CB020();
extern int fn_825117D8();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_825290F0();
extern int fn_8255BCC0();
extern int fn_825AD9E8();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_83297800;
extern unsigned int lbl_83297810;


bool fn_825AA8D8(int *param_1)

{
  int iVar3;
  int iVar4;
  __int64 lVar1;
  int iVar5;
  unsigned char uVar6;
  unsigned __int64 uVar2;
  unsigned __int64 uVar7;
  bool bVar8;
  unsigned int auStack_60 [2];
  int iStack_58;
  int iStack_54;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [32];
  
  iVar3 = lbl_83297800;
  if (lbl_83297800 == 0) {
    iVar3 = fn_825117D8();
  }
  if (*(char *)(iVar3 + 9) == '\0') {
    bVar8 = false;
  }
  else {
    iVar3 = param_1[4];
    bVar8 = false;
    uVar7 = (unsigned __int64)lbl_83297810;
    if (uVar7 == 0) {
      uVar7 = fn_82511928();
    }
    fn_82513A80(&iStack_58,uVar7,iVar3);
    if (iStack_58 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_8255BCC0(*(unsigned int *)(iStack_58 + 4));
    }
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 2)) {
      iVar4 = (**(int (***)())(*param_1 + 8))(param_1);
      auStack_60[0] = (**(int (***)())(*(int *)(iVar4 + 0x48) + 0x3c))();
      lVar1 = (**(int (***)())(*param_1 + 8))(param_1);
      fn_825AD9E8(auStack_40,lVar1 + 0x248);
      lVar1 = (**(int (***)())(*param_1 + 8))(param_1);
      fn_822CB020(auStack_50,lVar1 + 0x29c);
      iVar4 = (**(int (***)())(*param_1 + 8))(param_1);
      iVar5 = (**(int (***)())(*param_1 + 8))(param_1);
      uVar6 = (**(int (***)())(*(int *)(iVar4 + 0x198) + 0x3c))((int *)(iVar4 + 0x198));
      uVar2 = (**(int (***)())(*(int *)(iVar5 + 0x144) + 0x3c))((int *)(iVar5 + 0x144));
      lVar1 = fn_825290F0(iVar3,auStack_60,param_1,auStack_40,auStack_50,uVar2,uVar6);
      bVar8 = lVar1 != 0;
    }
    if (iStack_54 != 0) {
      fn_822315A0();
    }
  }
  return bVar8;
}

