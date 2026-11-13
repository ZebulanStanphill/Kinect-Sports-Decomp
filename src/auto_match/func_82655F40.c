extern unsigned int *auStack_68;
extern unsigned int *auStack_b0;
extern int fn_82655C68();
extern int fn_82F68CC0();
extern int fn_8314284C();
extern unsigned int uStack_6a;
extern unsigned int uStack_6c;
extern unsigned int uStack_6e;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


void fn_82655F40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned char auStack_b0 [4];
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned short uStack_70;
  unsigned short uStack_6e;
  unsigned short uStack_6c;
  unsigned short uStack_6a;
  unsigned char auStack_68 [104];
  
  uStack_ac = *(unsigned int *)(param_2 + 4);
  uStack_a8 = *(unsigned int *)(param_2 + 8);
  uStack_a4 = *(unsigned int *)(param_2 + 0xc);
  uStack_a0 = *(unsigned int *)(param_2 + 0x10);
  uStack_9c = *(unsigned int *)(param_2 + 0x14);
  if (*(int *)(param_2 + 0x18) == 0) {
    uStack_98 = 0;
    uStack_88 = 0;
  }
  else {
    uStack_98 = 3;
    uStack_88 = 3;
  }
  iVar1 = *(int *)(param_1 + 0x3ac0);
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x35bc);
    iVar2 = *(int *)(param_1 + 0x35c0);
  }
  else {
    iVar2 = (*(unsigned int *)(iVar1 + 0x28) >> 0x1e & 2) + 1;
    iVar3 = (*(unsigned int *)(iVar1 + 0x24) & 0x1fff) + iVar2;
    iVar2 = (*(unsigned int *)(iVar1 + 0x24) >> 0xd & 0x1fff) + iVar2;
  }
  fn_82F68CC0(param_1 + 0x3670,auStack_b0,0x38);
  *(unsigned char *)(param_1 + 0x2abe) = *(unsigned char *)(param_1 + 0x2abe) | 0x10;
  fn_82655C68(param_1,iVar3,iVar2,param_1 + 0x3670,auStack_b0);
  uStack_70 = (unsigned short)iVar3;
  uStack_6e = (unsigned short)iVar2;
  uStack_6c = (unsigned short)*(unsigned int *)(param_1 + 0x5500);
  uStack_6a = (unsigned short)*(unsigned int *)(param_1 + 0x5504);
  fn_82F68CC0(auStack_68,auStack_b0,0x38);
  fn_8314284C(1,&uStack_70);
  return;
}

