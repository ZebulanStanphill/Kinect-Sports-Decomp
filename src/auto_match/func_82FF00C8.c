extern int fn_82FECEE8();
extern int fn_82FF53D0();
extern int fn_8301B488();
extern unsigned int lbl_8216C698;
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;


unsigned __int64 fn_82FF00C8(int param_1,char param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  
  RtlEnterCriticalSection(0xffffffff83264558);
  if ((*(unsigned char *)(param_1 + 0xd9) & 2) == 0) {
    bVar1 = *(unsigned char *)(param_1 + 0xda);
    if ((bVar1 & 0x80) == 0) {
      *(unsigned char *)(param_1 + 0xda) = bVar1 | 0x80;
      if ((bVar1 & 2) == 0) {
        *(unsigned char *)(param_1 + 0xd7) = 0;
        uVar2 = lbl_8216C698;
        *(unsigned int *)(param_1 + 0x78) = lbl_8216C698;
        *(unsigned int *)(param_1 + 0x80) = uVar2;
      }
      if (param_2 == '\0') {
        fn_82FECEE8(3,param_1);
      }
      if (*(int *)(param_1 + 0x58) != 0) {
        fn_82FF53D0(lbl_832642F4);
      }
      if (*(int *)(param_1 + 0x17c) != 0) {
        fn_8301B488(lbl_832642F8);
      }
    }
  }
  RtlLeaveCriticalSection(0xffffffff83264558);
  return 1;
}

