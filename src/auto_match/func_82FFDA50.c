#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82A1E650();
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


unsigned __int64 fn_82FFDA50(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  __int64 lVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_54;

  unsigned int uStack_4c;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned int uStack_30;
  
  fn_82A1E650(*(unsigned int *)(param_1 + 0x2c),0xffffffffffffffff);
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar3 = param_1 + 0x34;
    do {
      RtlEnterCriticalSection(iVar3);
      if (*(int *)(param_1 + 0x80) != 0) {
        piVar4 = (int *)(param_1 + 0x6c);
        do {
          puVar2 = (unsigned int *)*piVar4;
          puVar1 = &stack_pair_54.first;
          lVar5 = 9;
          do {
            puVar2 = puVar2 + 1;
            puVar1 = puVar1 + 1;
            *puVar1 = *puVar2;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          if (*piVar4 != 0) {
            fn_82FFE268(piVar4,*piVar4,0);
          }
          RtlLeaveCriticalSection(iVar3);
          if (stack_pair_54.second < 9) {
            if (stack_pair_54.second == 1) {
              fn_82FFA798(param_1,CONCAT44(1,uStack_4c),uStack_48,uStack_40,uStack_38,
                                (unsigned __int64)uStack_30 << 0x20);
            }
            else if (stack_pair_54.second == 2) {
              fn_82FFD568(param_1,CONCAT44(2,uStack_4c),uStack_48,uStack_40,uStack_38,
                            (unsigned __int64)uStack_30 << 0x20);
            }
            else if (stack_pair_54.second == 3) {
              fn_82FFD708(param_1,CONCAT44(3,uStack_4c),uStack_48,uStack_40,uStack_38,
                            (unsigned __int64)uStack_30 << 0x20);
            }
            else if (stack_pair_54.second == 4) {
              fn_82FF92F8(param_1,CONCAT44(4,uStack_4c),uStack_48,uStack_40,uStack_38,
                            (unsigned __int64)uStack_30 << 0x20);
            }
            else if (stack_pair_54.second == 5) {
              fn_82FFD1F0(param_1,CONCAT44(5,uStack_4c),uStack_48,uStack_40,uStack_38,
                              (unsigned __int64)uStack_30 << 0x20);
            }
            else if (stack_pair_54.second == 6) {
              fn_82FFD318(param_1,CONCAT44(6,uStack_4c),uStack_48,uStack_40,uStack_38,
                              (unsigned __int64)uStack_30 << 0x20);
            }
            else if (stack_pair_54.second == 7) {
              fn_82FFCB90(param_1,CONCAT44(7,uStack_4c),uStack_48,uStack_40,uStack_38,
                              (unsigned __int64)uStack_30 << 0x20);
            }
            else if (stack_pair_54.second == 0) {
              fn_82FFC9A0(param_1,&stack_pair_54.second);
            }
            else {
              fn_82FFA898(param_1,CONCAT44(stack_pair_54.second,uStack_4c),uStack_48,uStack_40,uStack_38,
                              (unsigned __int64)uStack_30 << 0x20);
            }
          }
          RtlEnterCriticalSection(iVar3);
        } while (*(int *)(param_1 + 0x80) != 0);
      }
      RtlLeaveCriticalSection(iVar3);
      fn_82A1E650(*(unsigned int *)(param_1 + 0x2c),0xffffffffffffffff);
    } while (*(char *)(param_1 + 0x30) == '\0');
  }
  return 0;
}

