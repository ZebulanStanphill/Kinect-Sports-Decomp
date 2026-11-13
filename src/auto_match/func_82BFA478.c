extern int fn_82BFA0C0();
extern unsigned int lbl_8322FD08[];


extern char lbl_83231D48[];
void fn_82BFA478(void)

{
  if (lbl_8322FD08[4] != 0) {
    RtlEnterCriticalSection(lbl_83231D48);
    fn_82BFA0C0();
    RtlLeaveCriticalSection(lbl_83231D48);
  }
  return;
}
