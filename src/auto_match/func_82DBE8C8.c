#define true 1
extern int fn_82D98A88();
extern unsigned int lbl_8323B1A0;


int * fn_82DBE8C8(int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = (*(int (**)())(*param_1 + 0x20))();
  do {
    switch(uVar1) {
    case 0:
    case 8:
    case 0xf:
      return param_1 + 0xc;
    case 1:
    case 2:
    case 6:
    case 7:
    case 9:
    case 0xe:
      return param_1 + 0x24;
    default:
      return (int *)&lbl_8323B1A0;
    case 0xc:
      param_1 = (int *)param_1[6];
      break;
    case 0xd:
      param_1 = (int *)fn_82D98A88(param_1);
    }
    uVar1 = (*(int (**)())(*param_1 + 0x20))(param_1);
  } while( true );
}

