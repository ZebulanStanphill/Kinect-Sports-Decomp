typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8268C750();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826C8EB8(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  unsigned char in_cr0;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = param_3[3];
    uVar3 = param_3[2];
    uVar4 = param_3[1];
    uVar5 = *param_3;
    fn_8268C750(&stack_pair_50.first);
    stack_pair_50.second = uVar5;
    uStack_48 = uVar4;
    uStack_44 = uVar3;
    uStack_40 = uVar2;
    (**(int (***)())(*piVar1 + 8))(piVar1,&stack_pair_50.first,param_4);
    lVar7 = ((unsigned __int64)stack_pair_50.first & 0xfffffffc) + 4;
    do {
      puVar8 = (unsigned int *)lVar7;
      uVar9 = (unsigned __int64)*puVar8;
      if (in_RESERVE != '\0') {
        uVar6 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
        *puVar8 = uVar6;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar9 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

