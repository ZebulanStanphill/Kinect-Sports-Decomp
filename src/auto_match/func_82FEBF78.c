extern unsigned char fn_83023568();
extern unsigned char fn_830235F0();
extern int fn_83023608();
extern int fn_83023618();
extern unsigned int lbl_832643B0;


unsigned short fn_82FEBF78(void)

{
  unsigned char cVar2;
  unsigned short uVar1;
  
  RtlEnterCriticalSection((unsigned __int64)lbl_832643B0 + 8);
  cVar2 = fn_83023568(lbl_832643B0);
  if ((cVar2 != '\0') && (cVar2 = fn_830235F0(lbl_832643B0), cVar2 != '\0')) {
    fn_83023618(lbl_832643B0);
  }
  uVar1 = fn_83023608(lbl_832643B0);
  RtlLeaveCriticalSection((unsigned __int64)lbl_832643B0 + 8);
  return uVar1;
}

