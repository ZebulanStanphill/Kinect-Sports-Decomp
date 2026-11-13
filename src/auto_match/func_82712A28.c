typedef unsigned char bool;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_826EF268();
extern int fn_826EFAF8();
extern int fn_826EFDB8();
extern int fn_8278FAF0();
extern int fn_82F6A3F0();
extern unsigned int lbl_8200C4D4;
extern unsigned int uStack_58;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82712A28(int param_1)

{
  unsigned int uVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char bVar7;
  unsigned int auStack_80 [4];
  unsigned char auStack_70 [12];
  unsigned char **ppuStack_64;
  unsigned int uStack_58;
  
  piVar3 = (int *)(**(int (***)())(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x24);
  bVar7 = (piVar3 == (int *)0x0) << 1;
  if (piVar3 == (int *)0x0) {
    uVar2 = fn_8278FAF0();
  }
  else {
    fn_8267C4F0(piVar3);
    if (piVar3[3] == 0) {
      uVar2 = fn_8278FAF0();
      fn_826EFAF8(auStack_70,uVar2);
      fn_826EFDB8(auStack_70);
      (**(int (***)())(*piVar3 + 8))(piVar3,0xffffffff8200ef60,uStack_58);
      ppuStack_64 = &lbl_8200C4D4;
      fn_826EF268(auStack_70);
    }
    else {
      fn_8268B330(auStack_80);
      (**(int (***)())(*piVar3 + 4))(piVar3,0xffffffff8200ef60,auStack_80);
      uVar2 = fn_82F6A3F0(((unsigned __int64)auStack_80[0] & 0xfffffffc) + 8,0,10);
      lVar4 = ((unsigned __int64)auStack_80[0] & 0xfffffffc) + 4;
      do {
        puVar5 = (unsigned int *)lVar4;
        uVar6 = (unsigned __int64)*puVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
          *puVar5 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      if (uVar6 == 1) {
        fn_8267BE38();
      }
    }
  }
  return uVar2;
}

