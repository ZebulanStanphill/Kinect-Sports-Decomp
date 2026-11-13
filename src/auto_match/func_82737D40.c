typedef unsigned char bool;
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_8269A190();
extern int fn_82755978();
extern unsigned int iStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82737D40(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char bVar8;
  int iStack_30;
  unsigned int auStack_2c [11];
  
  cVar4 = fn_82695468(param_1,0x29);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      if (*(int *)(param_1 + 0x1c) < 1) {
        uVar3 = 0;
      }
      else {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        uVar3 = fn_82695608(uVar3,uVar1);
      }
      fn_82755978(auStack_2c,uVar7 + 0x30,uVar3);
      fn_8269A190(&iStack_30,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        auStack_2c);
      fn_82681838(*(unsigned int *)(param_1 + 4),&iStack_30);
      lVar5 = (unsigned __int64)*(unsigned int *)(iStack_30 + 8) - 1;
      bVar8 = (lVar5 == 0) << 1;
      *(int *)(iStack_30 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8();
      }
      lVar5 = ((unsigned __int64)auStack_2c[0] & 0xfffffffc) + 4;
      do {
        puVar6 = (unsigned int *)lVar5;
        uVar7 = (unsigned __int64)*puVar6;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
          *puVar6 = uVar2;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      if (uVar7 == 1) {
        fn_8267BE38();
      }
    }
  }
  return;
}

