extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82B9CD20();
extern int fn_82BAFE48();
extern int fn_82BC0A30();
extern int fn_82BC13C0();
extern int fn_82BC2958();
extern int fn_82BC3A28();
extern int fn_82BC43D8();
extern int fn_82BC5538();
extern int fn_82BC5580();
extern unsigned int lbl_820E3514;
extern unsigned int lbl_820E3600;
extern unsigned int lbl_820E3800;
extern unsigned int lbl_820E3804;
extern unsigned int lbl_820E3808;
extern unsigned int lbl_820E380C;
extern unsigned int lbl_820E3810;
extern unsigned int lbl_820E3814;


unsigned int * fn_82BC1CB8(unsigned int *param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned char *puVar8;
  int aiStack_70 [28];
  
  fn_82BC13C0();
  *param_1 = &lbl_820E3514;
  iVar1 = *(int *)(param_4 + 0xab0);
  fn_82B9CD20(*(unsigned int *)(param_4 + 0x600),aiStack_70,0xffffffff82b7c800,param_4);
  if (param_3 == 0xc) {
    puVar8 = &lbl_820E3808;
LAB_82bc1d68:
    iVar7 = *(int *)(puVar8 + aiStack_70[0] * 0x20);
  }
  else {
    if (param_3 == 0xd) {
      puVar8 = &lbl_820E3810;
      goto LAB_82bc1d68;
    }
    if (param_3 == 0xe) {
      puVar8 = &lbl_820E3800;
      goto LAB_82bc1d68;
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e33a8,0x2f5);
    iVar7 = aiStack_70[0];
  }
  iVar3 = (*(int *)(&lbl_820E3600 + iVar7 * 8) + 6) * 4;
  iVar7 = *(int *)(iVar3 + iVar1);
  if (iVar7 == 0) {
    uVar4 = fn_82BAFE48(*(unsigned int *)(iVar1 + 0xac),0xf);
    uVar2 = *(unsigned int *)(param_4 + 0x5ac);
    puVar6 = (unsigned int *)fn_82B7BD28(uVar2,0x3c4);
    *puVar6 = uVar2;
    if (puVar6 + 1 == (unsigned int *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82BC3A28(puVar6 + 1,param_1,param_4);
    }
    fn_82BC5580(*(unsigned int *)(iVar1 + 0xa4),uVar5);
    fn_82BC2958(uVar5,0,uVar4);
    fn_82BC0A30(uVar4,uVar5);
    *(int *)(iVar3 + iVar1) = (int)uVar5;
  }
  else {
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x1c);
  }
  iVar7 = fn_82BC43D8(0x31,param_4);
  fn_82BC2958(iVar7,1,uVar4);
  if (param_3 == 0xc) {
    puVar8 = &lbl_820E380C;
  }
  else if (param_3 == 0xd) {
    puVar8 = &lbl_820E3814;
  }
  else {
    if (param_3 != 0xe) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e33a8,0x314);
      goto LAB_82bc1e88;
    }
    puVar8 = &lbl_820E3804;
  }
  *(unsigned int *)(iVar7 + 0x84) = *(unsigned int *)(puVar8 + aiStack_70[0] * 0x20);
LAB_82bc1e88:
  fn_82BC2958(iVar7,0,param_1);
  fn_82BC0A30(param_1,iVar7);
  fn_82BC5538(*(unsigned int *)(iVar1 + 0xa4),iVar7);
  return param_1;
}

