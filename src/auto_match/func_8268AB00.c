typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_3c;
extern int fn_8267BE38();
extern int fn_8268A388();
extern int fn_8268A970();
extern int fn_8268C510();
extern int fn_8268C750();
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64
fn_8268AB00(double param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned int param_5)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char bVar7;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int *puStack_48;
  unsigned int *puStack_44;
  unsigned int uStack_40;
  float fStack_3c;
  unsigned int uStack_38;
  
  if ((*(int *)(param_2 + 0xc) != 0) && (param_3 != 0)) {
    fn_8268C510(&uStack_50);
    puStack_48 = &uStack_50;
    iVar3 = fn_8268A388(*(unsigned int *)(param_2 + 0xc),&puStack_48);
    bVar7 = (iVar3 == 0) << 1;
    if (iVar3 == 0) {
      fn_8268C510(&uStack_4c,param_4);
      fn_8268C750(&uStack_40,&uStack_4c);
      fStack_3c = (float)param_1;
      lVar5 = ((unsigned __int64)uStack_4c & 0xfffffffc) + 4;
      do {
        puVar6 = (unsigned int *)lVar5;
        uVar4 = (unsigned __int64)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
          *puVar6 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      bVar7 = (uVar4 == 1) << 1;
      uStack_38 = param_5;
      if (uVar4 == 1) {
        fn_8267BE38();
      }
      puStack_48 = &uStack_50;
      puStack_44 = &uStack_40;
      fn_8268A970(*(unsigned int *)(param_2 + 0xc),*(unsigned int *)(param_2 + 0xc),&puStack_48);
      lVar5 = ((unsigned __int64)uStack_40 & 0xfffffffc) + 4;
      do {
        puVar6 = (unsigned int *)lVar5;
        uVar4 = (unsigned __int64)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
          *puVar6 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      bVar7 = (uVar4 == 1) << 1;
      if (uVar4 == 1) {
        fn_8267BE38();
      }
      lVar5 = ((unsigned __int64)uStack_50 & 0xfffffffc) + 4;
      do {
        puVar6 = (unsigned int *)lVar5;
        uVar4 = (unsigned __int64)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
          *puVar6 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      if (uVar4 == 1) {
        fn_8267BE38();
      }
      return 1;
    }
    lVar5 = ((unsigned __int64)uStack_50 & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar6 = (unsigned int *)lVar5;
      uVar4 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
        *puVar6 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
    if (uVar4 == 1) {
      fn_8267BE38();
    }
  }
  return 0;
}

