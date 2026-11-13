extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_825A2410();
extern int fn_82CE4040();
extern int fn_82CEBB58();
extern int fn_82CEBB90();
extern int fn_82CEBC18();
extern int fn_82E0A1C0();
extern int fn_82E0B980();
extern int fn_82E0C7A0();
extern int fn_82E0C868();
extern int fn_82E0D7E8();
extern int fn_82E10A30();
extern int fn_82E12AC8();
extern unsigned int lbl_8323FDE4;


int fn_825A5070(__int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  char *pcVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [176];
  
  fn_82E0B980(auStack_b0);
  uVar7 = param_2[2];
  uVar1 = param_2[4];
  fn_82CEBB90(auStack_d0,*param_2,param_2[1],2);
  pcVar4 = (char *)fn_82CEBB58(auStack_e0,auStack_d0);
  if ((*pcVar4 == '\0') || (iVar5 = fn_82E0D7E8(auStack_b0,auStack_d0), iVar5 != 0)) {
    iVar5 = 0;
  }
  else {
    fn_82E10A30(auStack_b0,lbl_8323FDE4);
    uVar3 = fn_82E0A1C0(auStack_b0);
    iVar5 = fn_82E12AC8(auStack_b0,uVar3);
    if (0 < *(int *)(*(int *)(iVar5 + 0x34) + 0xb8)) {
      iVar2 = *(int *)(*(int *)(iVar5 + 0x34) + 0xb4);
      *(unsigned int *)(iVar2 + 0x18) = uVar1;
      *(unsigned int *)(iVar2 + 0x40) = uVar7;
      if (param_2[7] == 0) {
        uVar7 = 0;
        *(unsigned short *)(iVar2 + 10) = 1;
        *(unsigned int *)(iVar2 + 0xc) = 0;
        *(unsigned short *)(iVar2 + 8) = 0;
        *(unsigned short *)(iVar2 + 2) = 0;
      }
      else {
        *(short *)(iVar2 + 10) = (short)param_2[8];
        *(unsigned int *)(iVar2 + 0xc) = param_2[7];
        uVar7 = param_2[6];
        *(unsigned short *)(iVar2 + 8) = 1;
        *(unsigned short *)(iVar2 + 2) = 0xc;
      }
      *(unsigned char *)(iVar2 + 1) = 1;
      *(unsigned int *)(iVar2 + 4) = uVar7;
    }
    uVar3 = fn_82E0C868(auStack_b0);
    fn_82CE4040();
    fn_82CE4040(uVar3);
    puVar6 = (unsigned int *)fn_825A2410(param_1 + 0x14);
    *puVar6 = (int)uVar3;
  }
  fn_82CEBC18(auStack_d0);
  fn_82E0C7A0(auStack_b0);
  return iVar5;
}

