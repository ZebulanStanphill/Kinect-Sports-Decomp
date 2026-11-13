typedef unsigned char bool;
#define true 1


void fn_828768FC(char *param_1)

{
  unsigned char in_cr0;
  
  while( true ) {
    if ((bool)(in_cr0 >> 1 & 1)) {
      return;
    }
    if (*param_1 == '.') break;
    param_1 = param_1 + 1;
    in_cr0 = (*param_1 == '\0') << 1;
  }
  *param_1 = '\0';
  return;
}

