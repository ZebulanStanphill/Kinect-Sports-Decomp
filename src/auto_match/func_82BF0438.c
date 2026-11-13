extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82BE5240();
extern int fn_82BE9200();
extern int fn_82BE94F0();
extern unsigned int lbl_8200F038;
extern unsigned int lbl_820EB318;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831754D8;
extern unsigned int lbl_8322B270;
extern unsigned int lbl_8322B274;
extern unsigned int uStack_2c;


double fn_82BF0438(unsigned int param_1,unsigned short param_2,unsigned short param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  double dVar6;
  unsigned int uStack_2c;
  
  if ((param_2 < 2) || (uVar1 = (unsigned int)param_3, uVar1 < 2)) {
    fn_82BE5240(param_1,0x19a,0xffffffff820eb2f0,param_2,param_3);
    dVar6 = (double)lbl_821AAD20;
  }
  else if (param_2 == lbl_8322B274) {
    dVar6 = (double)lbl_8322B270;
  }
  else {
    lbl_8322B274 = param_2;
    piVar2 = (int *)fn_82BE9200();
    iVar3 = fn_82BE94F0();
    uVar5 = (unsigned int)param_2;
    if ((iVar3 == 1) && (piVar2 != (int *)0x0)) {
      uVar4 = (__int64)(piVar2[3] - piVar2[1]) * (__int64)(piVar2[3] - piVar2[1]) +
              (__int64)(piVar2[2] - *piVar2) * (__int64)(piVar2[2] - *piVar2) & 0xffffffff;
    }
    else {
      uVar4 = (unsigned __int64)(int)(uVar1 * uVar1 + uVar5 * uVar5);
    }
    lbl_8322B270 = lbl_820EB318 / SQRT((float)(__int64)uVar4);
    dVar6 = (double)lbl_8322B270;
    uStack_2c = (unsigned int)
                (__int64)
                ((double)SQRT((float)((__int64)(int)uVar1 * (__int64)(int)uVar5)) * lbl_8200F038);
    lbl_831754D8 = uStack_2c;
  }
  return dVar6;
}

