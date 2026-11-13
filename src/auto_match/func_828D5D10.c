#define _iStack00000010 ((*(unsigned __int64*)&iStack00000010))
#define _iStack00000020 ((*(unsigned __int64*)&iStack00000020))
extern int fn_828D5808();
extern unsigned int iStack00000010;
extern unsigned int iStack00000020;
extern unsigned int uStack00000014;
extern unsigned int uStack00000018;
extern unsigned int uStack00000024;


void fn_828D5D10(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iStack00000010;
  unsigned int uStack00000014;
  unsigned __int64 uStack00000018;
  int iStack00000020;
  unsigned int uStack00000024;
  
  iStack00000010 = (int)(param_1 >> 0x20);
  uStack00000014 = (unsigned int)param_1;
  uStack00000014 = uStack00000014 >> 2;
  if (*(unsigned int *)(iStack00000010 + 8) <= uStack00000014) {
    uStack00000014 = uStack00000014 - *(unsigned int *)(iStack00000010 + 8);
  }
  iStack00000020 = (int)(param_3 >> 0x20);
  uStack00000024 = (unsigned int)param_3;
  uStack00000024 = uStack00000024 >> 2;
  if (*(unsigned int *)(iStack00000020 + 8) <= uStack00000024) {
    uStack00000024 = uStack00000024 - *(unsigned int *)(iStack00000020 + 8);
  }
  *(unsigned int *)
   (*(int *)(*(int *)(iStack00000020 + 4) + uStack00000024 * 4) + (int)((param_3 & 3) << 2)) =
       *(unsigned int *)
        (*(int *)(*(int *)(iStack00000010 + 4) + uStack00000014 * 4) + (int)((param_1 & 3) << 2));
  _iStack00000010 = param_1;
  uStack00000018 = param_2;
  _iStack00000020 = param_3;
  fn_828D5808(param_1,0,(param_2 & 0xffffffff) - (param_1 & 0xffffffff));
  return;
}

