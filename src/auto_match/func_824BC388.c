extern int fn_824BC468();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern unsigned int lbl_824BC5A0;


void fn_824BC388(int param_1,int param_2)

{
  char cVar2;
  int iVar1;
  
  if (param_2 != 0) {
    cVar2 = fn_828EA610(param_2);
    if (cVar2 == '\0') {
      cVar2 = fn_828EA5F8(param_2);
      if (cVar2 != '\0') {
        if (*(int *)(*(int *)(param_2 + 0x100) + 0x8dc) != 1) {
          *(unsigned int *)(*(int *)(param_2 + 0x100) + 0x8dc) = 1;
        }
        RtlEnterCriticalSection(param_1);
        if (*(int *)(param_1 + 0x30) == 0) {
          RtlLeaveCriticalSection(param_1);
          cVar2 = fn_82512508(param_2);
          if ((cVar2 == '\0') || (iVar1 = fn_824BC468(param_1,param_2), iVar1 == 0)) {
            *(unsigned int *)(param_1 + 0x34) = 1;
          }
          else {
            *(int *)(param_1 + 0x1c) = param_2;
            *(unsigned int *)(param_1 + 0x30) = 1;
            *(unsigned int *)(param_1 + 0x20) = 0x237;
            *(unsigned int *)(param_1 + 0x24) = 4;
            *(unsigned int *)(param_1 + 0x28) = 0;
            *(unsigned char **)(param_1 + 0x2c) = &lbl_824BC5A0;
          }
        }
        else {
          *(unsigned int *)(param_1 + 0x34) = 1;
          RtlLeaveCriticalSection(param_1);
        }
      }
    }
  }
  return;
}

