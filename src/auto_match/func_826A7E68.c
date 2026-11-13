typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_8268BF50();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_8269A190();
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826A7E68(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned int uStack_30;
  unsigned int *puStack_2c;
  int aiStack_28 [4];
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_2c,uVar4,uVar2,0xffffffffffffffff,0);
    fn_8268B330(&uStack_30);
    uVar2 = *puStack_2c;
    uVar4 = fn_82693A98(&puStack_2c);
    fn_8268BF50(uVar2,uVar4,&uStack_30);
    fn_8269A190(aiStack_28,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                      &uStack_30);
    fn_82681838(*(unsigned int *)(param_1 + 4),aiStack_28);
    lVar6 = (unsigned __int64)*(unsigned int *)(aiStack_28[0] + 8) - 1;
    bVar8 = (lVar6 == 0) << 1;
    *(int *)(aiStack_28[0] + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8();
    }
    lVar6 = ((unsigned __int64)uStack_30 & 0xfffffffc) + 4;
    do {
      puVar7 = (unsigned int *)lVar6;
      uVar5 = (unsigned __int64)*puVar7;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar3;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38();
    }
    uVar3 = puStack_2c[2];
    puStack_2c[2] = (int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 == 0) {
      fn_826944C8(puStack_2c);
    }
  }
  return;
}

