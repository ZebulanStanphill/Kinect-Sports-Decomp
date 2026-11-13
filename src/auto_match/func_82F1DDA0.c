extern unsigned int lbl_831ADF60;
extern unsigned int lbl_831ADFE0;
extern unsigned int lbl_831AE060;
extern unsigned int lbl_831AE0E0;
extern unsigned int lbl_831AE160;
extern unsigned int lbl_831AE1E0;
extern unsigned int lbl_831AE260;
extern unsigned int lbl_831AE2A0;
extern unsigned int lbl_831AE2E0;


void fn_82F1DDA0(int param_1,int param_2)

{
  if (param_2 < 5) {
    *(unsigned char **)(param_1 + 0x7600) = &lbl_831AE0E0;
    *(unsigned char **)(param_1 + 0x7604) = &lbl_831AE260;
    *(unsigned char **)(param_1 + 0x7608) = &lbl_831ADF60;
    return;
  }
  if (param_2 < 0xd) {
    *(unsigned char **)(param_1 + 0x7600) = &lbl_831AE160;
    *(unsigned char **)(param_1 + 0x7604) = &lbl_831AE2A0;
    *(unsigned char **)(param_1 + 0x7608) = &lbl_831ADFE0;
    return;
  }
  *(unsigned char **)(param_1 + 0x7600) = &lbl_831AE1E0;
  *(unsigned char **)(param_1 + 0x7604) = &lbl_831AE2E0;
  *(unsigned char **)(param_1 + 0x7608) = &lbl_831AE060;
  return;
}

