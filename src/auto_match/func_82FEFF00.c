extern unsigned short fn_82FF3F40();
extern int fn_83000878();
extern int fn_8301B380();
extern unsigned int lbl_832642F8;


extern char lbl_83264558[];
void fn_82FEFF00(int param_1)

{
  unsigned short uVar2;
  unsigned int uVar1;
  
  RtlEnterCriticalSection(lbl_83264558);
  uVar2 = fn_82FF3F40(*(unsigned int *)(param_1 + 0x68));
  *(unsigned short *)(param_1 + 0xd4) = uVar2;
  if ((*(unsigned char *)(param_1 + 0xda) & 0x40) == 0) {
    *(unsigned char *)(param_1 + 0xda) = *(unsigned char *)(param_1 + 0xda) | 0x40;
    if (*(unsigned int *)(param_1 + 0x17c) != 0) {
      uVar1 = fn_83000878(*(unsigned int *)(param_1 + 0x68));
      fn_8301B380(lbl_832642F8,*(unsigned int *)(param_1 + 0x17c),uVar1);
    }
  }
  RtlLeaveCriticalSection(lbl_83264558);
  return;
}

