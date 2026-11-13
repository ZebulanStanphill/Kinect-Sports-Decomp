#define true 1
extern unsigned int *auStack_44;
extern unsigned int *auStack_70;
extern int fn_82250928();
extern int fn_82359C18();
extern int fn_823B9060();
extern int fn_823BABB0();
extern int fn_8265CA20();
extern int fn_82F63108();
extern unsigned int lbl_821B5CB8;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_8c;


unsigned __int64 fn_823B6C60(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned int * apuStack_a0;
  unsigned char **ppuStack_90;
  unsigned int uStack_8c;
  unsigned char ***pppuStack_80;
  unsigned char auStack_70 [16];
  int *piStack_60;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int auStack_44 [17];
  
  pppuStack_80 = &ppuStack_90;
  puVar1 = *(unsigned int **)(param_1 + 0x60);
  ppuStack_90 = &lbl_821B5CB8;
  puVar2 = (unsigned int *)*puVar1;
  uStack_8c = param_2;
  piStack_60 = (int *)(*(int (**)())lbl_821B5CB8)(&ppuStack_90,auStack_70);
  apuStack_a0 = puVar2;
  while( true ) {
    puVar2 = apuStack_a0;
    if (apuStack_a0 == puVar1) break;
    stack_pair_50.first = apuStack_a0[3];
    stack_pair_50.second = apuStack_a0[4];
    uStack_48 = apuStack_a0[5];
    fn_823BABB0(auStack_44,apuStack_a0 + 6);
    if (piStack_60 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    cVar4 = (**(int (***)())(*piStack_60 + 4))(piStack_60,&stack_pair_50.first);
    fn_823B9060(auStack_44);
    fn_8265CA20(auStack_44[0]);
    auStack_44[0] = 0;
    if (cVar4 != '\0') break;
    fn_82250928(&apuStack_a0);
  }
  fn_82359C18(auStack_70);
  fn_82359C18(&ppuStack_90);
  if (puVar2 == *(unsigned int **)(param_1 + 0x60)) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (unsigned __int64)(unsigned int)puVar2[3];
  }
  return uVar3;
}

