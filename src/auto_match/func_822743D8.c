extern unsigned int *auStack_50;
extern int fn_82230040();
extern int fn_822770B0();
extern int fn_82520158();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


int fn_822743D8(int param_1)

{
  unsigned __int64 *puVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar6;
  __int64 lVar5;
  unsigned int auStack_50 [2];
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  unsigned char **ppuStack_38;
  unsigned int uStack_34;
  
  *(unsigned int *)(param_1 + 8) = 0;
  uVar3 = ltcg_pool_0_0f;
  puVar4 = (unsigned int *)(param_1 + 0x44);
  *(unsigned int *)(param_1 + 0xc) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x10) = uVar3;
  *(unsigned int *)(param_1 + 0x18) = 1;
  *(unsigned int *)(param_1 + 0x1c) = 1;
  *(unsigned int *)(param_1 + 0x20) = 1;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  puVar2 = (unsigned __int64 *)fn_8265C9E0(8);
  if (puVar2 == (unsigned __int64 *)0x0) {
    uStack_34 = 0;
    ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_38);
  }
  uStack_48 = 0;
  puVar6 = (unsigned int *)(param_1 + 0x5c);
  uStack_44 = 0;
  *puVar4 = puVar2;
  *puVar2 = 0;
  *(unsigned int **)*puVar4 = puVar4;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  puVar2 = (unsigned __int64 *)fn_8265C9E0(8);
  if (puVar2 != (unsigned __int64 *)0x0) {
    uStack_44 = 0;
    uStack_48 = 0;
    *puVar6 = puVar2;
    *puVar2 = 0;
    *(unsigned int **)*puVar6 = puVar6;
    auStack_50[0] = 0;
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 100) = 0;
    *(unsigned int *)(param_1 + 0x68) = 0;
    *(unsigned int *)(param_1 + 0x6c) = 0;
    fn_82520158(0xffffffff821a800c,auStack_50,0);
    lVar5 = 0;
    puVar4 = (unsigned int *)(param_1 + -4);
    do {
      uVar1 = fn_8265C9E0(0x5c);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_822770B0(uVar1,auStack_50,lVar5);
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = uVar3;
    } while ((int)lVar5 < 2);
    return param_1;
  }
  uStack_3c = 0;
  ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_40);
}

