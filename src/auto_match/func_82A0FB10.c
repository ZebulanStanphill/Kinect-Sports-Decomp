extern int fn_82645CF8();
extern int fn_82F6F870();
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82A0FB10(unsigned __int64 param_1,int param_2)

{
  unsigned __int64 *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  unsigned __int64 uStack_20;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  puVar1 = &uStack_30;
  puVar2 = (unsigned int *)(param_2 + 0x18);
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  lVar3 = 6;
  uStack_30 = 0;
  uStack_14 = lbl_831BB8F0;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = (unsigned __int64 *)((int)puVar1 + 4);
    *(unsigned int *)puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82645CF8(param_1,5,&uStack_30,0x1c);
  fn_82F6F870(uStack_14);
  return;
}

