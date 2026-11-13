typedef unsigned char bool;


bool fn_8284D798(int param_1,unsigned short param_2)

{
  return (param_2 & 0xffff & *(unsigned int *)(param_1 + 0x13c)) != 0;
}

