extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_825A2410();
extern int fn_825A4ED0();
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


void fn_825A4F20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned int *puVar7;
  int iVar8;
  unsigned char auStack_e0 [1];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [128];

  piVar4 = (int *)fn_825A4ED0();
  if (piVar4 != (int *)0x0) {
    fn_82E0B980(auStack_b0);
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      iVar1 = piVar4[1];
      iVar8 = piVar4[2];
      iVar2 = piVar4[4];
      *(unsigned int *)(param_1 + 0xc) = 3;
      fn_82CEBB90(auStack_d0,iVar6,iVar1,2);
      pcVar5 = (char *)fn_82CEBB58(auStack_e0,auStack_d0);
      if ((*pcVar5 != '\0') && (iVar6 = fn_82E0D7E8(auStack_b0,auStack_d0), iVar6 == 0)) {
        fn_82E10A30(auStack_b0,lbl_8323FDE4);
        uVar3 = fn_82E0A1C0(auStack_b0);
        iVar6 = fn_82E12AC8(auStack_b0,uVar3);
        if (0 < *(int *)(*(int *)(iVar6 + 0x34) + 0xb8)) {
          iVar1 = *(int *)(*(int *)(iVar6 + 0x34) + 0xb4);
          *(int *)(iVar1 + 0x18) = iVar2;
          *(int *)(iVar1 + 0x40) = iVar8;
          if (piVar4[7] == 0) {
            iVar8 = 0;
            *(unsigned short *)(iVar1 + 10) = 1;
            *(unsigned int *)(iVar1 + 0xc) = 0;
            *(unsigned short *)(iVar1 + 8) = 0;
            *(unsigned short *)(iVar1 + 2) = 0;
          }
          else {
            *(short *)(iVar1 + 10) = (short)piVar4[8];
            *(int *)(iVar1 + 0xc) = piVar4[7];
            iVar8 = piVar4[6];
            *(unsigned short *)(iVar1 + 8) = 1;
            *(unsigned short *)(iVar1 + 2) = 0xc;
          }
          *(unsigned char *)(iVar1 + 1) = 1;
          *(int *)(iVar1 + 4) = iVar8;
        }
        uVar3 = fn_82E0C868(auStack_b0);
        fn_82CE4040();
        fn_82CE4040(uVar3);
        puVar7 = (unsigned int *)fn_825A2410(param_1 + 0x14);
        *puVar7 = (int)uVar3;
        *(int *)(param_1 + 8) = iVar6;
      }
      fn_82CEBC18(auStack_d0);
    }
    fn_82E0C7A0(auStack_b0);
  }
  return;
}
