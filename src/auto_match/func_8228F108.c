extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern int fn_82230040();
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82240378();
extern int fn_82326E10();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_54;
extern unsigned int uStack_bc;


void fn_8228F108(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned int uVar2;
  char *pcVar4;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  char *pcVar7;
  char *pcVar8;
  unsigned char **ppuStack_c0;
  unsigned int uStack_bc;
  unsigned char auStack_b8 [8];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [28];
  unsigned int uStack_54;
  
  pcVar4 = (char *)fn_8251F720(param_2,0);
  if (pcVar4 != (char *)0x0) {
    uVar5 = fn_8251FBA8(pcVar4);
    for (pcVar8 = pcVar4; pcVar7 = pcVar8, pcVar8 < pcVar4 + (uVar5 / 0x24) * 0x24;
        pcVar8 = pcVar8 + 0x24) {
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if ((int)pcVar7 - (int)pcVar8 != 1) {
        fn_82230110(auStack_b0,pcVar8);
        uVar2 = *(unsigned int *)(pcVar8 + 0x20);
        uVar3 = fn_8223B688(auStack_90,auStack_b0);
        fn_82240378(auStack_70,uVar3);
        uStack_54 = uVar2;
        fn_82230300(auStack_90,1,0);
        puVar6 = (unsigned int *)fn_8265C9E0(0x30);
        if (puVar6 == (unsigned int *)0x0) {
          uStack_bc = 0;
          ppuStack_c0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
          fn_82230040(&ppuStack_c0);
        }
        *puVar6 = *(unsigned int *)(param_1 + 0x28);
        puVar6[1] = *(unsigned int *)(param_1 + 0x28);
        puVar6[2] = *(unsigned int *)(param_1 + 0x28);
        *(unsigned char *)(puVar6 + 0xb) = 0;
        *(unsigned char *)((int)puVar6 + 0x2d) = 0;
        if (puVar6 + 3 != (unsigned int *)0x0) {
          fn_82240378(puVar6 + 3,auStack_70);
          puVar6[10] = uStack_54;
        }
        fn_82326E10(auStack_b8,param_1 + 0x24,puVar6);
        fn_82230300(auStack_70,1,0);
        fn_82230300(auStack_b0,1,0);
      }
    }
    fn_8251FA58(pcVar4);
  }
  return;
}

