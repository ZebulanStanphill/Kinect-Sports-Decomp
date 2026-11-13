extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CFD5A8();
extern int fn_82CFD778();


int fn_82E19FD8(int param_1,unsigned int param_2,int param_3)

{
  int uVar1;
  int iVar3;
  int uVar2;
  int uVar4;
  int lVar5;
  
  uVar1 = 0xffffffffffffffff;
  switch(param_2) {
  case 0:
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
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x18:
  case 0x1f:
  case 0x20:
    uVar1 = fn_82CFD778(param_1);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x21:
    uVar1 = param_3;
    break;
  case 0x13:
    uVar1 = fn_82E19FD8(param_1,*(unsigned char *)(param_1 + 0xd),param_3);
    break;
  case 0x19: {
    int maxval;
    maxval = 1;
    uVar4 = fn_82CFD5A8(param_1);
    lVar5 = 0;
    iVar3 = fn_82CEAE80(uVar4);
    if (0 < iVar3) {
      do {
        iVar3 = fn_82CEAEA8(uVar4,lVar5);
        uVar2 = fn_82E19FD8(iVar3,*(unsigned char *)(iVar3 + 0xc),param_3);
        if (uVar2 > maxval) {
          maxval = uVar2;
        }
        lVar5 = lVar5 + 1;
        iVar3 = fn_82CEAE80(uVar4);
      } while ((int)lVar5 < iVar3);
    }    uVar1=maxval;
    break;
  }
  }

  { int alignment=*(short *)(param_1+0x10) & 0x180;
    if(alignment != 0) {
     if(alignment==0x100) alignment=16; else alignment=8;
     if(alignment > uVar1) uVar1=alignment;
    }
  }
  return uVar1;
}
