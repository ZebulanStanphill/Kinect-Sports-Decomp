typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_20;
extern int fn_8251F468();
extern int fn_8265BF48();
extern unsigned int lbl_83276741;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82520578(__int64 param_1)

{
  bool bVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_20 [2];
  
  lVar3 = param_1 + 4;
  do {
    puVar4 = (unsigned int *)lVar3;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar4 + 1,0,lVar3);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  *(unsigned int *)((int)param_1 + 8) = 1;
  fn_8251F468(0xffffffff832961d0,param_1 + 0x10,2,0,0xffffffff82520540,param_1,0,0);
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar4 + 1,0,lVar3);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  fn_8251F468(0xffffffff832961d8,0,2,0,0xffffffff82520360,param_1,0,0);
  auStack_20[0] = fn_8265BF48(0xffffffff821c1318,0);
  bVar1 = lbl_83276741 == '\0';
  if (bVar1) {
    lbl_83276741 = '\x01';
  }
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar4 + 1,0,lVar3);
      *puVar4 = uVar2;
      bVar1 = true;
    }
  } while (!bVar1);
  fn_8251F468(auStack_20,param_1 + 0xc,2,0,0xffffffff82520420,param_1,0,0);
  return;
}

