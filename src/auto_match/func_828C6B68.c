typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_8288F730();
extern int fn_828B5580();
extern int fn_828B57E8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828C6B68(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar5;
  int iVar6;
  __int64 lVar3;
  unsigned char uVar7;
  unsigned __int64 uVar4;
  unsigned char auStack_30 [1];
  
  iVar5 = fn_828E9DA8(param_2);
  iVar6 = fn_828E9D90(param_2);
  if (iVar5 - iVar6 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = fn_828E9FF8(param_2,1);
  }
  *(bool *)(param_1 + 0x98) = lVar3 != 0;
  fn_828B57E8(param_1 + 0x80,*(unsigned int *)(param_1 + 0x6c),param_2);
  if (*(char *)(param_1 + 0x98) != '\0') {
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if (iVar5 - iVar6 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_828E9FF8(param_2,8);
    }
    *(unsigned char *)(param_1 + 0xa0) = uVar7;
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar2 = *(unsigned int *)(param_1 + 0x6c);
    uVar4 = fn_828B5580(auStack_30,param_1 + 0x80);
    fn_8288F730(uVar2,uVar4,uVar1,param_2,param_1 + 0x88);
  }
  return;
}

