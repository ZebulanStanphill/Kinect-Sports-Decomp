typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82BA02A8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8322B22C;


char fn_82BEA038(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [1];
  
  if (((param_1 == (float *)0x0) || (param_2 == (float *)0x0)) || (lbl_8322B22C == 0)) {
LAB_82bea170:
    cVar8 = '\0';
  }
  else {
    bVar7 = false;
    fn_82BA02A8(auStack_50);
    fn_82BA02A8(auStack_40);
    iVar9 = 0;
    pfVar10 = (float *)(lbl_8322B22C + 0xd8);
    do {
      if (lbl_821AAD20 < pfVar10[-1]) {
        fVar1 = *param_2;
        fVar2 = *param_1;
      }
      else {
        fVar1 = *param_1;
        fVar2 = *param_2;
      }
      if (lbl_821AAD20 < *pfVar10) {
        fVar3 = param_2[1];
        fVar4 = param_1[1];
      }
      else {
        fVar3 = param_1[1];
        fVar4 = param_2[1];
      }
      if (lbl_821AAD20 < pfVar10[1]) {
        fVar5 = param_2[2];
        fVar6 = param_1[2];
      }
      else {
        fVar5 = param_1[2];
        fVar6 = param_2[2];
      }
      if (*pfVar10 * fVar3 + pfVar10[-1] * fVar1 + pfVar10[1] * fVar5 + pfVar10[2] < lbl_821AAD20)
      goto LAB_82bea170;
      if (*pfVar10 * fVar4 + pfVar10[-1] * fVar2 + pfVar10[1] * fVar6 + pfVar10[2] <= lbl_821AAD20)
      {
        bVar7 = true;
      }
      iVar9 = iVar9 + 1;
      pfVar10 = pfVar10 + 4;
    } while (iVar9 < 6);
    cVar8 = !bVar7 + '\x01';
  }
  return cVar8;
}

