typedef unsigned char bool;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821960A8;
extern unsigned int lbl_821960AC;
extern unsigned int lbl_821960B0;
extern unsigned int lbl_821960B4;
extern unsigned int lbl_821960B8;
extern unsigned int lbl_821960BC;
extern unsigned int lbl_821960C0;
extern unsigned int lbl_821960C4;
extern unsigned int lbl_821960C8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fn_8281D7B8(float *param_1)

{
  float fVar1;
  
  fVar1 = lbl_8201DCB8 * lbl_8201DCB8;
  return (param_1[8] - lbl_821960C8) * (param_1[8] - lbl_821960C8) <= fVar1 &&
         ((param_1[5] - lbl_821960BC) * (param_1[5] - lbl_821960BC) <= fVar1 &&
         ((param_1[2] - lbl_821960B0) * (param_1[2] - lbl_821960B0) <= fVar1 &&
         ((param_1[7] - lbl_821960C4) * (param_1[7] - lbl_821960C4) <= fVar1 &&
         ((param_1[4] - lbl_821960B8) * (param_1[4] - lbl_821960B8) <= fVar1 &&
         ((param_1[1] - lbl_821960AC) * (param_1[1] - lbl_821960AC) <= fVar1 &&
         ((param_1[6] - lbl_821960C0) * (param_1[6] - lbl_821960C0) <= fVar1 &&
         ((param_1[3] - lbl_821960B4) * (param_1[3] - lbl_821960B4) <= fVar1 &&
         (*param_1 - lbl_821960A8) * (*param_1 - lbl_821960A8) <= fVar1)))))));
}

