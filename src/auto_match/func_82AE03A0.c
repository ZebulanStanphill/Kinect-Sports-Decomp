typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern int fn_82ADF910();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool fn_82AE03A0(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned char auStack_3c [4];
  unsigned char auStack_38 [56];
  
  if ((((4 < (*(unsigned int *)(param_3 + 0xc0) & 7) + (*(unsigned int *)(param_2 + 0xc0) & 7)) ||
       ((*(unsigned int *)(param_2 + 0xc0) & 0x40000000) != 0)) ||
      ((*(unsigned int *)(param_3 + 0xc0) & 0x40000000) != 0)) &&
     (puVar1 = (unsigned int *)fn_82ADF910(auStack_3c,param_1,param_2,param_3,0,0,0,0),
     (*puVar1 & 0xf0000) == 0)) {
    puVar1 = (unsigned int *)fn_82ADF910(auStack_38,param_1,param_3,param_2,0,0,0,0);
    return (*puVar1 & 0xf0000) != 0;
  }
  return true;
}

