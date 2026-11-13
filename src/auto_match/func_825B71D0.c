extern int fn_825B7128();
extern int fn_8263A8C8();
extern unsigned int lbl_8320A898;


void fn_825B71D0(void)

{
  float *pfVar1;
  int iVar2;
  unsigned short uVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  
  lVar6 = 0;
  lVar5 = -0x7cd905f8;
  lVar4 = -0x7cd903e0;
  do {
    pfVar1 = (float *)lVar5;
    uVar3 = fn_825B7128((double)(pfVar1[3] * *pfVar1),(double)pfVar1[4],(double)pfVar1[5],lVar6);
    *(unsigned short *)((int)lVar4 + -0x200) = uVar3;
    iVar2 = (int)lVar5;
    uVar3 = fn_825B7128((double)(*(float *)(iVar2 + 4) * *(float *)(iVar2 + 0xc)),
                          (double)*(float *)(iVar2 + 0x10),(double)*(float *)(iVar2 + 0x14),lVar6);
    *(unsigned short *)lVar4 = uVar3;
    iVar2 = (int)lVar5;
    uVar3 = fn_825B7128((double)(*(float *)(iVar2 + 8) * *(float *)(iVar2 + 0xc)),
                          (double)*(float *)(iVar2 + 0x10),(double)*(float *)(iVar2 + 0x14),lVar6);
    *(unsigned short *)((int)lVar4 + 0x200) = uVar3;
    lVar4 = lVar4 + 2;
    lVar6 = lVar6 + 1;
  } while ((int)lVar4 < (int)lVar5 + 0x418);
  fn_8263A8C8(lbl_8320A898,lVar5 + 0x18);
  return;
}

