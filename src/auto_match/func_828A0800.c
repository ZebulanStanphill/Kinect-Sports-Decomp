extern unsigned int *auStack_30;
extern int fn_828995F0();
extern int fn_8289F9C8();
extern int fn_828A0638();
extern int fn_828A8160();
extern int fn_828C3958();
extern int fn_828CF0F0();


void fn_828A0800(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar5;
  __int64 lVar4;
  unsigned int auStack_30;
  
  iVar5 = fn_828A0638();
  fn_828A8160(*(unsigned int *)(iVar5 + 8),param_1);
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  uVar2 = *(unsigned int *)(param_1 + 0x50);
  lVar4 = (unsigned __int64)uVar2 + 0x1fc;
  auStack_30 = uVar1;
  if (*(char *)(param_1 + 0x26) == '\0') {
    fn_8289F9C8(lVar4,&auStack_30);
    auStack_30 = uVar1;
    fn_8289F9C8((unsigned __int64)uVar2 + 0x20c,&auStack_30);
  }
  else {
    fn_8289F9C8(lVar4,&auStack_30);
  }
  fn_828995F0(*(unsigned int *)(param_1 + 0x50),param_1);
  fn_828C3958(*(unsigned int *)(param_1 + 0x50),param_1);
  fn_828CF0F0((unsigned __int64)*(unsigned int *)(param_1 + 0x50) + 0xc,param_1);
  puVar3 = *(unsigned int **)(param_1 + 0x4c);
  if (puVar3 != (unsigned int *)0x0) {
    (**(int (***)())*puVar3)(puVar3,1);
  }
  puVar3 = *(unsigned int **)(param_1 + 0x48);
  *(unsigned int *)(param_1 + 0x4c) = 0;
  if (puVar3 != (unsigned int *)0x0) {
    (**(int (***)())*puVar3)(puVar3,1);
  }
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 4) = 2;
  return;
}

