extern unsigned int *auStack_110;
extern unsigned int *auStack_60;
extern unsigned int *auStack_f8;
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8265CA20();
extern int fn_82F62528();
extern int fn_82F62578();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_8202115C;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_828B92A0(unsigned __int64 param_1,int param_2)

{
  unsigned char uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned char auStack_110 [16];
  unsigned char **appuStack_100 [2];
  unsigned char auStack_f8 [12];
  unsigned int *apuStack_ec [4];
  unsigned int *puStack_dc;
  unsigned int *puStack_d8;
  unsigned int *puStack_cc;
  unsigned int *puStack_c8;
  unsigned int *puStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned char **appuStack_b0 [20];
  unsigned char auStack_60 [64];
  
  appuStack_b0[0] = &lbl_82020F40;
  appuStack_100[0] = (unsigned char **)&lbl_821AA8E0;
  fn_8223CD08(appuStack_b0,appuStack_100 + 1,0);
  *(unsigned char ***)((int)appuStack_100 + (int)appuStack_100[0][1]) = &lbl_82021284;
  fn_8223CF38(appuStack_100 + 1,2);
  fn_82240158(appuStack_100,0xffffffff821c7f30);
  uVar4 = 0;
  do {
    puVar3 = (unsigned int *)fn_82F62578(auStack_60,2);
    (*(int (**)())*puVar3)((unsigned char *)((int)appuStack_100 + (int)appuStack_100[0][1]),
                       *(unsigned __int64 *)(puVar3 + 2));
    uVar1 = *(unsigned char *)(uVar4 + param_2);
    *(unsigned char *)((int)&uStack_c0 + (int)appuStack_100[0][1]) = 0x30;
    *(unsigned int *)((int)apuStack_ec + (int)appuStack_100[0][1]) =
         *(unsigned int *)((int)apuStack_ec + (int)appuStack_100[0][1]) & 0xfffff1ff | 0x800;
    fn_8223FBB0(appuStack_100,uVar1);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  fn_822403C8(param_1,appuStack_100 + 1);
  *(unsigned char ***)((int)appuStack_100 + (int)appuStack_100[0][1]) = &lbl_82021284;
  appuStack_100[1] = &lbl_820211D4;
  if ((uStack_bc & 1) != 0) {
    fn_8265CA20(*apuStack_ec[0]);
  }
  *apuStack_ec[0] = 0;
  *puStack_dc = 0;
  *puStack_cc = 0;
  *apuStack_ec[1] = 0;
  *puStack_d8 = 0;
  *puStack_c8 = 0;
  uStack_bc = uStack_bc & 0xfffffffe;
  uStack_c0 = 0;
  appuStack_100[1] = &lbl_8202115C;
  if (puStack_c4 != (unsigned int *)0x0) {
    uVar4 = *puStack_c4;
    if (uVar4 != 0) {
      fn_82F62680(auStack_110,0);
      iVar2 = *(int *)(uVar4 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar4 + 4) = iVar2 + -1;
      }
      puVar3 = (unsigned int *)(-(unsigned int)(*(int *)(uVar4 + 4) == 0) & uVar4);
      fn_82F626D0(auStack_110);
      if (puVar3 != (unsigned int *)0x0) {
        (**(int (***)())*puVar3)(puVar3,1);
      }
    }
    fn_8265CA20(puStack_c4);
  }
  fn_82F62528(auStack_f8);
  *(unsigned char ***)((int)appuStack_100 + (int)appuStack_100[0][1]) = &lbl_82020F40;
  appuStack_b0[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_b0);
  return param_1;
}

