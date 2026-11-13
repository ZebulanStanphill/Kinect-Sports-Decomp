typedef unsigned char bool;
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_68;
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_8268BA10();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826DDD10();
extern int fn_826DFB98();
extern int fn_826E2FF0();
extern int fn_826E3B90();
extern int fn_826E7800();
extern int fn_826E9530();
extern int fn_826F49B0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826E3C50(int param_1,int *param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned int uVar3;
  unsigned short uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char *puVar9;
  __int64 lVar8;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  int iVar12;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int auStack_68;
  struct { int first; int second; } stack_pair_60;

  
  iVar12 = *(int *)(param_1 + 0x314);
  if (iVar12 == 0) {
    iVar12 = param_1 + 0x28;
  }
  fn_8268B330(&uStack_6c);
  fn_826E9530(iVar12,&uStack_6c);
  *(unsigned char *)(iVar12 + 0x15) = 0;
  if (*(int *)(iVar12 + 0x30) - *(int *)(iVar12 + 0x2c) < 2) {
    fn_826E7800(iVar12,2);
  }
  puVar9 = (unsigned char *)(*(int *)(iVar12 + 0x3c) + *(int *)(iVar12 + 0x2c));
  uVar1 = puVar9[1];
  uVar2 = *puVar9;
  *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) + 2;
  uVar4 = CONCAT11(uVar1,uVar2);
  uVar11 = (unsigned __int64)uVar4;
  if (*param_2 == 0x47) {
    uVar6 = 0xffffffff8200d25c;
  }
  else {
    uVar6 = 0xffffffff8200d28c;
  }
  fn_826A9280(param_1 + 0x14,uVar6,((unsigned __int64)uStack_6c & 0xfffffffc) + 8,uVar11);
  if (*param_2 == 0x47) {
    fn_826A6A38(param_1);
  }
  iVar5 = fn_826E3B90(param_1);
  *(unsigned int *)(iVar5 + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x20) + 0x78);
  fn_8268BA10(iVar5 + 0xc,&uStack_6c);
  if (uVar4 != 0) {
    do {
      fn_8268B330(&uStack_70);
      *(unsigned char *)(iVar12 + 0x15) = 0;
      if (*(int *)(iVar12 + 0x30) - *(int *)(iVar12 + 0x2c) < 2) {
        fn_826E7800(iVar12,2);
      }
      puVar9 = (unsigned char *)(*(int *)(iVar12 + 0x3c) + *(int *)(iVar12 + 0x2c));
      uVar1 = puVar9[1];
      uVar2 = *puVar9;
      *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) + 2;
      uVar4 = CONCAT11(uVar1,uVar2);
      fn_826E9530(iVar12,&uStack_70);
      fn_826A9280(param_1 + 0x14,0xffffffff8200d23c,uVar4,
                        ((unsigned __int64)uStack_70 & 0xfffffffc) + 8);
      auStack_68 = (unsigned int)uVar4;
      fn_826DDD10(&stack_pair_60.first,*(unsigned int *)(param_1 + 0x20),&auStack_68);
      fn_826E2FF0(iVar5,((unsigned __int64)uStack_70 & 0xfffffffc) + 8,uVar4,stack_pair_60.second);
      if ((stack_pair_60.first == 0) && (stack_pair_60.second != 0)) {
        fn_82687270();
      }
      lVar8 = ((unsigned __int64)uStack_70 & 0xfffffffc) + 4;
      do {
        puVar10 = (unsigned int *)lVar8;
        uVar7 = (unsigned __int64)*puVar10;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(uVar7 - 1,0,lVar8);
          *puVar10 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (uVar7 == 1) {
        fn_8267BE38();
      }
      uVar11 = uVar11 - 1;
      in_cr0 = (uVar11 == 0) << 1;
    } while (uVar11 != 0);
  }
  fn_826F49B0(param_1,iVar5);
  auStack_68 = fn_826DFB98(param_1);
  *(unsigned int *)(auStack_68 + 4) = *(unsigned int *)(iVar5 + 0x14);
  fn_826AA460(param_1 + 0x308,&auStack_68);
  lVar8 = ((unsigned __int64)uStack_6c & 0xfffffffc) + 4;
  do {
    puVar10 = (unsigned int *)lVar8;
    uVar11 = (unsigned __int64)*puVar10;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar11 - 1,0,lVar8);
      *puVar10 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar11 == 1) {
    fn_8267BE38();
  }
  return;
}

