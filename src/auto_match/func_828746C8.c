extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82873A00();
extern int fn_82873AA0();


unsigned __int64 fn_828746C8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char cVar4;
  void *uVar3;
  unsigned int auStack_90 [4];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  puVar2 = (unsigned int *)*puVar1;
  while (puVar2 != puVar1) {
    cVar4 = (*(unsigned char (**)(void *))*(int *)puVar2[2])((void *)puVar2[2]);
    if (cVar4 == '\0') {
      uVar3 = (*(void *(**)(void *, void *))(*(int *)puVar2[2] + 0x44))(auStack_40,(void *)puVar2[2]);
      fn_828648B8(auStack_80,uVar3);
      fn_82240378(auStack_60,auStack_80);
      fn_82230300(auStack_80,1,0);
      fn_82864898(auStack_40);
      auStack_90[0] = puVar2[2];
      puVar2 = (unsigned int *)*puVar2;
      fn_82873AA0(param_1,auStack_90[0]);
      fn_82873A00(param_1,auStack_90);
      fn_82230300(auStack_60,1,0);
    }
    else {
      puVar2 = (unsigned int *)*puVar2;
    }
    puVar1 = *(unsigned int **)(param_1 + 4);
  }
  return 0x20120000;
}

