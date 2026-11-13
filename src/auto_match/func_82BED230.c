extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BF7540();
extern int fn_82BF7B48();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


unsigned __int64 fn_82BED230(int param_1,unsigned int param_2,int (**param_3)(),unsigned __int64 param_4)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uStack0000001c;
  int aiStack_30 [12];
  
  if (*(int *)(param_1 + 0x50) != 2) {
    aiStack_30[0] = 0;
    uStack0000001c = param_2;
    iVar3 = fn_82BF7540(param_1 + 0xc,&stack0x0000001c,aiStack_30);
    iVar5 = aiStack_30[0];
    if (iVar3 != 0) {
      uVar1 = (**(int (***)())(**(int **)(param_1 + 0x4c) + 4))();
      *(unsigned __int64 *)(iVar5 + 0x10) = uVar1;
      if (param_3 != (int (**)())0x0) {
        if (((*(int *)(iVar5 + 0x18) != 0) && (*(char **)(iVar5 + 0x1c) != (char *)0x0)) &&
           (**(char **)(iVar5 + 0x1c) != '\0')) {
          uVar2 = thunk_FUN_82be5550(0x1c);
          if ((uVar2 & 0xffffffff) == 0) {
            puVar4 = (unsigned int *)0x0;
          }
          else {
            puVar4 = (unsigned int *)
                     fn_82BF7B48(uVar2,uStack0000001c,*(unsigned int *)(param_1 + 8),
                                     *(unsigned int *)(iVar5 + 0x1c),param_3,param_4);
          }
          if (puVar4 == (unsigned int *)0x0) {
            return 0;
          }
          iVar5 = fn_82BECB18(param_1,puVar4);
          if (iVar5 == 0) {
            (**(int (***)())*puVar4)(puVar4,1);
            return 0;
          }
          fn_82BE8D50(puVar4);
          return 1;
        }
        (*param_3)(uStack0000001c,0,param_4);
      }
      return 1;
    }
  }
  return 0;
}

