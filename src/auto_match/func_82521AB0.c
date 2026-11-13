extern int fn_82599418();
extern int fn_827D81A8();
extern int fn_828EA610();
extern unsigned int lbl_83265A24;


void fn_82521AB0(int param_1)

{
  unsigned char cVar1;
  
  *(unsigned int *)(param_1 + 0x110) = 0;
  cVar1 = fn_828EA610();
  if (((cVar1 == '\0') && (*(char *)(param_1 + 0xd8) == '\0')) && (*(int *)(param_1 + 0x120) != -1))
  {
    fn_827D81A8(lbl_83265A24, *(int *)(param_1 + 0x120));
    *(unsigned int *)(param_1 + 0x120) = 0xffffffff;
    fn_82599418();
  }
  return;
}

