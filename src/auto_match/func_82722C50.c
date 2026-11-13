typedef unsigned char bool;
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_8269A190();
extern int fn_826B4808();
extern int fn_82799E48();
extern unsigned int iStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82722C50(int *param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char bVar7;
  int iStack_30;
  unsigned int auStack_2c [11];
  
  if (*(int *)(param_1[0x2d] + 0x10) != 0) {
    iVar3 = (**(int (***)())(*param_1 + 0x5c))();
    if (iVar3 != 0) {
      uVar2 = fn_82799E48(auStack_2c,param_1[0x28]);
      fn_8269A190(&iStack_30,(unsigned __int64)*(unsigned int *)(iVar3 + 0x78) + 0x254,uVar2);
      fn_82681838(param_1 + 0x2e,&iStack_30);
      lVar5 = (unsigned __int64)*(unsigned int *)(iStack_30 + 8) - 1;
      bVar7 = (lVar5 == 0) << 1;
      *(int *)(iStack_30 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8();
      }
      lVar5 = ((unsigned __int64)auStack_2c[0] & 0xfffffffc) + 4;
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
      fn_826B4808(iVar3,param_1 + 0x2d,param_1 + 0x2e,0,1);
    }
  }
  return;
}

