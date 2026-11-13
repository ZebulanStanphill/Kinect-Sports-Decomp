#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_83016E90();


unsigned __int64
fn_83017108(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,char *param_5
             )

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  
  puVar2 = (unsigned int *)
           fn_83016E90(param_1 + 4,CONCAT44((int)param_2,(int)param_3),
                        param_2 + param_3 + ((param_2 + param_3 & 0xffffffff) / 0xc1) * -0xc1);
  if (puVar2 == (unsigned int *)0x0) {
    if ((param_3 & 0xffffffff) != 0) {
      *param_5 = '\0';
      puVar2 = (unsigned int *)
               fn_83016E90(param_1 + 4,param_2 << 0x20,
                            param_2 + ((param_2 & 0xffffffff) / 0xc1) * -0xc1);
      if (puVar2 != (unsigned int *)0x0) {
        *param_4 = *puVar2;
        return 1;
      }
    }
    uVar1 = 0;
  }
  else {
    *param_4 = *puVar2;
    uVar1 = 1;
    *param_5 = '\x01' - (param_3 == 0);
  }
  return uVar1;
}

