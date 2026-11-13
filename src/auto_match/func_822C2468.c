#define true 1
extern int fn_82230040();
extern int fn_822B54F8();
extern int fn_822C3E68();
extern int fn_82507908();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821ACF5C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;


unsigned int * fn_822C2468(unsigned int *param_1,int param_2)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int in_r0;
  int iVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  double dVar13;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char **ppuStack_60;
  unsigned int uStack_5c;
  unsigned char **ppuStack_58;
  unsigned int uStack_54;
  
  fn_822B54F8();
  *param_1 = &lbl_821ACF5C;
  param_1[0x6a] = 0;
  iVar5 = fn_8265C9E0(0x60);
  if (iVar5 == 0) {
    uStack_54 = 0;
    ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_58);
  }
  param_1[0x69] = iVar5;
  *(int *)iVar5 = iVar5;
  *(unsigned int *)(param_1[0x69] + 4) = param_1[0x69];
  *(unsigned int *)(param_1[0x69] + 8) = param_1[0x69];
  *(unsigned char *)(param_1[0x69] + 0x50) = 1;
  *(unsigned char *)(param_1[0x69] + 0x51) = 1;
  param_1[0x6e] = 0;
  iVar5 = fn_8265C9E0(0x20);
  if (iVar5 == 0) {
    uStack_5c = 0;
    ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_60);
  }
  param_1[0x6d] = iVar5;
  *(int *)iVar5 = iVar5;
  uVar4 = ltcg_pool_0_0f;
  uVar3 = lbl_821CA460;
  *(unsigned int *)(param_1[0x6d] + 4) = param_1[0x6d];
  *(unsigned int *)(param_1[0x6d] + 8) = param_1[0x6d];
  *(unsigned char *)(param_1[0x6d] + 0x1c) = 1;
  *(unsigned char *)(param_1[0x6d] + 0x1d) = 1;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x7a] = 0;
  uVar2 = *(unsigned int *)(param_2 + 0x4c);
  param_1[0x7d] = uVar3;
  param_1[0x7b] = uVar2;
  param_1[0x7c] = 0;
  param_1[0x7e] = *(unsigned int *)(param_2 + 0x50);
  uVar2 = *(unsigned int *)(param_2 + 0x54);
  param_1[0x80] = 1;
  param_1[0x7f] = uVar2;
  param_1[0x83] = 0;
  param_1[0x81] = uVar4;
  param_1[0x88] = 4;
  puVar6 = (unsigned int *)((int)param_1 + in_r0 + 0x210 & 0xfffffff0);
  *puVar6 = in_register_000104d0;
  puVar6[1] = in_register_000104d4;
  puVar6[2] = in_register_000104d8;
  puVar6[3] = in_vr77;
  param_1[0x89] = 4;
  param_1[0x8a] = uVar4;
  param_1[0x8d] = 0;
  param_1[0x8b] = uVar3;
  param_1[0x8c] = uVar3;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x95] = uVar4;
  param_1[0x96] = 0;
  pcVar12 = "cleanongoal_talk";
  param_1[0x97] = 0;
  param_1[0x98] = *(unsigned int *)(param_2 + 0x58);
  param_1[0x99] = *(unsigned int *)(param_2 + 0x5c);
  param_1[0x9a] = *(unsigned int *)(param_2 + 0x60);
  param_1[0x9b] = *(unsigned int *)(param_2 + 100);
  do {
    iVar5 = param_1[6];
    dVar13 = (double)*(float *)(pcVar12 + -4);
    if (*(unsigned int *)(iVar5 + 0x58) < 8) {
      puVar6 = (unsigned int *)fn_82507908(*(unsigned int *)(iVar5 + 0x1c),pcVar12);
      puVar7 = (unsigned int *)fn_82507908(*(unsigned int *)(iVar5 + 0x1c),pcVar12 + 0x40);
      if ((puVar6 != (unsigned int *)0x0) && (puVar7 != (unsigned int *)0x0)) {
        pcVar9 = pcVar12 + -0x45;
        iVar10 = *(int *)(iVar5 + 0x58) * 0x8c + iVar5;
        pcVar11 = (char *)(iVar10 + 0x5c);
        pcVar8 = (char *)(iVar10 + 0xdc);
        do {
          if (pcVar8 <= pcVar11) break;
          pcVar9 = pcVar9 + 1;
          cVar1 = *pcVar9;
          *pcVar11 = cVar1;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        if (pcVar11 == pcVar8) {
          pcVar11[-1] = '\0';
        }
        *(unsigned int *)(*(int *)(iVar5 + 0x58) * 0x8c + iVar5 + 0xdc) = *puVar6;
        *(unsigned int *)(*(int *)(iVar5 + 0x58) * 0x8c + iVar5 + 0xe0) = *puVar7;
        *(float *)(*(int *)(iVar5 + 0x58) * 0x8c + iVar5 + 0xe4) = (float)dVar13;
        *(int *)(iVar5 + 0x58) = *(int *)(iVar5 + 0x58) + 1;
      }
    }
    pcVar12 = pcVar12 + 0xc4;
    if (-0x7de6c995 < (int)pcVar12) {
      fn_822C3E68(param_1);
      *(unsigned int *)(param_1[0x46] + 0x2f4) = 1;
      param_1[0x9c] = *(unsigned int *)(param_2 + 0x68);
      param_1[0x9d] = 0;
      return param_1;
    }
  } while( true );
}

