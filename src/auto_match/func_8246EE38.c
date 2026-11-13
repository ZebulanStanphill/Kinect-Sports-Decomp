typedef unsigned char bool;
extern unsigned int *auStack_10e8;
extern unsigned int *auStack_8e8;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_8226D6A0();
extern int fn_8226FDB8();
extern int fn_8228C9A0();
extern int fn_82356F98();
extern int fn_823F2E20();
extern int fn_8246F718();
extern int fn_8246F9F0();
extern int fn_8265C9E0();
extern unsigned int iStack_110c;
extern unsigned int iStack_112c;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BC7D0;
extern unsigned int lbl_832766D4;
extern unsigned int uStack_10ec;
extern unsigned int uStack_10f0;
extern unsigned int uStack_1104;
extern unsigned int uStack_1108;
extern unsigned int uStack_1110;


void fn_8246EE38(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  bool bVar1;
  int iVar2;
  char cVar4;
  unsigned int uVar3;
  char *pcVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puStack_1140;
  unsigned int *puStack_113c;
  unsigned char **ppuStack_1130;
  int iStack_112c;
  unsigned char ***pppuStack_1120;
  unsigned int uStack_1110;
  int iStack_110c;
  unsigned int uStack_1108;
  unsigned int uStack_1104;
  unsigned int uStack_10f0;
  unsigned int uStack_10ec;
  unsigned char auStack_10e8 [2048];
  unsigned char auStack_8e8 [2048];
  char acStack_e8 [128];
  char acStack_68 [104];
  
  fn_8226D2A8(&uStack_1110);
  puStack_113c = (unsigned int *)fn_8265C9E0(0x1b0);
  if (puStack_113c == (unsigned int *)0x0) {
    puStack_113c = (unsigned int *)0x0;
  }
  else {
    puStack_113c[1] = 1;
    puStack_113c[2] = 1;
    *puStack_113c = &lbl_821A8D8C;
    if (puStack_113c + 4 != (unsigned int *)0x0) {
      pppuStack_1120 = &ppuStack_1130;
      ppuStack_1130 = &lbl_821BC7D0;
      iStack_112c = param_1;
      fn_8228C9A0(puStack_113c + 4,param_2,param_1 + 0x430,param_1 + 0x434,param_6,param_7,
                        param_3,&ppuStack_1130);
    }
  }
  puStack_1140 = puStack_113c + 4;
  puVar6 = (unsigned int *)(param_1 + 0x428);
  fn_823F2E20(puVar6,&puStack_1140);
  if (puStack_113c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  iVar2 = fn_8226FDB8(*(unsigned int *)(param_1 + 0x308),1);
  if (iVar2 != 0) {
    fn_8226D6A0(*(unsigned int *)(param_1 + 0x308));
  }
  fn_82356F98(&puStack_1140);
  fn_823F2E20(param_1 + 0x310,&puStack_1140);
  if (puStack_113c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  fn_82356F98(&puStack_1140);
  fn_823F2E20((unsigned int *)(param_1 + 0x300),&puStack_1140);
  if (puStack_113c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  iVar2 = *(int *)(param_1 + 0x42c);
  uVar3 = *puVar6;
  uStack_1104 = 1;
  uStack_10ec = 1;
  uStack_1110 = 0;
  iVar8 = 0;
  if ((iVar2 != 0) && (cVar4 = fn_8223AAC0(iVar2), cVar4 != '\0')) {
    uStack_1110 = uVar3;
    iVar8 = iVar2;
  }
  bVar1 = iStack_110c != 0;
  iStack_110c = iVar8;
  if (bVar1) {
    fn_822315A0();
  }
  uStack_1108 = 1;
  pcVar5 = acStack_e8;
  uStack_10f0 = 3;
  do {
    if (acStack_68 <= pcVar5) break;
    cVar4 = pcVar5[(param_1 + 0x3b8) - (int)acStack_e8];
    *pcVar5 = cVar4;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  if (pcVar5 == acStack_68) {
    pcVar5[-1] = '\0';
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_8246F718(param_1,param_4,auStack_10e8,0x400);
  }
  if ((param_5 & 0xffffffff) != 0) {
    fn_8246F718(param_1,param_5,auStack_8e8,0x400);
  }
  uVar3 = fn_8226D388(&uStack_1110);
  *(unsigned int *)(param_1 + 0x308) = uVar3;
  iVar2 = *(int *)(param_1 + 0x42c);
  uVar3 = *puVar6;
  uVar7 = 0;
  iVar8 = 0;
  if (iVar2 != 0) {
    cVar4 = fn_8223AAC0(iVar2);
    if (cVar4 != '\0') {
      uVar7 = uVar3;
      iVar8 = iVar2;
    }
  }
  iVar2 = *(int *)(param_1 + 0x304);
  *(int *)(param_1 + 0x304) = iVar8;
  *(unsigned int *)(param_1 + 0x300) = uVar7;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  iVar2 = param_1 + 0x9c;
  *(unsigned int *)(lbl_832766D4 + 0x30c) = 0;
  bVar1 = *(int *)(param_1 + 0x420) == 0;
  *(unsigned int *)(param_1 + 0x420) = (unsigned int)bVar1;
  if (!bVar1) {
    iVar2 = param_1 + 0xa0;
  }
  fn_8246F9F0(param_1,iVar2);
  if (iStack_110c != 0) {
    fn_822315A0();
  }
  return;
}

