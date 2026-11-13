extern int fn_82E6FB58();
extern unsigned int lbl_8215EE30;
extern unsigned int lbl_8215EE70;


void fn_82E6FF30(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[0x1a];
  *param_1 = &lbl_8215EE70;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  param_1[0x1a] = 0;
  *param_1 = &lbl_8215EE30;
  fn_82E6FB58(param_1);
  return;
}

