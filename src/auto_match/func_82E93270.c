extern unsigned int lbl_831A97C0;
extern unsigned int lbl_831A97C8;
extern unsigned int lbl_831A97D0;


void fn_82E93270(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  if (*(int *)(param_1 + 4) == 7) {
    *(int *)(param_1 + 0x7870) = param_2;
    *(int *)(param_1 + 0x7880) = param_3;
    dVar1 = (double)(__int64)param_3;
    dVar2 = (double)(__int64)param_2;
    *(unsigned int *)(param_1 + 0x7874) = (int)(dVar2 * lbl_831A97C0) + 0xfU & 0xfffffff0;
    *(unsigned int *)(param_1 + 0x7884) = (int)(dVar1 * lbl_831A97C0) + 0xfU & 0xfffffff0;
    *(unsigned int *)(param_1 + 0x7878) = (int)(dVar2 * lbl_831A97C8) + 0xfU & 0xfffffff0;
    *(unsigned int *)(param_1 + 0x7888) = (int)(dVar1 * lbl_831A97C8) + 0xfU & 0xfffffff0;
    *(unsigned int *)(param_1 + 0x787c) = (int)(dVar2 * lbl_831A97D0) + 0xfU & 0xfffffff0;
    *(unsigned int *)(param_1 + 0x788c) = (int)(dVar1 * lbl_831A97D0) + 0xfU & 0xfffffff0;
    return;
  }
  *(unsigned __int64 *)(param_1 + 0x7870) = 0;
  *(unsigned __int64 *)(param_1 + 0x7878) = 0;
  *(unsigned __int64 *)(param_1 + 0x7880) = 0;
  *(unsigned __int64 *)(param_1 + 0x7888) = 0;
  return;
}

