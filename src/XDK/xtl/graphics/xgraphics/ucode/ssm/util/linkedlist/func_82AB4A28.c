extern int fn_82AB15D0();
extern int fn_82B6B128();


unsigned int * fn_82AB4A28(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82B6B128();
  if (puVar1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pNewItem","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp",0x49);
  }
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return puVar1;
}

