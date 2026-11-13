typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8255CB48();
extern int fn_82586B60();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_825BB7C8(unsigned __int64 param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned __int64 in_r0;
  __int64 lVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  unsigned int in_register_00010430;
  unsigned int in_register_00010434;
  unsigned int in_register_00010438;
  unsigned int in_vr67;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  lVar2 = fn_82F6A548();
  iVar3 = (int)lVar2;
  if (*(int *)(iVar3 + 0xc) == 0) {
    fn_82586B60(lVar2 + 0x44);
    loadVectorLeftIndexed128(in_r0,lVar2 + 0x14);
    loadVectorRightIndexed128(0xc,lVar2 + 0x14);
    dVar7 = (double)*(float *)(iVar3 + 0x24);
    dVar6 = (double)*(float *)(iVar3 + 0x40);
    dVar5 = (double)*(float *)(iVar3 + 0x3c);
    dVar4 = (double)*(float *)(iVar3 + 0x38);
    in_vr0 = in_vr0 | in_vr13;
    in_register_00010008 = in_register_00010008 | in_register_000100d8;
    in_ACC = in_ACC | in_register_000100d4;
    in_register_00010000 = in_register_00010000 | in_register_000100d0;
    iVar3 = fn_8255CB48(param_2 + 0x774,1,*(unsigned char *)(iVar3 + 0x84),
                              *(unsigned int *)(iVar3 + 0x34),*(unsigned short *)(iVar3 + 6),
                              *(unsigned char *)(iVar3 + 0x85),*(unsigned char *)(iVar3 + 0x86),
                              *(unsigned char *)(iVar3 + 0x87));
    *(float *)(iVar3 + 0x30) = (float)dVar4;
    *(float *)(iVar3 + 0x34) = (float)dVar5;
    *(float *)(iVar3 + 0x38) = (float)dVar6;
    *(float *)(iVar3 + 0x3c) = (float)dVar7;
    puVar1 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
    *puVar1 = in_register_00010000 & ~in_register_00010430 |
              in_register_000104d0 & in_register_00010430;
    puVar1[1] = in_ACC & ~in_register_00010434 | in_register_000104d4 & in_register_00010434;
    puVar1[2] = in_register_00010008 & ~in_register_00010438 |
                in_register_000104d8 & in_register_00010438;
    puVar1[3] = in_vr0 & ~in_vr67 | in_vr77 & in_vr67;
  }
  fn_82F6A594();
  return;
}

