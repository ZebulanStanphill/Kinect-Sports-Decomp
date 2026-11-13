extern int fn_8223C478();
extern int fn_828E9DB8();
extern int fn_828EA2D8();


void fn_828824C0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) < 0) {
    fn_8223C478(0xffffffff831599fc,1,0);
    fn_828E9DB8(0xffffffff831599fc,0,1);
  }
  else {
    fn_8223C478(0xffffffff831599fc,1,0);
    fn_828E9DB8(0xffffffff831599fc,1,1);
    fn_8223C478(0xffffffff831599fc,1,0);
    fn_828E9DB8(0xffffffff831599fc,0,1);
    cVar1 = *(char *)(param_1 + 0xc);
    fn_8223C478(0xffffffff831599fc,1,0);
    fn_828E9DB8(0xffffffff831599fc,cVar1 == '\0',1);
    fn_8223C478(0xffffffff831599fc,0x40,0);
    fn_828EA2D8(0xffffffff831599fc,param_1 + 0x58,8);
  }
  return;
}

