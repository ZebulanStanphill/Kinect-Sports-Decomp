typedef unsigned char bool;
extern int fn_82526C70();
extern int fn_82558150();
extern int fn_82558210();
extern int fn_82587B68();
extern int XMemSet();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82196582;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82529508(__int64 param_1)

{
  unsigned __int64 uVar1;
  bool bVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned short *puVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  char *pcVar11;
  __int64 lVar12;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  
  fn_82558150();
  puVar8 = (unsigned short *)param_1;
  *puVar8 = 0x5bc;
  fn_82558210(param_1,3);
  puVar9 = (unsigned int *)fn_82587B68(2);
  fn_82526C70(param_1 + 0x42,0x40,0xffffffff821c4dd0,*puVar9);
  uVar4 = ltcg_pool_0_0f;
  lVar12 = param_1 + 0x510;
  *(unsigned int *)(puVar8 + 0x4c) = ltcg_pool_0_0f;
  *(unsigned int *)(puVar8 + 0x4e) = uVar4;
  *(unsigned int *)(puVar8 + 0x50) = uVar4;
  *(unsigned int *)(puVar8 + 0x56) = uVar4;
  uVar10 = param_1 + 0x520;
  *(unsigned int *)(puVar8 + 0x54) = uVar4;
  *(unsigned int *)(puVar8 + 0x52) = uVar4;
  *(unsigned int *)(puVar8 + 0x5c) = 0;
  uVar7 = lbl_821CA460;
  *(unsigned int *)(puVar8 + 0x27c) = 0;
  *(unsigned int *)(puVar8 + 0x284) = uVar4;
  *(unsigned int *)(puVar8 + 0x6e) = 0;
  *(unsigned int *)(puVar8 + 0x58) = uVar7;
  *(unsigned int *)(puVar8 + 0x6a) = 0;
  *(unsigned int *)(puVar8 + 0x5a) = uVar7;
  *(unsigned int *)(puVar8 + 0x5e) = 0;
  *(unsigned int *)(puVar8 + 0x6c) = 0;
  *(unsigned int *)(puVar8 + 0x74) = 0;
  iVar6 = (int)uVar10;
  *(unsigned int *)(puVar8 + 0x72) = 0;
  *(unsigned int *)(puVar8 + 0x70) = 0;
  *(unsigned int *)(puVar8 + 0x270) = 0;
  puVar8[0x272] = 0xffff;
  *(unsigned int *)(puVar8 + 0x60) = 0;
  *(unsigned int *)(puVar8 + 100) = 0;
  *(unsigned int *)(puVar8 + 0x66) = 0;
  puVar8[0x274] = 0;
  puVar8[0x275] = 0;
  *(unsigned int *)(puVar8 + 0x278) = 0;
  *(unsigned int *)(puVar8 + 0x27a) = 0;
  *(unsigned char *)(puVar8 + 0x277) = 0;
  *(unsigned char *)(puVar8 + 0x276) = 0;
  *(unsigned int *)(puVar8 + 0x62) = 0;
  uVar5 = (unsigned int)lVar12;
  uVar4 = storeVectorElementWordIndexed(in_vs32,0,lVar12);
  *(unsigned int *)(uVar5 & 0xfffffffc) = uVar4;
  uVar4 = storeVectorElementWordIndexed(in_vs45,lVar12,4);
  *(unsigned int *)(uVar5 + 4 & 0xfffffffc) = uVar4;
  uVar4 = storeVectorElementWordIndexed(in_vs44,lVar12,8);
  *(unsigned int *)(uVar5 + 8 & 0xfffffffc) = uVar4;
  *(unsigned int *)(puVar8 + 0x27e) = 0;
  uVar4 = lbl_8218E8E8;
  *(unsigned int *)(puVar8 + 0x2b0) = 0;
  *(unsigned int *)(puVar8 + 0x282) = uVar4;
  *(unsigned int *)(puVar8 + 0x2b2) = 0;
  *(unsigned int *)(puVar8 + 0x280) = uVar4;
  *(unsigned int *)(puVar8 + 0x28e) = 0;
  do {
    pcVar11 = (char *)uVar10;
    uVar1 = param_1 + 0x560U & 0xffffffff;
    bVar2 = (uVar10 & 0xffffffff) == uVar1;
    if (uVar1 <= (uVar10 & 0xffffffff)) goto LAB_82529668;
    cVar3 = pcVar11[(int)&lbl_82196582 - iVar6];
    *pcVar11 = cVar3;
    uVar10 = uVar10 + 1;
    pcVar11 = (char *)uVar10;
  } while (cVar3 != '\0');
  bVar2 = (uVar10 & 0xffffffff) == (param_1 + 0x560U & 0xffffffff);
LAB_82529668:
  if (bVar2) {
    pcVar11[-1] = '\0';
  }
  uVar10 = param_1 + 0x570;
  *(unsigned int *)(puVar8 + 0x2d8) = uVar7;
  *(unsigned int *)(puVar8 + 0x2b6) = 0;
  iVar6 = (int)uVar10;
  do {
    pcVar11 = (char *)uVar10;
    uVar1 = param_1 + 0x5b0U & 0xffffffff;
    bVar2 = (uVar10 & 0xffffffff) == uVar1;
    if (uVar1 <= (uVar10 & 0xffffffff)) goto LAB_825296a4;
    cVar3 = pcVar11[(int)&lbl_82196582 - iVar6];
    *pcVar11 = cVar3;
    uVar10 = uVar10 + 1;
    pcVar11 = (char *)uVar10;
  } while (cVar3 != '\0');
  bVar2 = (uVar10 & 0xffffffff) == (param_1 + 0x5b0U & 0xffffffff);
LAB_825296a4:
  if (bVar2) {
    pcVar11[-1] = '\0';
  }
  *(unsigned int *)(puVar8 + 0x76) = 0;
  XMemSet(param_1 + 0xf0,0,1000);
  *(unsigned int *)(puVar8 + 0x26e) = 0;
  *(unsigned int *)(puVar8 + 0x26c) = 1;
  return;
}

