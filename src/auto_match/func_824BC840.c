extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_824896F0();
extern int fn_8248AFA8();
extern int fn_8248B928();
extern int fn_8248D3C0();
extern int fn_8265C9E0();
extern unsigned int lbl_821BE9E8;
extern unsigned int lbl_821BE9F4;
extern unsigned int lbl_821BEA0C;
extern unsigned int lbl_8328111C;


void fn_824BC840(unsigned int *param_1)

{
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [128];
  
  iVar4 = fn_8265C9E0(0x5c);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_8248AFA8();
  }
  uVar8 = 1;
  if ((*(int *)(iVar4 + 0x18) == 0) || (*(int *)(iVar4 + 8) == 0)) {
    *(unsigned int *)(iVar4 + 0x58) = 0;
  }
  else {
    *(unsigned int *)(iVar4 + 0x58) = 1;
  }
  uVar6 = *(unsigned int *)(iVar4 + 0x3c);
  *(unsigned int *)(iVar4 + 0x58) = 0;
  if (lbl_8328111C == 0) {
    uVar9 = 1;
    uVar11 = 0;
    uVar10 = 5;
    puVar5 = (unsigned int *)fn_8265C9E0(0xc);
    if (puVar5 != (unsigned int *)0x0) {
      puVar5[2] = 0;
      *puVar5 = &lbl_821BEA0C;
      goto LAB_824bc980;
    }
  }
  else {
    uVar11 = 0x14;
    uVar10 = 0x1e;
    uVar9 = 0;
    uVar8 = 0;
    puVar5 = (unsigned int *)fn_8265C9E0(0x10);
    if (puVar5 != (unsigned int *)0x0) {
      uVar1 = fn_82230110(auStack_a0,0xffffffff821c05a0);
      puVar5[3] = uVar6;
      *puVar5 = &lbl_821BE9E8;
      lVar2 = fn_8265C9E0(0x6c);
      if (lVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar3 = fn_8223B688(auStack_80,uVar1);
        uVar6 = fn_824896F0(lVar2,puVar5[3],uVar3);
      }
      puVar5[2] = uVar6;
      fn_82230300(uVar1,1,0);
      goto LAB_824bc980;
    }
  }
  puVar5 = (unsigned int *)0x0;
LAB_824bc980:
  puVar7 = (unsigned int *)fn_8265C9E0(0xa8);
  if (puVar7 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    fn_8248B928(puVar7,iVar4,uVar11,puVar5,uVar9,uVar8,uVar10);
    puVar7[0x20] = iVar4;
    puVar7[0x21] = puVar5;
    puVar7[0x22] = 0;
    *puVar7 = &lbl_821BE9F4;
    puVar7[0x24] = 0;
    puVar7[0x25] = 0;
    puVar7[0x26] = 0;
    puVar7[0x29] = 0;
    iVar4 = fn_8265C9E0(0xb0);
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_8248D3C0();
    }
    puVar7[0x28] = uVar6;
    if (puVar7[0x22] != 0) {
      iVar4 = fn_8265C9E0(0xb0);
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = fn_8248D3C0();
      }
      puVar7[0x29] = uVar6;
    }
  }
  *param_1 = puVar7;
  return;
}

