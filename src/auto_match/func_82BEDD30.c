extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BED560();
extern int fn_82BF7540();
extern int fn_82BF7590();
extern int fn_82BF7DC8();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


unsigned __int64 fn_82BEDD30(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uStack0000001c;
  int aiStack_40 [16];
  
  if (*(int *)(param_1 + 0x50) == 2) goto LAB_82bedd50;
  aiStack_40[0] = 0;
  uStack0000001c = param_2;
  iVar3 = fn_82BF7540(param_1 + 0xc,&stack0x0000001c,aiStack_40);
  iVar4 = aiStack_40[0];
  if (iVar3 == 0) {
LAB_82bede1c:
    uVar1 = 1;
    *(unsigned int *)(param_1 + 0x48) = 0;
  }
  else {
    puVar5 = (unsigned int *)(aiStack_40[0] + 0x1c);
    if ((*(char **)(aiStack_40[0] + 0x1c) == (char *)0x0) ||
       (**(char **)(aiStack_40[0] + 0x1c) == '\0')) {
LAB_82beddf0:
      fn_82BE8D50(iVar4);
      iVar4 = fn_82BF7590(param_1 + 0xc,&stack0x0000001c);
      if ((iVar4 != 0) && (iVar4 = fn_82BED560(param_1), iVar4 != 0)) goto LAB_82bede1c;
    }
    else {
      uVar2 = thunk_FUN_82be5550(0x14);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_82BF7DC8(uVar2,uStack0000001c,*(unsigned int *)(param_1 + 8),*puVar5);
      }
      if ((uVar2 & 0xffffffff) != 0) {
        iVar3 = fn_82BECB18(param_1,uVar2);
        if (iVar3 != 0) {
          fn_82BE8D50(uVar2);
          goto LAB_82beddf0;
        }
        fn_82BE8D50(uVar2);
      }
    }
LAB_82bedd50:
    uVar1 = 0;
  }
  return uVar1;
}

