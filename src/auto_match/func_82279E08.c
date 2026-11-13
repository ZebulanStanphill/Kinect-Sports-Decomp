#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_90 ((*(unsigned __int64*)&fStack_90))
extern unsigned int *auStack_60;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_8227A7B8();
extern int fn_8227E790();
extern int fn_8227F578();
extern int fn_8227F728();
extern int fn_82536590();
extern int fn_8266F578();
extern unsigned int uStack_80;


void fn_82279E08(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  float fStack_90;
  float fStack_8c;
  struct { float first; float second; } stack_pair_88;

  unsigned __int64 uStack_80;
  float fStack_78;
  float fStack_74;
  struct { float first; float second; } stack_pair_70;

  unsigned char auStack_60 [16];

  iVar3 = fn_8266F578(*(unsigned int *)(param_1 + 8));
  if (iVar3 == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0xe8) = 1;
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0xf0) != 0)) {
    uVar8 = 0;
    piVar1 = (int *)**(int **)(param_1 + 0x10);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      iVar3 = 0;
      do {
        uVar5 = *(unsigned __int64 *)(piVar1[2] + 0x228);
        uVar7 = *(unsigned __int64 *)(piVar1[2] + 0x230);
        uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)uVar5)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        fStack_8c = (float)uVar7;
        fStack_90 = (float)((unsigned __int64)uVar7 >> 0x20);
        uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned __int64)uVar5 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        _fStack_90 = CONCAT44(fStack_90 + (((unsigned __int64)(uStack_80) >> 0) & 0xFFFFFFFF),fStack_8c + (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF));
        uStack_80 = uVar5;
        fn_8227A7B8(param_1,&uStack_80,&fStack_90,&stack_pair_88.first,&stack_pair_70.first,auStack_60);
        fStack_78 = stack_pair_70.first - stack_pair_88.first;
        iVar2 = *(int *)(param_1 + 0x9c);
        fStack_74 = stack_pair_70.second - stack_pair_88.second;
        if ((uVar8 & 0xffffffff) <
            (unsigned __int64)(unsigned int)(*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2)) {
          uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 0xc) + iVar3);
          iVar4 = fn_8227F728(uVar6,&stack_pair_88.first,&fStack_78);
          if (iVar4 == 0) {
            *(unsigned __int64 *)((int)uVar6 + 0x1c) = CONCAT44(stack_pair_88.first,stack_pair_88.second);
            *(unsigned __int64 *)((int)uVar6 + 0x24) = CONCAT44(fStack_78,fStack_74);
            fn_8227F578(uVar6);
            *(unsigned int *)(iVar2 + 0x3c) = 1;
          }
        }
        fn_8227E790(*(unsigned int *)(param_1 + 0x9c),uVar8,auStack_60);
        uVar8 = uVar8 + 1;
        iVar3 = iVar3 + 4;
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x10));
    }
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    if (*(int *)(param_1 + 0x104) == 0) goto LAB_82279f84;
    iVar3 = param_1 + 0x10c;
  }
  else {
    if (*(int *)(param_1 + 0x104) != 0) goto LAB_82279f84;
    iVar3 = param_1 + 0x108;
  }
  fn_82536590(iVar3,0);
LAB_82279f84:
  *(unsigned int *)(param_1 + 0xe8) = 0;
  *(unsigned int *)(param_1 + 0x104) = *(unsigned int *)(param_1 + 0x100);
  return;
}
