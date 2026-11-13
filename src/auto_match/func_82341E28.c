extern int fn_8234B0C8();
extern int fn_8242E560();
extern int fn_8243D2D8();
extern int fn_824A5DE0();
extern int fn_824A5E48();
extern int fn_824CCFC8();
extern int fn_824CD030();
extern int fn_8254E7D8();
extern unsigned int lbl_8218E8E8;
extern unsigned int ltcg_pool_0_0f;


void fn_82341E28(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  double dVar8;
  
  fVar4 = ltcg_pool_0_0f;
  piVar2 = *(int **)(param_2 + 0xc);
  dVar8 = (double)ltcg_pool_0_0f;
  iVar3 = *piVar2;
  if ((dVar8 < (double)(float)piVar2[0xe]) &&
     (fVar1 = (float)((double)(float)piVar2[0xe] - param_1), piVar2[0xe] = (int)fVar1,
     (double)fVar1 < dVar8)) {
    piVar2[0xe] = (int)fVar4;
  }
  iVar6 = *(int *)(iVar3 + 0x24);
  if (iVar6 != 0) {
    iVar5 = fn_824CD030(iVar6);
    if ((iVar5 == 0) || (iVar5 = fn_824CCFC8(iVar6), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_824A5E48(*(unsigned int *)(*(int *)(iVar6 + 0xfc) + 0x28));
    }
    if (((iVar5 != 0) && ((double)*(float *)(*(int *)(param_2 + 0xc) + 0x38) == dVar8)) &&
       (iVar5 = fn_8242E560(*(unsigned int *)(*(int *)(iVar3 + 0x1a0) + 0xc)), iVar5 == 0)) {
      *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x38) =
           *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x34);
      iVar5 = *(int *)(*(int *)(*(int *)(iVar3 + 0x1a0) + 0xc) + 0x174);
      if (*(int *)(*(int *)(iVar5 + 0x5c) + 0x2b4) != 0) {
        *(unsigned int *)(*(int *)(iVar5 + 0x5c) + 0x340) =
             *(unsigned int *)(*(int *)(iVar5 + 0x5c) + 0x338);
        *(unsigned int *)(*(int *)(iVar5 + 0x5c) + 0x344) =
             *(unsigned int *)(*(int *)(iVar5 + 0x5c) + 0x33c);
      }
      fn_8243D2D8((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(iVar3 + 0x1a0) + 0xc) + 0x174) + 8,
                        0xffffffff821b16e8,0,0);
    }
    iVar5 = fn_824CD030(iVar6);
    if ((iVar5 == 0) || (iVar5 = fn_824CCFC8(iVar6), iVar5 == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_824A5DE0(*(unsigned int *)(*(int *)(iVar6 + 0xfc) + 0x28));
    }
    if ((iVar6 == 0) ||
       (iVar6 = fn_8242E560(*(unsigned int *)(*(int *)(iVar3 + 0x1a0) + 0xc)), iVar6 != 0)) {
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x1a0) + 0xc) + 0x174) + 100
                                    ) + 0xc) + 4) != 0) {
        fn_8254E7D8(dVar8,(double)lbl_8218E8E8);
      }
      uVar7 = 0xffffffff821b0c44;
    }
    else {
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x1a0) + 0xc) + 0x174) + 100
                                    ) + 0xc) + 4) != 0) {
        fn_8254E7D8((double)*(float *)(*(int *)(param_2 + 0xc) + 0x30),(double)lbl_8218E8E8);
      }
      uVar7 = 0xffffffff821b1700;
    }
    fn_8234B0C8(dVar8,(unsigned __int64)*(unsigned int *)(iVar3 + 0x118) + 0x2c0,uVar7);
  }
  return;
}

