extern int fn_82FB04A0();
extern int fn_83007AE8();
extern int fn_8300CA50();
extern int fn_8302FEC0();
extern int fn_830308E8();
extern int fn_83030AE8();
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_83030BF0(int param_1,int param_2,unsigned int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  char *pcVar3;
  unsigned int *puVar4;
  char cVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int uVar15;
  unsigned __int64 uVar14;
  unsigned int *puStack0000001c;
  unsigned int uStack00000024;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned char bStack_48;
  
  puStack0000001c = (unsigned int *)(param_2 + 4);
  uStack00000024 = param_3;
  fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,0);
  iVar11 = 1;
  iVar12 = *puStack0000001c;
  piVar1 = (int *)(puStack0000001c + 1);
  iVar10 = puStack0000001c[2];
  cVar5 = *(char *)(puStack0000001c + 3);
  puStack0000001c = (unsigned int *)((int)puStack0000001c + 0xd);
  if ((*piVar1 != *(int *)(param_1 + 0xbc)) || (iVar12 != *(int *)(param_1 + 0xb8))) {
    *(int *)(param_1 + 0xbc) = *piVar1;
    *(int *)(param_1 + 0xb8) = iVar12;
    iVar11 = fn_8300CA50(param_1 + 0xa8);
  }
  if (iVar11 == 1) {
    *(int *)(param_1 + 0xc0) = iVar10;
    *(unsigned char *)(param_1 + 0x3e) = (cVar5 != '\0') << 6 | *(unsigned char *)(param_1 + 0x3e) & 0xbf;
    iVar12 = fn_82FB04A0(param_1,&stack0x0000001c,&stack0x00000024);
    if (iVar12 == 1) {
      uVar13 = 0;
      uVar6 = *puStack0000001c;
      puStack0000001c = puStack0000001c + 1;
      if (uVar6 != 0) {
        do {
          uVar7 = *puStack0000001c;
          puStack0000001c = puStack0000001c + 1;
          iVar12 = fn_83030AE8(param_1,uVar7);
          if (iVar12 != 1) {
            return;
          }
          uVar15 = 0;
          uVar8 = *puStack0000001c;
          puStack0000001c = puStack0000001c + 1;
          if (uVar8 != 0) {
            do {
              uVar9 = *puStack0000001c;
              puStack0000001c = puStack0000001c + 1;
              iVar12 = fn_8302FEC0(param_1,uVar7,uVar9);
              if (iVar12 != 1) {
                return;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar8);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar6);
      }
      uVar6 = *puStack0000001c;
      puStack0000001c = puStack0000001c + 1;
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar14 = (unsigned __int64)bStack_48;
        do {
          uVar7 = *puStack0000001c;
          puVar2 = puStack0000001c + 1;
          pcVar3 = (char *)((int)puStack0000001c + 5);
          puVar4 = (unsigned int *)((int)puStack0000001c + 6);
          stack_pair_50.first = *(unsigned int *)((int)puStack0000001c + 10);
          stack_pair_50.second = *(unsigned int *)((int)puStack0000001c + 0xe);
          puStack0000001c = (unsigned int *)((int)puStack0000001c + 0x12);
          uVar14 = (((unsigned __int64)*puVar4 & 7) << 2 | (unsigned __int64)(*pcVar3 != '\0')) << 3 |
                   (unsigned __int64)(*(char *)puVar2 != '\0') << 4 | uVar14 & 7;
          bStack_48 = (unsigned char)uVar14;
          iVar12 = fn_830308E8(param_1,uVar7,&stack_pair_50.first);
          if (iVar12 != 1) {
            return;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar6);
      }
    }
  }
  return;
}

