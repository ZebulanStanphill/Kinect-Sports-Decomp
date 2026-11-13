extern int fn_8281F820();
extern int fn_8281FB48();
extern unsigned int lbl_8201EBA0;


void fn_8281FBB0(unsigned int *param_1)

{
  *param_1 = &lbl_8201EBA0;
  if (*(char *)(param_1 + 3) == '\x01') {
    fn_8281F820();
    fn_8281FB48();
  }
  return;
}

