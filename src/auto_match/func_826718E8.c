extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8251F718();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8266C890();
extern int fn_8266EC60();
extern int fn_82670F48();
extern int fn_82683F30();
extern int fn_82687270();
extern int fn_82688820();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_3c;
extern unsigned int lbl_82002C70;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_40;


unsigned __int64 fn_826718E8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  struct { unsigned int first; int second; } stack_pair_40;

  
  stack_pair_40.first = 0;
  uVar5 = 1;
  iVar2 = fn_82A1BB18();
  if (iVar2 == lbl_831E7B44) {
    iVar2 = fn_8251F718(param_1 + 0xd4);
    uVar1 = fn_8266EC60();
    fn_8266C890(uVar1,iVar2);
    uVar3 = fn_82683F30(param_2,**(unsigned int **)(iVar2 + 4),2,0);
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82687270();
    }
    *(unsigned int *)(param_1 + 0xc) = uVar3;
    uVar1 = fn_8266EC60();
    fn_8266C890(uVar1,0);
    fn_8251FA58(iVar2);
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar5 = 0;
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        fn_82688820(param_3,*(int *)(param_1 + 0xc),0);
      }
      *(unsigned int *)(param_1 + 0xf0) = 1;
    }
  }
  else {
    puVar4 = (unsigned int *)fn_8265C9E0(0x1c);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      stack_pair_40.first = 0;
      stack_pair_40.second = 0;
      fn_82517978(&stack_pair_40.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
      fn_82670F48(puVar4,&stack_pair_40.first);
      puVar4[5] = (int)param_2;
      puVar4[6] = (int)param_3;
      *puVar4 = &lbl_82002C70;
      if (stack_pair_40.second != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,puVar4);
  }
  return uVar5;
}

