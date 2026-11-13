typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_8268ACE8();
extern int fn_8268B330();
extern int fn_8268BD50();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_8269A190();
extern unsigned int iStack_2c;
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200FCF0;
extern unsigned int uStack_24;
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8271C770(int param_1)

{
  unsigned int uVar1;
  char cVar3;
  __int64 lVar2;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  char in_RESERVE;
  unsigned char bVar7;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned char **ppuStack_28;
  unsigned int uStack_24;
  unsigned int *puStack_20;
  
  cVar3 = fn_82695468(param_1,0x1b);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee50,0,0);
  }
  else {
    iVar6 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar6 = 0;
    }
    fn_8268B330(&uStack_30);
    uStack_24 = *(unsigned int *)(param_1 + 0x18);
    puStack_20 = &uStack_30;
    ppuStack_28 = &lbl_8200FCF0;
    (**(int (***)())(*(int *)(iVar6 + 0x10) + 0x20))
              (iVar6 + 0x10,(unsigned __int64)uStack_24 + 0x78,&ppuStack_28,0,0);
    lVar2 = fn_8268ACE8(&uStack_30);
    fn_8268BD50(&uStack_30,lVar2 + -1,1);
    fn_8269A190(&iStack_2c,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                      &uStack_30);
    fn_82681838(*(unsigned int *)(param_1 + 4),&iStack_2c);
    lVar2 = (unsigned __int64)*(unsigned int *)(iStack_2c + 8) - 1;
    bVar7 = (lVar2 == 0) << 1;
    *(int *)(iStack_2c + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8();
    }
    ppuStack_28 = &lbl_8200C4D4;
    lVar2 = ((unsigned __int64)uStack_30 & 0xfffffffc) + 4;
    do {
      puVar5 = (unsigned int *)lVar2;
      uVar4 = (unsigned __int64)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar2);
        *puVar5 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
    if (uVar4 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

