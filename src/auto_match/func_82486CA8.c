extern int fn_82F666D0();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82486CA8(unsigned int param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  *param_2 = 0;
  switch(param_1) {
  case 0:
    uVar1 = 0xffffffff821be7b0;
    break;
  case 1:
    uVar1 = 0xffffffff821be7bc;
    break;
  case 2:
    uVar1 = 0xffffffff821be7d0;
    break;
  case 3:
    uVar1 = 0xffffffff821be7dc;
    break;
  case 4:
    uVar1 = 0xffffffff821be7ec;
    break;
  case 5:
    uVar1 = 0xffffffff821be7fc;
    break;
  case 6:
    uVar1 = 0xffffffff821be808;
    break;
  case 7:
    uVar1 = 0xffffffff821be814;
    break;
  case 8:
    uVar1 = 0xffffffff821be820;
    break;
  case 9:
    return;
  case 10:
    uVar1 = 0xffffffff821be828;
    break;
  default:
    return;
  }
  uStack00000048 = 0;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  fn_82F666D0(param_2,0x14,uVar1,0,&stack0x00000028);
  return;
}

