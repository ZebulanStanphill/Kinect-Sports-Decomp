#define true 1
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern char cRam832116e9;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FCD8();
extern int fn_82240158();
extern int fn_82520AC8();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82A1F2F8();
extern int fn_82F62578();


unsigned __int64 fn_8286E760(int param_1)

{
  int iVar1;
  unsigned int *puVar6;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int *piVar7;
  unsigned char auStack_120 [32];
  unsigned char auStack_100 [32];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [208];
  
  piVar7 = *(int **)(param_1 + 4);
  while( true ) {
    if (piVar7 == *(int **)(param_1 + 8)) {
      return 1;
    }
    iVar1 = *piVar7;
    if (((*(char *)(iVar1 + 0x29) == '\0') && (*(char *)(iVar1 + 0x2a) == '\0')) &&
       (*(char *)(iVar1 + 0x2b) == '\0')) break;
    piVar7 = piVar7 + 1;
  }
  if (cRam832116e9 != '\0') {
    fn_8223CFC0(auStack_d0,2,1);
    fn_828648B8(auStack_120,iVar1);
    puVar6 = (unsigned int *)fn_8223B688(auStack_100,auStack_120);
    if (0xf < (unsigned int)puVar6[5]) {
      puVar6 = (unsigned int *)*puVar6;
    }
    uVar2 = fn_828647D8(iVar1);
    uVar3 = fn_82A1F2F8();
    uVar4 = fn_82F62578(auStack_e0,8);
    uVar5 = fn_82240158(auStack_d0,0xffffffff82021a28);
    uVar4 = fn_8223FCD8(uVar5,uVar4);
    uVar3 = fn_82520AC8(uVar4,uVar3);
    uVar3 = fn_82240158(uVar3,0xffffffff82021a24);
    uVar3 = fn_82240158(uVar3,0xffffffff82021a00);
    uVar3 = fn_82240158(uVar3,puVar6);
    uVar3 = fn_82240158(uVar3,0xffffffff820219fc);
    uVar2 = fn_82520AC8(uVar3,uVar2);
    fn_82240158(uVar2,0xffffffff820219f8);
    fn_82230300(auStack_100,1,0);
    fn_82230300(auStack_120,1,0);
    fn_8223DCC8(auStack_d0);
  }
  return 0;
}

