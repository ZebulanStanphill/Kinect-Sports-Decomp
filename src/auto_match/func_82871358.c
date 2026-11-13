extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern char cRam832116e0;
extern char cRam832116e1;
extern char cRam832116e2;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828664C8();
extern int fn_828684F8();
extern int fn_82870B98();
extern unsigned int lbl_82006848;


void fn_82871358(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  float fVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned char *puVar8;
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  iVar2 = *param_2;
  uVar6 = fn_828684F8();
  fn_82870B98(uVar6,iVar2);
  RtlEnterCriticalSection(iVar2 + 0x48);
  fVar5 = lbl_82006848;
  if (param_1 == 1) {
    if ((*(char *)(iVar2 + 0x45) != '\0') ||
       (*(unsigned char *)(iVar2 + 0x3d) = 1, cRam832116e0 == '\0')) goto LAB_82871500;
    fn_828648B8(auStack_f0,iVar2 + 0x18);
    fn_8223B688(auStack_50,auStack_f0);
    fn_82230300(auStack_f0,1,0);
    puVar8 = auStack_50;
  }
  else {
    if (param_1 == 4) {
      if (cRam832116e2 != '\0') {
        fn_828648B8(auStack_d0,iVar2 + 0x18);
        fn_8223B688(auStack_70,auStack_d0);
        fn_82230300(auStack_d0,1,0);
        fn_82230300(auStack_70,1,0);
      }
      fn_82865170();
      puVar7 = (unsigned int *)fn_828664C8();
      if (puVar7 != (unsigned int *)0x0) {
        uVar6 = fn_828684F8();
        fn_82870B98(uVar6,iVar2);
        puVar3 = (unsigned int *)*puVar7;
        iVar4 = param_2[6];
        uVar6 = fn_828647D8(iVar2 + 0x18);
        (*(int (**)())*puVar3)(puVar7,uVar6,iVar4);
        uVar6 = fn_828684F8();
        fn_82870B98(uVar6,iVar2);
      }
      goto LAB_82871500;
    }
    if (param_1 != 8) goto LAB_82871500;
    *(float *)(iVar2 + 0x6c) = (float)param_2[4] * lbl_82006848;
    fVar1 = (float)param_2[5];
    *(unsigned char *)(iVar2 + 0x68) = 1;
    *(float *)(iVar2 + 0x70) = fVar1 * fVar5;
    if (cRam832116e1 == '\0') goto LAB_82871500;
    fn_828648B8(auStack_b0,iVar2 + 0x18);
    fn_8223B688(auStack_90,auStack_b0);
    fn_82230300(auStack_b0,1,0);
    puVar8 = auStack_90;
  }
  fn_82230300(puVar8,1,0);
LAB_82871500:
  RtlLeaveCriticalSection(iVar2 + 0x48);
  uVar6 = fn_828684F8();
  fn_82870B98(uVar6,iVar2);
  return;
}

