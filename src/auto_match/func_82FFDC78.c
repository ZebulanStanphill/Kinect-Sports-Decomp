extern int fn_82A1E6A0();
extern int fn_82FF8FB0();
extern unsigned int lbl_832645A0;


char fn_82FFDC78(int param_1)

{
  int iVar1;
  
  if (lbl_832645A0 == 0) {
    *(unsigned char *)(param_1 + 0x30) = 0;
    iVar1 = fn_82A1E6A0(0,0,0,0);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 != 0) {
      fn_82FF8FB0(0xffffffff82ffda50,param_1,0xffffffff832643c0,0xffffffff832645a0,
                    0xffffffff8217bcfc);
      return (lbl_832645A0 == 0) + '\x01';
    }
  }
  return '\x02';
}

