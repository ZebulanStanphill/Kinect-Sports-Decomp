extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_6c;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82F53548();
extern int fn_82F564D8();
extern int fn_82F59C30();
extern int fn_82F59F48();
extern int fn_8306ED28();
extern int fn_8306ED30();
extern unsigned int lbl_821AAD20;


void fn_82F511A8(int param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  unsigned int *puVar1;
  float fVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  unsigned char auStack_70 [4];
  float fStack_6c;
  unsigned char auStack_60 [96];
  
  fVar2 = lbl_821AAD20;
  if (param_5 == 0) {
    *param_2 = lbl_821AAD20;
    *param_3 = fVar2;
    fStack_78 = fVar2;
  }
  else {
    uVar5 = **(unsigned int **)(param_1 + 4);
    fn_82F564D8(auStack_70,uVar5,4);
    iVar3 = fn_82F564D8(auStack_60,uVar5,8);
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    fn_8306ED30();
    puVar1 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    dVar4 = (double)lbl_821AAD20;
    fStack_6c = lbl_821AAD20;
    fn_82F53548();
    uVar5 = **(unsigned int **)(param_1 + 4);
    fn_82F564D8(auStack_60,uVar5,0xc);
    iVar3 = fn_82F564D8(auStack_70,uVar5,0x10);
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    fn_8306ED30();
    puVar1 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    fStack_6c = (float)dVar4;
    fn_82F53548();
    fn_8306ED28();
    fn_82F53548();
    fn_82F59F48();
    fn_82F59C30(&fStack_80);
    *param_2 = fStack_80;
    *param_3 = fStack_7c;
  }
  *param_4 = fStack_78;
  return;
}

