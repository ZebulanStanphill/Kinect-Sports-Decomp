extern int fn_827F3C20();
extern int fn_827F3C28();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern int fn_827F4058();
extern int fn_827F4068();
extern int fn_827FA918();
extern int fn_827FA968();
extern int fn_827FAB20();
extern int fn_82F68CC0();


void fn_827F5250(int *param_1)

{
  unsigned short uVar1;
  unsigned char bVar2;
  int iVar4;
  short sVar8;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar3;
  int iVar7;
  
  iVar4 = fn_827F3C20();
  iVar7 = iVar4 + 0x34;
  sVar8 = fn_827F3C30(param_1);
  if (sVar8 == 1) {
    fn_827F3C48(param_1,0);
    iVar5 = fn_827F3C28();
    if (iVar7 == iVar5 + 0x34) goto LAB_827f53c0;
    fn_827F3C48(param_1,0);
    iVar5 = fn_827F3C28();
    iVar5 = iVar5 + 0x34;
LAB_827f538c:
    fn_82F68CC0(iVar7,iVar5,0x20);
  }
  else {
    fn_827F3C48(param_1,0);
    iVar5 = fn_827F3C28();
    iVar5 = iVar5 + 0x34;
    fn_827F3C48(param_1,1);
    iVar6 = fn_827F3C28();
    iVar6 = iVar6 + 0x34;
    if ((iVar7 != iVar5) && (iVar7 != iVar6)) {
      fn_827F4058(param_1);
    }
    uVar1 = *(unsigned short *)(param_1 + 8);
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        if (param_1[0x10] != 0) {
          bVar2 = *(unsigned char *)(param_1 + 0x37) & 0x10;
          goto LAB_827f533c;
        }
      }
      else {
        if (uVar1 < 3) {
LAB_827f531c:
          bVar2 = *(unsigned char *)(param_1 + 0x37) & 0x40;
          goto LAB_827f537c;
        }
        if (uVar1 != 3) {
          if (uVar1 < 5) goto LAB_827f531c;
          if (uVar1 != 5) goto LAB_827f53c0;
        }
        bVar2 = *(unsigned char *)(param_1 + 0x37) & 0x40;
LAB_827f533c:
        if (bVar2 == 0) goto LAB_827f5380;
      }
      (**(int (***)())(*param_1 + 0x5c))(param_1);
      fn_827FAB20(iVar5,iVar6,iVar7);
      goto LAB_827f53c0;
    }
    if (param_1[0x10] != 0) {
      bVar2 = *(unsigned char *)(param_1 + 0x37) & 0x10;
LAB_827f537c:
      if (bVar2 == 0) {
LAB_827f5380:
        if (iVar7 == iVar5) goto LAB_827f53c0;
        goto LAB_827f538c;
      }
    }
    (**(int (***)())(*param_1 + 0x5c))(param_1);
    fn_827FA968(iVar5,iVar6,iVar7);
  }
LAB_827f53c0:
  if ((*(unsigned char *)(param_1 + 0x37) & 1) != 0) {
    fn_827F3C48(param_1,*(unsigned char *)(param_1 + 0x37) >> 1 & 1);
    iVar5 = fn_827F3C28();
    uVar3 = fn_827F3C20(param_1);
    fn_827FA918(uVar3,iVar7);
    *(unsigned char *)(iVar4 + 0x50) = *(unsigned char *)(iVar4 + 0x50) & 0xf0 | *(unsigned char *)(iVar5 + 0x50) & 0xf;
  }
  if ((*(unsigned char *)(param_1 + 0x37) & 4) != 0) {
    fn_827F3C48(param_1,*(unsigned char *)(param_1 + 0x37) >> 3 & 1);
    iVar7 = fn_827F3C28();
    *(unsigned int *)(iVar4 + 0x44) = *(unsigned int *)(iVar7 + 0x44);
    *(unsigned int *)(iVar4 + 0x48) = *(unsigned int *)(iVar7 + 0x48);
    *(unsigned int *)(iVar4 + 0x4c) = *(unsigned int *)(iVar7 + 0x4c);
    *(unsigned char *)(iVar4 + 0x50) = *(unsigned char *)(iVar7 + 0x50) & 0x70 | *(unsigned char *)(iVar4 + 0x50) & 0x8f;
  }
  fn_827F4068(param_1);
  return;
}

