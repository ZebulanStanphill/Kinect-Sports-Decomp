extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82522DF8();
extern int fn_82544718();
extern int fn_825B1F70();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_8263C910();
extern int fn_826438C0();
extern int fn_82A93C18();
extern int memcpy();
extern unsigned int lbl_8326B314;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_66;
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_6b;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_94;


void fn_825B1A20(void)

{
  int iVar3;
  __int64 lVar1;
  unsigned int uVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar5;
  unsigned char auStack_a0 [4];
  unsigned char auStack_9c [4];
  unsigned char auStack_98 [4];
  unsigned int uStack_94;
  unsigned char auStack_90 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned char uStack_6c;
  unsigned char uStack_6b;
  unsigned char uStack_6a;
  unsigned short uStack_68;
  unsigned short uStack_66;
  unsigned int uStack_64;
  unsigned char uStack_60;
  unsigned char uStack_5f;
  unsigned char uStack_5e;
  
  iVar3 = fn_82522DF8(0xbc);
  stack_pair_80.second = 0;
  stack_pair_80.first = 0x7f4;
  uStack_78 = 0;
  uStack_74 = 0;
  fn_82520158(0xffffffff821c8200,auStack_a0,0);
  fn_82520158(0xffffffff821c8224,auStack_9c,0);
  fn_82520158(0xffffffff821c8244,auStack_98,0);
  fn_82520158(0xffffffff821c8264,&uStack_94,0);
  lVar1 = fn_8251F720(auStack_a0,0);
  if (lVar1 == 0) {
    *(unsigned int *)(iVar3 + 0x44) = 0;
  }
  else {
    uVar4 = fn_82631830(lVar1);
    *(unsigned int *)(iVar3 + 0x44) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_9c,0);
  if (lVar1 == 0) {
    *(unsigned int *)(iVar3 + 0x48) = 0;
  }
  else {
    uVar4 = fn_82631488(lVar1);
    *(unsigned int *)(iVar3 + 0x48) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_98,0);
  if (lVar1 == 0) {
    *(unsigned int *)(iVar3 + 0x4c) = 0;
  }
  else {
    uVar4 = fn_82631830(lVar1);
    *(unsigned int *)(iVar3 + 0x4c) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(&uStack_94,0);
  if (lVar1 == 0) {
    *(unsigned int *)(iVar3 + 0x50) = 0;
  }
  else {
    uVar4 = fn_82631488(lVar1);
    *(unsigned int *)(iVar3 + 0x50) = uVar4;
    fn_8251FA58(lVar1);
  }
  uVar4 = fn_8263C910(0xa0,0x5a,0x18280186,0,&stack_pair_80.first);
  *(unsigned int *)(iVar3 + 0x40) = uVar4;
  stack_pair_80.first = 0;
  stack_pair_80.second = 0x2c23a5;
  uStack_78 = ((((unsigned __int64)(uStack_78)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)((unsigned short)uStack_78 & 0xff)) & ((unsigned __int64)0xFFFF)) << 16));
  uStack_78 = (unsigned int)(((unsigned __int64)(uStack_78) >> 16) & 0xFFFF);
  uStack_74 = 8;
  uStack_70 = 0x2c23a5;
  uStack_6c = 0;
  uStack_6b = 5;
  uStack_6a = 0;
  uStack_68 = 0xff;
  uStack_66 = 0;
  uStack_64 = 0xffffffff;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  if (*(int *)(iVar3 + 0x44) != 0) {
    uVar2 = fn_82631BF8(&stack_pair_80.first);
    uStack_94 = 0x10;
    fn_826438C0(*(unsigned int *)(iVar3 + 0x44),0,uVar2,&uStack_94,0);
    fn_8262FEC8(uVar2);
  }
  fn_82520158(0xffffffff821c8280,&uStack_94,0);
  fn_82520158(0xffffffff821c829c,auStack_98,0);
  fn_82520158(0xffffffff821c82b8,auStack_9c,0);
  fn_82520158(0xffffffff821c82dc,auStack_a0,0);
  lVar1 = fn_8251F720(&uStack_94,0);
  if (lVar1 != 0) {
    uVar4 = fn_82631830(lVar1);
    *(unsigned int *)(iVar3 + 0x78) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_98,0);
  if (lVar1 != 0) {
    uVar4 = fn_82631488(lVar1);
    *(unsigned int *)(iVar3 + 0x7c) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_9c,0);
  if (lVar1 != 0) {
    uVar4 = fn_82631488(lVar1);
    *(unsigned int *)(iVar3 + 0x80) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_a0,0);
  if (lVar1 != 0) {
    uVar4 = fn_82631488(lVar1);
    *(unsigned int *)(iVar3 + 0x84) = uVar4;
    fn_8251FA58(lVar1);
  }
  stack_pair_80.first = 0;
  stack_pair_80.second = 0x2c23a5;
  uStack_78 = ((((unsigned __int64)(uStack_78)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)((unsigned short)uStack_78 & 0xff)) & ((unsigned __int64)0xFFFF)) << 16));
  uStack_78 = (unsigned int)(((unsigned __int64)(uStack_78) >> 16) & 0xFFFF);
  uStack_74 = 0xff0000;
  uStack_70 = 0xffffffff;
  uStack_6c = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  if (*(int *)(iVar3 + 0x78) != 0) {
    uVar2 = fn_82631BF8(&stack_pair_80.first);
    uStack_94 = 8;
    fn_826438C0(*(unsigned int *)(iVar3 + 0x78),0,uVar2,&uStack_94,0);
    fn_8262FEC8(uVar2);
  }
  uVar5 = (unsigned __int64)lbl_8326B314;
  lVar1 = fn_82A93C18(lbl_8326B430,lbl_8326B434,1,0,0x28000102,0,0,0xffffffffffffffff);
  uVar2 = fn_82544718(&stack_pair_80.first,lbl_8326B430,lbl_8326B434,0x28000102,uVar5 - lVar1,auStack_90
                           );
  memcpy(iVar3 + 0x88,uVar2,0x34);
  fn_82520158(0xffffffff821c8300,&uStack_94,0);
  fn_82520158(0xffffffff821c8314,auStack_98,0);
  uVar4 = fn_8251F720(&uStack_94,0);
  *(unsigned int *)(iVar3 + 0x54) = uVar4;
  uVar4 = fn_8251F720(auStack_98,0);
  *(unsigned int *)(iVar3 + 0x58) = uVar4;
  fn_825B1F70(iVar3);
  return;
}

