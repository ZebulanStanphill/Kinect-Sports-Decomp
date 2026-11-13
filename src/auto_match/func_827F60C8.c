extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern unsigned int *auStack_34;
extern int fn_827F9C90();
extern int fn_827FEAF8();
extern int fn_827FECF0();
extern int fn_827FF330();


void fn_827F60C8(int param_1)

{
  int *piVar1;
  unsigned char *puVar2;
  __int64 lVar3;
  unsigned char auStack_290 [16];
  unsigned char auStack_280 [524];
  unsigned char auStack_34 [52];
  
  fn_827F9C90(param_1 + 0x24);
  fn_827FF330(param_1 + 0x24);
  piVar1 = (int *)(param_1 + 0x124);
  if (*(int *)(param_1 + 0x124) != 0) {
    fn_827FECF0(piVar1,param_1 + 200);
    fn_827FEAF8(piVar1,auStack_280,auStack_290);
    lVar3 = 0x31;
    puVar2 = auStack_34;
    do {
      (**(int (***)())(**(int **)(param_1 + 0x20) + 4))
                (*(int **)(param_1 + 0x20),piVar1,puVar2,
                 ((unsigned __int64)*(unsigned int *)(puVar2 + 4) & 0xfffffff) * 0x10 +
                 (unsigned __int64)*(unsigned int *)(*piVar1 + 0x20));
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + -0xc;
    } while (-1 < lVar3);
  }
  return;
}

