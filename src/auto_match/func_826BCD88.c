typedef unsigned char bool;
#define true 1
#define false 0


bool fn_826BCD88(int param_1,unsigned short param_2)

{
  unsigned short uVar1;
  
  uVar1 = *(unsigned short *)((param_2 >> 7 & 0x1fe) + param_1);
  if (uVar1 == 0) {
    return false;
  }
  if (uVar1 == 1) {
    return true;
  }
  return (1 << ((unsigned int)((unsigned __int64)param_2 & 0xffff) & 0xf) &
         (unsigned int)*(unsigned short *)
                ((((unsigned int)(((unsigned __int64)param_2 & 0xffff) >> 4) & 0xf) + (unsigned int)uVar1) * 2 + param_1))
         != 0;
}

