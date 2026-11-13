extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822CAA28();
extern int fn_8265C9E0();
extern int fn_82897DF8();
extern int fn_828ABF58();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B1670;


/* WARNING: Removing unreachable block (ram,0x8233e168) */

void fn_8233DEB8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char auStack_1e0 [32];
  unsigned char auStack_1c0 [32];
  unsigned char auStack_1a0 [32];
  unsigned char auStack_180 [32];
  unsigned char auStack_160 [32];
  unsigned char auStack_140 [32];
  unsigned char auStack_120 [32];
  unsigned char auStack_100 [32];
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [96];
  
  fn_822CAA28();
  fn_82230110(auStack_1c0,0xffffffff821b14d8);
  fn_82897DF8(param_1 + 0x20c,param_1,auStack_1c0);
  fn_82230300(auStack_1c0,1,0);
  fn_82230110(auStack_100,0xffffffff821b14e4);
  *(unsigned char *)(param_1 + 0x270) = 0;
  fn_82897DF8(param_1 + 0x264,param_1,auStack_100);
  fn_82230300(auStack_100,1,0);
  fn_82230110(auStack_180,0xffffffff821b14f4);
  fn_82897DF8(param_1 + 700,param_1,auStack_180);
  fn_82230300(auStack_180,1,0);
  fn_82230110(auStack_80,0xffffffff821b14fc);
  fn_82897DF8(param_1 + 0x314,param_1,auStack_80);
  fn_82230300(auStack_80,1,0);
  fn_82230110(auStack_140,0xffffffff821b1504);
  fn_82897DF8(param_1 + 0x36c,param_1,auStack_140);
  fn_82230300(auStack_140,1,0);
  fn_82230110(auStack_c0,0xffffffff821b151c);
  fn_82897DF8(param_1 + 0x3c4,param_1,auStack_c0);
  fn_82230300(auStack_c0,1,0);
  fn_82230110(auStack_1e0,0xffffffff821b152c);
  *(unsigned char *)(param_1 + 0x428) = 0;
  fn_82897DF8(param_1 + 0x41c,param_1,auStack_1e0);
  fn_82230300(auStack_1e0,1,0);
  fn_82230110(auStack_1a0,0xffffffff821b153c);
  *(unsigned char *)(param_1 + 0x480) = 0;
  fn_82897DF8(param_1 + 0x474,param_1,auStack_1a0);
  fn_82230300(auStack_1a0,1,0);
  fn_82230110(auStack_160,0xffffffff821b1548);
  fn_82897DF8(param_1 + 0x4cc,param_1,auStack_160);
  fn_82230300(auStack_160,1,0);
  fn_82230110(auStack_120,0xffffffff821b1554);
  puVar2 = (unsigned int *)fn_8265C9E0(0x2c);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821B1670;
      fn_828ABF58(puVar2 + 5,0,0,3);
    }
  }
  puVar4 = (unsigned int *)0x0;
  puVar5 = (unsigned int *)0x0;
  if ((puVar2 != (unsigned int *)0x0) && (cVar3 = fn_8223AAC0(puVar2), cVar3 != '\0')) {
    puVar4 = puVar2 + 3;
    puVar5 = puVar2;
  }
  iVar1 = *(int *)(param_1 + 0x580);
  *(unsigned int **)(param_1 + 0x580) = puVar5;
  *(unsigned int **)(param_1 + 0x57c) = puVar4;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  puVar4 = (unsigned int *)(param_1 + 0x530);
  *(unsigned int *)(param_1 + 0x52c) = 7;
  *(unsigned int *)(param_1 + 0x534) = 4;
  *puVar4 = 0;
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = 0;
  }
  fn_82897DF8(param_1 + 0x524,param_1,auStack_120);
  if (puVar2 != (unsigned int *)0x0) {
    fn_822315A0(puVar2);
  }
  fn_82230300(auStack_120,1,0);
  fn_82230110(auStack_e0,0xffffffff821b156c);
  fn_82897DF8(param_1 + 0x584,param_1,auStack_e0);
  fn_82230300(auStack_e0,1,0);
  fn_82230110(auStack_a0,0xffffffff821b1578);
  *(unsigned char *)(param_1 + 0x5e8) = 0;
  fn_82897DF8(param_1 + 0x5dc,param_1,auStack_a0);
  fn_82230300(auStack_a0,1,0);
  fn_82230110(auStack_60,0xffffffff821b158c);
  *(unsigned char *)(param_1 + 0x640) = 0;
  fn_82897DF8(param_1 + 0x634,param_1,auStack_60);
  fn_82230300(auStack_60,1,0);
  return;
}

