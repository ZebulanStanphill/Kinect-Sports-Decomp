extern unsigned int *auStack_20;
extern int fn_82633918();
extern int fn_826339C8();
extern unsigned int uStack_18;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82634AE0(int *param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_20 [8];
  unsigned int uStack_18;
  
  if ((((~(unsigned __int64)*(unsigned int *)(*param_1 + 0x4db4) & 0xffffffff) >> 5 & 1) != 0) &&
     (*(char *)(param_1 + 0x1f) != '\0')) {
    uStack_18 = 0x2000000;
    uVar1 = fn_82633918(param_1,auStack_20);
    fn_826339C8(param_1,uVar1,1);
  }
  return;
}

