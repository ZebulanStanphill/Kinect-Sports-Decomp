#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FF92F8();
extern int fn_82FFA798();
extern int fn_82FFA898();
extern int fn_82FFC9A0();
extern int fn_82FFCB90();
extern int fn_82FFD1F0();
extern int fn_82FFD318();
extern int fn_82FFD568();
extern int fn_82FFD708();
extern int fn_82FFE268();
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


unsigned __int64 fn_82FFD858(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int uStack_54;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned int uStack_30;
  
  iVar4 = param_1 + 0x34;
  uVar5 = 1;
  RtlEnterCriticalSection(iVar4);
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      puVar1 = *(unsigned int **)(param_1 + 0x6c);
      puVar2 = &uStack_54;
      lVar6 = 9;
      puVar3 = puVar1;
      do {
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = *puVar3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (puVar1 != (unsigned int *)0x0) {
        fn_82FFE268((int *)(param_1 + 0x6c),puVar1,0);
      }
      RtlLeaveCriticalSection(iVar4);
      if (stack_pair_50.first < 9) {
        if (stack_pair_50.first == 1) {
          uVar5 = fn_82FFA798(param_1,CONCAT44(1,stack_pair_50.second),uStack_48,uStack_40,uStack_38,
                                    (unsigned __int64)uStack_30 << 0x20);
        }
        else if (stack_pair_50.first == 2) {
          uVar5 = fn_82FFD568(param_1,CONCAT44(2,stack_pair_50.second),uStack_48,uStack_40,uStack_38,
                                (unsigned __int64)uStack_30 << 0x20);
        }
        else if (stack_pair_50.first == 3) {
          uVar5 = fn_82FFD708(param_1,CONCAT44(3,stack_pair_50.second),uStack_48,uStack_40,uStack_38,
                                (unsigned __int64)uStack_30 << 0x20);
        }
        else if (stack_pair_50.first == 4) {
          uVar5 = fn_82FF92F8(param_1,CONCAT44(4,stack_pair_50.second),uStack_48,uStack_40,uStack_38,
                                (unsigned __int64)uStack_30 << 0x20);
        }
        else if (stack_pair_50.first == 5) {
          uVar5 = fn_82FFD1F0(param_1,CONCAT44(5,stack_pair_50.second),uStack_48,uStack_40,uStack_38,
                                  (unsigned __int64)uStack_30 << 0x20);
        }
        else if (stack_pair_50.first == 6) {
          uVar5 = fn_82FFD318(param_1,CONCAT44(6,stack_pair_50.second),uStack_48,uStack_40,uStack_38,
                                  (unsigned __int64)uStack_30 << 0x20);
        }
        else if (stack_pair_50.first == 7) {
          uVar5 = fn_82FFCB90(param_1,CONCAT44(7,stack_pair_50.second),uStack_48,uStack_40,uStack_38,
                                  (unsigned __int64)uStack_30 << 0x20);
        }
        else if (stack_pair_50.first == 0) {
          uVar5 = fn_82FFC9A0(param_1,&stack_pair_50.first);
        }
        else {
          uVar5 = fn_82FFA898(param_1,CONCAT44(stack_pair_50.first,stack_pair_50.second),uStack_48,uStack_40,
                                  uStack_38,(unsigned __int64)uStack_30 << 0x20);
        }
      }
      RtlEnterCriticalSection(iVar4);
    } while (*(int *)(param_1 + 0x80) != 0);
  }
  RtlLeaveCriticalSection(iVar4);
  return uVar5;
}

