extern int fn_82A29158();
extern int fn_82A2A360();
extern int free();
extern int fn_82F681D0();
extern int _errno();
extern int malloc();
extern int fn_82F800C8();
extern int iRam83263614;


__int64 realloc(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  if ((param_1 & 0xffffffff) == 0) {
    lVar1 = malloc(param_2);
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      free(param_1);
    }
    else {
      do {
        if (0xfffff000 < (param_2 & 0xffffffff)) {
          fn_82F800C8(param_2);
          puVar4 = (unsigned int *)_errno();
          *puVar4 = 0xc;
          goto LAB_82f705e0;
        }
        if ((param_2 & 0xffffffff) == 0) {
          param_2 = 1;
        }
        uVar2 = fn_82A2A360();
        lVar1 = fn_82A29158(uVar2,0,param_1,param_2);
        if (lVar1 != 0) {
          return lVar1;
        }
        if (iRam83263614 == 0) {
          puVar4 = (unsigned int *)_errno();
          thunk_FUN_82a2b798();
          uVar5 = fn_82F681D0();
          *puVar4 = uVar5;
          return 0;
        }
        iVar3 = fn_82F800C8(param_2);
      } while (iVar3 != 0);
      puVar4 = (unsigned int *)_errno();
      thunk_FUN_82a2b798();
      uVar5 = fn_82F681D0();
      *puVar4 = uVar5;
    }
LAB_82f705e0:
    lVar1 = 0;
  }
  return lVar1;
}

