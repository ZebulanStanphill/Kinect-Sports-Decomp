typedef unsigned char bool;
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268C750();
extern int fn_826D7220();
extern int fn_826F34B0();
extern int fn_826F35B0();
extern int fn_826F8298();
extern unsigned int uStack_38;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826F89A8(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char bVar6;
  unsigned int auStack_40 [2];
  unsigned int uStack_38;
  unsigned char auStack_34 [4];
  unsigned char auStack_30 [48];
  
  uStack_38 = 4;
  fn_8268C750(auStack_34,param_1 + 0x18);
  fn_8268C750(auStack_30,param_1 + 0x14);
  fn_8268B330(auStack_40);
  fn_826F35B0(*(unsigned int *)(param_1 + 0x10),auStack_40,&uStack_38);
  uVar2 = fn_826F34B0(*(unsigned int *)(param_1 + 0x10),((unsigned __int64)auStack_40[0] & 0xfffffffc) + 8,
                        0);
  bVar6 = (uVar2 == 0) << 1;
  if (uVar2 == 0) {
    *(unsigned char *)(param_1 + 0x28) = 1;
  }
  else {
    uVar3 = fn_826F8298(uVar2,param_1 + 0x1c,param_1 + 0x20);
    *(unsigned char *)(param_1 + 0x28) = uVar3;
  }
  sync(1);
  *(unsigned int *)(param_1 + 0x24) = 1;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  lVar4 = ((unsigned __int64)auStack_40[0] & 0xfffffffc) + 4;
  do {
    puVar5 = (unsigned int *)lVar4;
    uVar2 = (unsigned __int64)*puVar5;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar4);
      *puVar5 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1 & 1));
  if (uVar2 == 1) {
    fn_8267BE38();
  }
  fn_826D7220(&uStack_38);
  return;
}

