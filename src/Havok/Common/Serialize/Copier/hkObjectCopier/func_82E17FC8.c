extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFDFE0();
extern unsigned int *lbl_8323B464;


void fn_82E17FC8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,__int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned __int64 in_r0;
  int iVar2;
  unsigned char auStack_220 [16];
  unsigned char auStack_210 [528];
  
  if (param_2 - 1U < 0x20) {
    in_r0 = (unsigned __int64)*(unsigned int *)((param_2 - 1U) * 4 + -0x7d1e8004);
    switch(param_2) {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      uVar1 = (unsigned int)param_3;
      param_3 = 4;
      param_4 = (__int64)(int)(uVar1 >> 2) * (__int64)(int)param_4;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x20:
      fn_82CFDFE0(param_1,param_5,param_3,param_4);
      return;
    }
  }
  fn_82CEE578(auStack_220,auStack_210,0x200);
  fn_82CEDB38(auStack_220,0xffffffff8214b544);
  iVar2 = (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0x747e1e03,auStack_210,0xffffffff8214b528,0xfd);
  if (iVar2 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_220);
}

