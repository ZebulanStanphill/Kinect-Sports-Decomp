extern int fn_8268E080();


void fn_826F6318(int param_1,unsigned int param_2,unsigned char param_3)

{
  if ((param_2 & 0xffffffff) != 0) {
    fn_8268E080(param_2,0x148,param_1 + 0xb30);
    fn_8268E080(param_2,0x14b,param_1 + 0xb48);
    fn_8268E080(param_2,0x149,param_1 + 0xb38);
    fn_8268E080(param_2,0x14a,param_1 + 0xb40);
    fn_8268E080(param_2,0x14c,param_1 + 0xb50);
    fn_8268E080(param_2,0x14d,param_1 + 0xb58);
    fn_8268E080(param_2,0x14e,param_1 + 0xb60);
    fn_8268E080(param_2,0x14f,param_1 + 0xb68);
    fn_8268E080(param_2,0x150,param_1 + 0xb70);
    fn_8268E080(param_2,0x151,param_1 + 0xb80);
    fn_8268E080(param_2,0x153,param_1 + 0xb88);
    fn_8268E080(param_2,0x154,param_1 + 0xb8c);
    fn_8268E080(param_2,0x155,param_1 + 0xb78);
  }
  if (param_3 != '\0') {
    *(unsigned __int64 *)(param_1 + 0xb30) = 0;
    *(unsigned __int64 *)(param_1 + 0xb48) = 0;
    *(unsigned __int64 *)(param_1 + 0xb38) = 0;
    *(unsigned __int64 *)(param_1 + 0xb40) = 0;
    *(unsigned __int64 *)(param_1 + 0xb50) = 0;
    *(unsigned __int64 *)(param_1 + 0xb58) = 0;
    *(unsigned __int64 *)(param_1 + 0xb60) = 0;
    *(unsigned __int64 *)(param_1 + 0xb68) = 0;
    *(unsigned __int64 *)(param_1 + 0xb70) = 0;
    *(unsigned __int64 *)(param_1 + 0xb80) = 0;
    *(unsigned int *)(param_1 + 0xb88) = 0;
    *(unsigned int *)(param_1 + 0xb8c) = 0;
    *(unsigned int *)(param_1 + 0xb78) = 0;
  }
  return;
}

