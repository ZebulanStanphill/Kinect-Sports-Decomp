typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C7078();
extern int fn_822C8B40();
extern int fn_822EA970();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_824060E8();
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_822EA278(unsigned int *param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  char cVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char auStack_50 [4];
  int *piStack_4c;
  
  uVar1 = *(unsigned int *)(param_2 + 0x48);
  uVar2 = *(unsigned int *)(param_2 + 0x44);
  fn_824060E8(&uStack_58,param_2 + 0x34);
  fn_822C7078(auStack_50,&uStack_58,uVar2,uVar1);
  stack_pair_60.first = 0;
  fn_822EA970(&uStack_58,param_3,auStack_50,*(unsigned int *)(param_2 + 0x80),param_3,&stack_pair_60.first
                   );
  iVar4 = fn_82365BD8(&stack_pair_60.first,param_4);
  fn_82376640((unsigned __int64)uStack_58 + 0x30,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  if (uStack_54 != 0) {
    cVar5 = fn_8223AAC0(uStack_54);
    in_cr0 = (cVar5 == '\0') << 1;
    if (cVar5 != '\0') {
      stack_pair_60.second = uStack_54;
      stack_pair_60.first = uStack_58;
    }
  }
  fn_822C8B40(param_2,&stack_pair_60.first);
  if (stack_pair_60.second != 0) {
    fn_822315A0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (uStack_54 != 0) {
    cVar5 = fn_8223AAC0(uStack_54);
    in_cr0 = (cVar5 == '\0') << 1;
    if (cVar5 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = uStack_54;
      *param_1 = uStack_58;
    }
    fn_822315A0(uStack_54);
  }
  if (ZEXT48(piStack_4c) != 0) {
    lVar7 = ZEXT48(piStack_4c) + 8;
    do {
      puVar8 = (unsigned int *)lVar7;
      lVar6 = (unsigned __int64)*puVar8 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar6,0,lVar7);
        *puVar8 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(int (***)())(*piStack_4c + 4))();
    }
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

