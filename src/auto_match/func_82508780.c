extern int fn_8225FAE0();
extern int fn_822B1958();
extern unsigned int lbl_83265988;


void fn_82508780(unsigned int param_1,int (*param_2)(),unsigned int param_3)

{
  if (((param_1 != 0) && (fn_822B1958(), param_3 == 0)) &&
     (param_1 == lbl_83265988)) {
    fn_8225FAE0();
  }
  (*param_2)(param_1,param_3);
  return;
}

