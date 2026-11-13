extern unsigned int *auStack_110;
extern unsigned int *auStack_b0;
extern int fn_822B69A0();
extern int fn_822C4448();
extern int fn_824CD030();
extern unsigned int lbl_821962C0;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Removing unreachable block (ram,0x82316658) */
/* WARNING: Removing unreachable block (ram,0x82316664) */
/* WARNING: Removing unreachable block (ram,0x82316678) */
/* WARNING: Removing unreachable block (ram,0x82316680) */
/* WARNING: Removing unreachable block (ram,0x823166a0) */
/* WARNING: Removing unreachable block (ram,0x823166a4) */
/* WARNING: Removing unreachable block (ram,0x823168d0) */
/* WARNING: Removing unreachable block (ram,0x823166ac) */
/* WARNING: Removing unreachable block (ram,0x823166c4) */
/* WARNING: Removing unreachable block (ram,0x823168c4) */
/* WARNING: Removing unreachable block (ram,0x82316770) */
/* WARNING: Removing unreachable block (ram,0x82316780) */
/* WARNING: Removing unreachable block (ram,0x823167b8) */
/* WARNING: Removing unreachable block (ram,0x82316874) */
/* WARNING: Removing unreachable block (ram,0x82316888) */
/* WARNING: Removing unreachable block (ram,0x823167ec) */
/* WARNING: Removing unreachable block (ram,0x82316800) */
/* WARNING: Removing unreachable block (ram,0x82316810) */
/* WARNING: Removing unreachable block (ram,0x82316824) */
/* WARNING: Removing unreachable block (ram,0x82316838) */

void fn_823164D8(unsigned __int64 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  double dVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_110 [96];
  unsigned char auStack_b0 [176];
  
  iVar2 = *(int *)(*(int *)(param_2 + 0xc) + 0x24);
  iVar5 = fn_824CD030(iVar2);
  if (iVar5 != 0) {
    iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 0xe10);
    if (*(char *)(iVar5 + 0xbb1) == '\0') {
      fVar1 = *(float *)(iVar5 + 0xb64);
    }
    else {
      fVar1 = *(float *)(iVar5 + 0xba4);
    }
    dVar6 = (double)fVar1;
    fn_822B69A0(auStack_110,*(unsigned int *)(param_2 + 0xc));
    puVar3 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    if (*(int *)(iVar2 + 0xf4) != 0) {
      *(unsigned int *)(*(int *)(iVar2 + 0xf4) + 0x6c) = 0;
    }
    fn_822C4448(auStack_110,*(unsigned int *)(param_2 + 0xc),*(unsigned int *)(param_2 + 0x10),0,1
                     );
    (**(int (***)())(**(int **)(param_2 + 0x5d0) + 4))
              (param_1,ABS(dVar6),(double)ltcg_pool_0_0f,*(int **)(param_2 + 0x5d0),iVar2);
  }
  return;
}

