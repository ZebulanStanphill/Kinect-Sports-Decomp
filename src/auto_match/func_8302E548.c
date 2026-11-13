typedef unsigned char bool;
extern int fn_82FB04A0();
extern int fn_83007AE8();
extern int fn_8302D408();
extern int fn_8302E148();
extern int fn_8302E4C0();
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_8302E548(int param_1,int param_2,unsigned int param_3)

{
  float *pfVar1;
  float *pfVar2;
  unsigned short *puVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  unsigned short *puStack0000001c;
  unsigned int uStack00000024;
  
  puStack0000001c = (unsigned short *)(param_2 + 4);
  uStack00000024 = param_3;
  iVar11 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,0);
  if (iVar11 == 1) {
    *(unsigned short *)(param_1 + 0x120) = *puStack0000001c;
    pfVar1 = (float *)(puStack0000001c + 3);
    pfVar2 = (float *)(puStack0000001c + 5);
    sVar10 = puStack0000001c[7];
    bVar4 = *(unsigned char *)(puStack0000001c + 8);
    bVar5 = *(unsigned char *)((int)puStack0000001c + 0x11);
    puVar3 = puStack0000001c + 9;
    cVar6 = *(char *)(puStack0000001c + 10);
    cVar7 = *(char *)((int)puStack0000001c + 0x15);
    cVar8 = *(char *)(puStack0000001c + 0xb);
    dVar15 = (double)*(float *)(puStack0000001c + 1);
    cVar9 = *(char *)((int)puStack0000001c + 0x17);
    puStack0000001c = puStack0000001c + 0xc;
    dVar14 = (double)*pfVar1;
    dVar13 = (double)*pfVar2;
    iVar11 = fn_8302E148(param_1,*(unsigned char *)puVar3);
    if (iVar11 == 1) {
      *(float *)(param_1 + 0x114) = (float)dVar14;
      *(float *)(param_1 + 0x118) = (float)dVar13;
      *(float *)(param_1 + 0x110) = (float)dVar15;
      if (*(short *)(param_1 + 0x11c) != sVar10) {
        *(short *)(param_1 + 0x11c) = sVar10;
        fn_8302D408(param_1);
      }
      if (*(unsigned char *)(param_1 + 0x11e) >> 4 != bVar4) {
        *(unsigned char *)(param_1 + 0x11e) = bVar4 << 4 | *(unsigned char *)(param_1 + 0x11e) & 0xf;
        fn_8302D408(param_1);
      }
      if ((*(unsigned char *)(param_1 + 0x11e) >> 2 & 3) != bVar5) {
        *(unsigned char *)(param_1 + 0x11e) = (bVar5 & 3) << 2 | *(unsigned char *)(param_1 + 0x11e) & 0xf3;
        fn_8302D408(param_1);
      }
      bVar4 = 1 - (cVar6 == '\0');
      if ((*(unsigned char *)(param_1 + 0x11f) >> 3 & 1) != bVar4) {
        *(unsigned char *)(param_1 + 0x11f) = (bVar4 & 1) << 3 | *(unsigned char *)(param_1 + 0x11f) & 0xf7;
        fn_8302D408(param_1);
      }
      bVar4 = *(unsigned char *)(param_1 + 0x11f);
      bVar5 = (cVar7 != '\0') << 2;
      *(unsigned char *)(param_1 + 0x11f) = bVar5 | bVar4 & 0xfb;
      if (((unsigned __int64)bVar4 & 2) >> 1 != (unsigned __int64)(cVar8 != '\0')) {
        *(unsigned char *)(param_1 + 0x11f) = (cVar8 != '\0') << 1 | bVar5 | bVar4 & 0xf9;
        fn_8302D408(param_1);
      }
      bVar12 = cVar9 != '\0';
      if ((bool)(*(unsigned char *)(param_1 + 0x11f) & 1) != bVar12) {
        *(unsigned char *)(param_1 + 0x11f) = bVar12 | *(unsigned char *)(param_1 + 0x11f) & 0xfe;
        fn_8302D408(param_1);
      }
      iVar11 = fn_82FB04A0(param_1,&stack0x0000001c,&stack0x00000024);
      if (iVar11 == 1) {
        fn_8302E4C0(param_1,&stack0x0000001c,&stack0x00000024);
      }
    }
  }
  return;
}

