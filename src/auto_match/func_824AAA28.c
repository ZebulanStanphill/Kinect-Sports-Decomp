extern unsigned int *auStack_20;
extern int fn_824AA3D8();
extern int fn_82539560();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821914C0;
extern unsigned int lbl_821916F4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_824AAA28(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_20 [16];
  
  iVar4 = fn_824AA3D8(auStack_20,param_1,param_2,(-(*(int *)(param_1 + 0x48) != 0) & 0xeU) + 6
                            ,0xffffffff824aaad8);
  puVar2 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  dVar5 = (double)lbl_821916F4;
  if ((double)*(float *)(param_1 + 0x58) <= dVar5) {
    dVar6 = (double)ltcg_pool_0_0f;
    dVar7 = dVar6;
    fVar1 = lbl_8218E8E8;
  }
  else {
    dVar6 = dVar5;
    dVar5 = (double)lbl_821914C0;
    dVar7 = (double)lbl_8218E8E8;
    fVar1 = lbl_821CA460;
  }
  fn_82539560((double)*(float *)(param_1 + 0x58),dVar6,dVar5,dVar7,(double)fVar1);
  return;
}

