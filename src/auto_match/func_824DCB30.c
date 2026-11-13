extern unsigned int lbl_8218E0C8;
extern unsigned int lbl_82191598;
extern unsigned int lbl_821954C8;
extern unsigned int lbl_821955CC;
extern unsigned int lbl_821955D0;
extern unsigned int lbl_821CA460;


void fn_824DCB30(int *param_1,int *param_2,unsigned short *param_3)

{
  float fVar1;
  unsigned short uVar2;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_3 == (unsigned short *)0x0) {
    return;
  }
  if (in_register_00010018 <= lbl_821955CC) {
    uVar2 = 0;
    *param_1 = 0;
    *param_2 = 0;
  }
  else {
    uVar2 = (unsigned short)(((__int64)(in_register_00010018 * lbl_821954C8) & 0x1fffU) << 3);
    fVar1 = (lbl_821CA460 / in_register_00010018) * in_register_00010014 * lbl_821955D0 -
            lbl_82191598;
    *param_1 = (int)((lbl_821CA460 / in_register_00010018) * in_register_00010010 * lbl_821955D0 +
                    lbl_8218E0C8);
    *param_2 = (int)-fVar1;
  }
  *param_3 = uVar2;
  return;
}

