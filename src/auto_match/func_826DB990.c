typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_82687EE0();
extern int fn_82687F98();
extern int fn_826D7C00();
extern int fn_826D8750();
extern int fn_826D9448();
extern int fn_826D9720();
extern int fn_826F30F0();
extern unsigned int iStack_68;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;


bool fn_826DB990(int param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  char cVar3;
  __int64 lVar2;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int *piVar8;
  bool bVar9;
  unsigned int auStack_70 [2];
  struct { int first; unsigned int second; } stack_pair_68;

  int *piStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  stack_pair_68.first = 0;
  stack_pair_68.second = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20);
  iVar6 = 0;
  if (*(int *)(iVar1 + 0x74) < 2) {
    RtlEnterCriticalSection(iVar1 + 0xac);
    iVar6 = iVar1;
  }
  auStack_70[0] = (unsigned int)param_3;
  cVar3 = fn_826D9720((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20) + 0xcc
                        ,auStack_70,&stack_pair_68.first);
  if (iVar6 != 0) {
    RtlLeaveCriticalSection(iVar6 + 0xac);
  }
  uVar5 = stack_pair_68.second;
  iVar6 = stack_pair_68.first;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (cVar3 == '\0') {
    uStack_58 = 0;
    piStack_60 = (int *)0x0;
    uStack_5c = 0;
    RtlEnterCriticalSection(iVar1 + 0x54);
    uVar5 = 0;
    piVar4 = (int *)0x0;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x4c) != 0) {
      fn_826D8750(&piStack_60,&piStack_60);
      uVar5 = uStack_5c;
      piVar4 = piStack_60;
    }
    iVar6 = *(int *)(param_1 + 0x1c);
    uVar7 = 0;
    if (*(int *)(iVar6 + 0x4c) != 0) {
      lVar2 = 0;
      do {
        fn_826D9448(&piStack_60,(unsigned __int64)*(unsigned int *)(iVar6 + 0x48) + lVar2);
        iVar6 = *(int *)(param_1 + 0x1c);
        uVar7 = uVar7 + 1;
        lVar2 = lVar2 + 4;
        uVar5 = uStack_5c;
        piVar4 = piStack_60;
      } while (uVar7 < *(unsigned int *)(iVar6 + 0x4c));
    }
    RtlLeaveCriticalSection(iVar1 + 0x54);
    uVar7 = 0;
    piVar8 = piVar4;
    if (uVar5 != 0) {
      do {
        if ((*piVar8 != 0) && (cVar3 = fn_826DB990(*piVar8,param_2,param_3), cVar3 != '\0')) {
          fn_82687EE0(piVar4,uVar5);
          fn_8267BE38(piVar4);
          if ((stack_pair_68.first == 0) && (stack_pair_68.second != 0)) {
            fn_82687270();
          }
          return true;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar7 < uVar5);
    }
    fn_82687EE0(piVar4,uVar5);
    fn_8267BE38(piVar4);
    if ((stack_pair_68.first == 0) && (stack_pair_68.second != 0)) {
      fn_82687270();
    }
    bVar9 = false;
  }
  else {
    if (stack_pair_68.first == 1) {
      if ((*(char *)(iVar1 + 0x40) == '\0') || (*(unsigned int *)(iVar1 + 0x1c) <= stack_pair_68.second)) {
        fn_826F30F0(iVar1 + 0x18,param_2,stack_pair_68.second);
      }
      else {
        fn_82687F98(param_2,(unsigned __int64)*(unsigned int *)(iVar1 + 0x20) +
                                  ((unsigned __int64)stack_pair_68.second & 0x1fffffff) * 8);
      }
    }
    else {
      param_2[1] = iVar1 + 0x18;
      lVar2 = fn_826D7C00(&stack_pair_68.first,(unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + 0x18);
      if (lVar2 != 0) {
        fn_8267C4C8(lVar2);
      }
      if (*param_2 != 0) {
        fn_82687270();
      }
      *param_2 = (int)lVar2;
    }
    bVar9 = *param_2 != 0;
    if ((iVar6 == 0) && (uVar5 != 0)) {
      fn_82687270(uVar5);
    }
  }
  return bVar9;
}

