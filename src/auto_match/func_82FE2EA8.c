extern int fn_82F655D8();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015618;
extern unsigned int lbl_821753C0;
extern unsigned int lbl_821753C8;
extern unsigned int lbl_821753CC;
extern unsigned int lbl_821753D0;
extern unsigned int lbl_821753D4;
extern unsigned int lbl_821753DC;
extern unsigned int lbl_821753E0;
extern unsigned int lbl_821753E4;
extern unsigned int lbl_821753EC;
extern unsigned int lbl_821753F4;
extern unsigned int lbl_82175400;
extern unsigned int lbl_82175430;
extern unsigned int lbl_82175438;
extern unsigned int lbl_82175440;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82FE2EA8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  double dVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  
  iVar7 = lbl_82175400;
  iVar6 = lbl_821753F4;
  iVar5 = lbl_821753EC;
  iVar4 = lbl_821753E4;
  iVar3 = lbl_821753E0;
  iVar2 = lbl_821753DC;
  iVar1 = lbl_821753D0;
  uVar8 = lbl_82005710;
  if ((param_4 & 0xffffffff) == 0) {
    param_1[1] = lbl_821753CC;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    param_1[4] = iVar3;
    param_1[5] = iVar4;
    param_1[6] = iVar2;
    param_1[7] = iVar5;
    param_1[8] = iVar4;
    param_1[9] = iVar6;
    param_1[10] = iVar5;
    param_1[0xb] = iVar4;
    param_1[0xc] = iVar7;
    param_1[0xd] = iVar5;
    uVar11 = lbl_82015618;
    dVar9 = (double)fn_82F655D8(lbl_82015618,uVar8);
    param_1[0xe] = (int)(float)dVar9;
    dVar9 = (double)fn_82F655D8(uVar11,uVar8);
    param_1[0xf] = (int)(float)dVar9;
    dVar9 = (double)fn_82F655D8(uVar11,uVar8);
    param_1[0x10] = (int)(float)dVar9;
    uVar10 = lbl_82175440;
    dVar9 = (double)fn_82F655D8(uVar11,lbl_82175440);
    param_1[0x11] = (int)(float)dVar9;
    dVar9 = (double)fn_82F655D8(uVar11,uVar8);
    param_1[0x12] = (int)(float)dVar9;
    dVar9 = (double)fn_82F655D8(uVar11,lbl_82175438);
    param_1[0x13] = (int)(float)dVar9;
    dVar9 = (double)fn_82F655D8(uVar11,lbl_82175430);
    iVar3 = lbl_821753E4;
    param_1[0x16] = lbl_821753C0;
    iVar2 = lbl_821753D4;
    iVar1 = lbl_821753C8;
    param_1[0x17] = iVar3;
    param_1[0x15] = 0x17;
    iVar3 = lbl_821753DC;
    *(unsigned char *)((int)param_1 + 0x91) = 1;
    param_1[0x14] = (int)(float)dVar9;
    param_1[0x1b] = 8;
    param_1[0x18] = iVar1;
    param_1[0x19] = iVar2;
    param_1[0x1a] = iVar3;
    dVar9 = (double)fn_82F655D8(uVar11,uVar10);
    param_1[0x1d] = (int)(float)dVar9;
    dVar9 = (double)fn_82F655D8(uVar11,uVar8);
    param_1[0x1c] = (int)(float)dVar9;
    param_1[0x21] = 1;
    param_1[0x1e] = 3;
    param_1[0x1f] = 0;
    param_1[0x20] = 3;
    param_1[0x22] = 3;
    param_1[0x23] = 2;
    *(unsigned char *)(param_1 + 0x24) = 0;
    fn_82F68CC0(param_1 + 0x25,0xffffffff831bc73c,0x2c);
    uVar8 = 1;
  }
  else {
    uVar8 = (**(int (***)())(*param_1 + 0x14))(param_1,param_3,param_4);
  }
  return uVar8;
}

