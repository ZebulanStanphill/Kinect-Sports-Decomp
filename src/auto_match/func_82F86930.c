extern int _NLG_Notify();


void _CallSettingFrame(void)

{
  int (**pcVar1)();
  
  pcVar1 = (int (**)())_NLG_Notify();
  (*pcVar1)();
  _NLG_Notify();
  return;
}

