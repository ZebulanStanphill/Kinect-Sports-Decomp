extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_826EB5F0();
extern int fn_826EDCB0();
extern int fn_8270D8E0();
extern int fn_8270DE48();
extern int fn_8270E1B8();
extern int fn_8275EB28();
extern int fn_827603C0();
extern int fn_82762700();
extern int fn_82762BE0();
extern int fn_82783F98();
extern int fn_827842B8();
extern unsigned int lbl_82005748;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_82764060(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  double dVar4;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [4];
  unsigned char *pbStack_6c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  dVar4 = (double)lbl_82005748;
  iVar1 = *(int *)(*(int *)(param_5 + 0x18) + 0x10);
  iVar3 = iVar1 + 8;
  fn_827842B8(param_1,dVar4,iVar3);
  fn_82783F98(param_1,iVar3);
  *(unsigned char *)(iVar1 + 0x4c) = *(unsigned char *)(param_2 + 0x24) >> 3 & 1;
  if ((*(unsigned char *)(param_2 + 0x24) & 0x10) != 0) {
    fn_826EB5F0(dVar4,param_3,param_2 + 4);
  }
  if (param_6 != 0) {
    fn_8270D8E0(param_6);
    if ((*(unsigned char *)(param_2 + 0x24) & 0x10) != 0) {
      uVar2 = fn_8270E1B8(auStack_80,param_6,param_2 + 4);
      fn_826EB5F0(dVar4,param_3,uVar2);
    }
  }
  fn_8275EB28(auStack_70,param_2);
  while (uStack_58 < uStack_54) {
    if ((*pbStack_6c & 7) == 0) {
      fn_82762700(param_2,param_3,iVar3,param_5,param_6);
      fn_827842B8(iVar3);
      fn_827603C0(auStack_70);
    }
    else {
      fn_82762BE0(auStack_70,iVar3);
    }
  }
  fn_82762700(param_2,param_3,iVar3,param_5,param_6);
  fn_827842B8(iVar3);
  if ((param_6 != 0) && (*(int *)(param_6 + 0x164) != 0)) {
    fn_8270DE48(param_6);
    fn_826EDCB0(param_3,param_6 + 0x160);
  }
  return;
}

