extern unsigned int *auStack_d0;


void d3dx_output_message(int *param_1)

{
  unsigned char auStack_d0 [192];
  
  (*(int (**)())(*param_1 + 0xc))(param_1,auStack_d0);
  return;
}

