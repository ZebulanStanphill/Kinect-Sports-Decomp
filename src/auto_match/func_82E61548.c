extern unsigned int *auStack_660;
extern int fn_82F691F0();
extern unsigned int uStack_688;
extern unsigned int uStack_68c;


/* WARNING: Removing unreachable block (ram,0x82e617c8) */

__int64 fn_82E61548(unsigned __int64 param_1,int param_2,int *param_3)

{
  __int64 lVar1;
  int *piStack_690;
  unsigned int uStack_68c;
  unsigned int uStack_688;
  unsigned char auStack_660 [1632];
  
  if ((param_2 == 0) || (param_3 == (int *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    piStack_690 = (int *)0x0;
    lVar1 = (**(int (***)())(*param_3 + 0x10))(param_3,0xffffffff82154aa8,0,&piStack_690);
    if (-1 < lVar1) {
      piStack_690 = (int *)0x0;
      uStack_68c = 0;
      uStack_688 = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_660,0,0x200);
    }
    if (piStack_690 != (int *)0x0) {
      (**(int (***)())(*piStack_690 + 8))();
    }
  }
  return lVar1;
}

