extern float fRam831db308;
extern float fRam8326b4e0;
extern float fRam8326b4e4;
extern float fRam8326b4e8;
extern float fRam8326b4ec;
extern float fRam8326b4f0;
extern float fRam8326b4f4;
extern float fRam8326b4f8;
extern float fRam8326b4fc;
extern float fRam8326b500;
extern float fRam8326b504;
extern float fRam8326b508;
extern float fRam8326b50c;
extern float fRam8326b510;
extern float fRam8326b514;
extern float fRam8326b518;
extern float fRam8326b51c;
extern float fRam8326b520;
extern float fRam8326b524;
extern float fRam8326b528;
extern float fRam8326b52c;
extern float fRam8326b530;
extern float fRam8326b534;
extern float fRam8326b538;
extern float fRam8326b53c;
extern float fRam8326b540;
extern float fRam8326b544;
extern float fRam8326b548;
extern float fRam8326b54c;
extern int iRam8326b45c;
extern float lbl_8218E8E8;
extern float lbl_82191F78;
extern float lbl_82191FCC;
extern unsigned int lbl_82193CF4;
extern unsigned int lbl_82195614;
extern unsigned int lbl_82195678;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825640F0(int param_1)

{
  float fVar1;
  
  fVar1 = lbl_82195678;
  if (iRam8326b45c == 0) {
    fVar1 = fRam831db308;
  }
  fRam8326b4e8 = (float)*(unsigned int *)(param_1 + 8) * fRam831db308;
  fRam8326b4ec = (float)*(unsigned int *)(param_1 + 4) * fVar1;
  fRam8326b4e0 = (float)*(unsigned int *)(param_1 + 8) * lbl_82191F78;
  fRam8326b4f0 = fRam8326b4e0;
  fRam8326b4e4 = (float)*(unsigned int *)(param_1 + 4) * lbl_82191F78;
  fRam8326b4f4 = fRam8326b4e4;
  fRam8326b530 = (float)*(unsigned int *)(param_1 + 8) * lbl_82191FCC;
  fRam8326b534 = (float)*(unsigned int *)(param_1 + 4) * lbl_82191FCC;
  fRam8326b4fc = ((float)*(unsigned int *)(param_1 + 8) - fRam8326b4e0) * lbl_8218E8E8;
  fRam8326b4f8 = ((float)*(unsigned int *)(param_1 + 4) - fRam8326b4e4) * lbl_8218E8E8;
  fRam8326b508 = fRam8326b4e4 * lbl_8218E8E8 + fRam8326b4f8;
  fRam8326b528 = fRam8326b508;
  fRam8326b514 = fRam8326b4e4 - lbl_82193CF4;
  fRam8326b50c = fRam8326b4e0 * lbl_8218E8E8 + fRam8326b4fc;
  fRam8326b510 = fRam8326b4e0 - lbl_82193CF4;
  fRam8326b52c = fRam8326b50c;
  fRam8326b51c = fRam8326b4fc + lbl_82195614;
  fRam8326b518 = fRam8326b4f8 + lbl_82195614;
  fRam8326b504 = -(((float)*(unsigned int *)(param_1 + 8) - fRam8326b4e0) * lbl_8218E8E8 -
                  (float)*(unsigned int *)(param_1 + 8));
  fRam8326b500 = -(((float)*(unsigned int *)(param_1 + 4) - fRam8326b4e4) * lbl_8218E8E8 -
                  (float)*(unsigned int *)(param_1 + 4));
  fRam8326b524 = fRam8326b504 - lbl_82195614;
  fRam8326b520 = fRam8326b500 - lbl_82195614;
  fRam8326b53c = ((float)*(unsigned int *)(param_1 + 8) - fRam8326b530) * lbl_8218E8E8;
  fRam8326b538 = ((float)*(unsigned int *)(param_1 + 4) - fRam8326b534) * lbl_8218E8E8;
  fRam8326b54c = fRam8326b530 * lbl_8218E8E8 + fRam8326b53c;
  fRam8326b548 = fRam8326b534 * lbl_8218E8E8 + fRam8326b538;
  fRam8326b544 = -(((float)*(unsigned int *)(param_1 + 8) - fRam8326b530) * lbl_8218E8E8 -
                  (float)*(unsigned int *)(param_1 + 8));
  fRam8326b540 = -(((float)*(unsigned int *)(param_1 + 4) - fRam8326b534) * lbl_8218E8E8 -
                  (float)*(unsigned int *)(param_1 + 4));
  return;
}

