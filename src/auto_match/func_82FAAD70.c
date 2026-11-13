extern int fn_82FA5190();
extern int fn_82FA7A48();
extern int fn_82FA9208();
extern int fn_82FA9DC8();
extern int fn_82FAA820();
extern int fn_82FAC5F0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264230;
extern unsigned int uStack_48;


void fn_82FAAD70(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  unsigned int uStack_48;
  
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  puStack_50 = (unsigned int *)0x0;
  puStack_4c = (unsigned int *)0x0;
  uStack_48 = 0;
  lVar5 = 0x400 - (unsigned __int64)uVar1;
  *(unsigned int *)(param_1 + 0x20) = uVar1 - 1;
  *(unsigned int *)(param_1 + 0x34) = uVar1 - 1;
  if ((int)param_2 != -1) {
    lVar5 = param_2 - (unsigned __int64)uVar1;
  }
  fn_82FAA820(param_1,&puStack_50,lVar5);
  puVar4 = puStack_4c;
  puVar3 = puStack_50;
  if (puStack_50 != puStack_4c) {
    puVar7 = puStack_50 + 2;
    do {
      if (puVar7[-1] == 1) {
        fn_82FA7A48(lbl_83264230,*puVar7);
      }
      puVar6 = puVar7 + 1;
      puVar7 = puVar7 + 3;
    } while (puVar6 != puVar4);
  }
  if (puVar3 != (unsigned int *)0x0) {
    fn_82FA5190(lbl_831BC768,puVar3);
  }
  fn_82FA9DC8(param_1,-(unsigned __int64)*(unsigned int *)(param_1 + 0xc));
  fn_82FAC5F0(*(unsigned int *)(param_1 + 0x40));
  iVar2 = *(int *)(param_1 + 0x40);
  *(unsigned int *)(param_1 + 0x40) = 0;
  if (iVar2 != 0) {
    fn_82FA9208();
  }
  *(unsigned char *)(param_1 + 0x4c) = 1;
  return;
}

