extern int fn_8265C990();
extern unsigned int lbl_83215000[];
extern char lbl_8315C428[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);




void fn_829CADB8(void)

{
  unsigned int *puVar1;
  int lVar2;
  unsigned int zero = 0;
  
  RtlEnterCriticalSection(lbl_8315C428);
  if (lbl_83215000[0x2168/4] != 0) {
    fn_8265C990(lbl_83215000[0x2168/4],0x209c0000);
    lbl_83215000[0x2168/4] = 0;
  }
  if (lbl_83215000[0x216c/4] != 0) {
    fn_8265C990(*(unsigned int *)(lbl_83215000[0x216c/4] + 100),0xac9c0000);
    fn_8265C990(lbl_83215000[0x216c/4],0x209c0000);
    lbl_83215000[0x216c/4] = 0;
  }
  if (lbl_83215000[0x2170/4] != 0) {
    fn_8265C990(*(unsigned int *)(lbl_83215000[0x2170/4] + 100),0xac9c0000);
    fn_8265C990(lbl_83215000[0x2170/4],0x209c0000);
    lbl_83215000[0x2170/4] = 0;
  }
  for (lVar2 = 0; lVar2 < 7; ++lVar2) {
    lbl_83215000[0x215c/4 + lVar2] = 0;
  }
  RtlLeaveCriticalSection(lbl_8315C428);
  return;
}

