extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CAD2C;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_825C6990(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  
  puVar6 = (unsigned int *)fn_8265C9E0(0x88);
  uVar5 = ltcg_pool_0_0f;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    uVar1 = **(unsigned int **)(param_1 + 4);
    *puVar6 = &lbl_821CAD2C;
    puVar6[0x1b] = uVar5;
    puVar6[8] = 0;
    puVar6[0x1d] = uVar5;
    puVar6[0x1e] = uVar5;
    puVar6[6] = uVar1;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0xffffffff;
    puVar6[1] = param_2;
    fVar4 = lbl_821CA460;
    fVar3 = lbl_821916FC;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar2 = lbl_83265A28 & 0x7fffff;
    puVar6[10] = uVar5;
    *(unsigned char *)((int)puVar6 + 0x1d) = 1;
    puVar6[0x1c] = ((float)(uVar2 | 0x3f800000) - fVar4) * fVar3;
    puVar6[0x1f] = 0;
    puVar6[0x21] = 0xffffffff;
    puVar6[0x20] = 0;
  }
  puVar6[2] = param_3;
  puVar6[3] = param_4;
  puVar6[4] = param_5;
  puVar6[5] = param_6;
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

