extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_82517DC8();
extern int fn_8265C9E0();
extern int fn_8289C940();
extern int fn_82F565A0();
extern int memcpy();
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82197950;
extern unsigned int lbl_82197990;
extern unsigned int lbl_82197AB4;
extern unsigned int lbl_83297810;
extern unsigned int uStack_60;
extern unsigned int uStack_ac;


unsigned int * fn_82246E28(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  struct { int first; int second; } stack_pair_b8;

  unsigned char **ppuStack_b0;
  unsigned int uStack_ac;
  unsigned char auStack_a0 [16];
  unsigned int *puStack_90;
  unsigned char auStack_80 [32];
  unsigned __int64 uStack_60;
  unsigned int *puStack_58;
  
  fn_82517DC8();
  *param_1 = &lbl_82197950;
  *(unsigned char *)(param_1 + 0x20) = 0;
  param_1[0x1a] = &lbl_82197990;
  param_1[0x21] = 0;
  uVar3 = (unsigned __int64)lbl_83297810;
  uVar1 = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x50);
  if (uVar3 == 0) {
    uVar3 = fn_82511928();
  }
  fn_82513A80(&stack_pair_b8.first,uVar3,uVar1);
  if (stack_pair_b8.first != 0) {
    *(unsigned int **)(stack_pair_b8.first + 0x38) = param_1;
  }
  uStack_60 = 0x8224891000000000;
  puStack_58 = param_1;
  puVar2 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = &lbl_82197AB4;
    memcpy(puVar2 + 2,&uStack_60,0x38);
    puStack_90 = puVar2;
    fn_82F565A0(auStack_80,auStack_a0);
    fn_8289C940((unsigned __int64)(unsigned int)param_1[0xd] + 0x144,auStack_80);
    fn_82359C18(auStack_a0);
    if (stack_pair_b8.second != 0) {
      fn_822315A0();
    }
    return param_1;
  }
  uStack_ac = 0;
  ppuStack_b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_b0);
}

