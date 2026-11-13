extern unsigned int *lbl_83217A00;


void fn_829D48F8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  if (lbl_83217A00 != (int *)0x0) {
    (**(int (***)())(*lbl_83217A00 + 0x18))
              (lbl_83217A00,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

