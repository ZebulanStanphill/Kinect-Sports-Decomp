extern float lbl_82186E6C;
extern unsigned int lbl_821AAD20;


float fn_830057F8(int param_1)

{
  if (*(short **)(param_1 + 0x44) == (short *)0x0) {
    return 0.0f;
  }
  return ((float)(__int64)**(short **)(param_1 + 0x44) * 0.1f);
}

