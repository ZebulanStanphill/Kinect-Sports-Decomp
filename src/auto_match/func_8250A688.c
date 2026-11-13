typedef unsigned char bool;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821955C8;


bool fn_8250A688(int param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  
  fVar1 = *(float *)(param_1 + 8);
  if ((((fVar1 < lbl_821955C8) || (lbl_8218EC10 < fVar1)) ||
      (*(float *)(param_2 + 8) < lbl_821955C8)) || (lbl_8218EC10 < *(float *)(param_2 + 8))) {
    bVar2 = fVar1 < *(float *)(param_2 + 8);
  }
  else {
    bVar2 = *(float *)(param_1 + 4) < *(float *)(param_2 + 4);
  }
  return bVar2;
}

