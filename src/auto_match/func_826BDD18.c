typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_82681838();
extern void *fn_826953D8(void *,int);
extern void *fn_82695520(void *,void *);
extern int fn_82696330();


void fn_826BDD18(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar4;
  void *uVar3;
  void *lVar5;
  unsigned char auStack_30 [24];
  
  iVar4 = (*(int (**)())(**(int **)(param_1 + 8) + 8))(*(void **)(param_1 + 8));
  if (iVar4 == 0x17) {
    lVar5 = (char *)*(void **)(*(int *)(param_1 + 0x18) + 0x78) + 0x148;
  }
  else {
    iVar4 = (*(int (**)())(**(int **)(param_1 + 8) + 8))(*(void **)(param_1 + 8));
    bVar2 = iVar4 >= 2 && iVar4 <= 5;
    if (bVar2) {
      lVar5 = *(void **)(param_1+8) ? (char *)*(void **)(param_1+8)-0x68 : 0;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_82695520(auStack_30,lVar5);
      uVar3 = fn_826953D8(uVar3,uVar1);
      fn_82681838(*(unsigned int *)(param_1 + 4),uVar3);
      fn_82696330(auStack_30);
      return;
    }
    lVar5 = (char *)*(void **)(*(int *)(param_1 + 0x18) + 0x78) + 0x150;
  }
  fn_82681838(*(unsigned int *)(param_1 + 4),lVar5);
  return;
}

