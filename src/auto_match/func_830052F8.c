extern int fn_82FFF670();
extern int fn_830176A0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


unsigned __int64
fn_830052F8(double param_1,int *param_2,unsigned __int64 param_3,unsigned int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  char cVar1;
  unsigned __int64 uVar2;
  double dVar3;
  
  uVar2 = 1;
  switch(param_4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0x1d:
  case 0x1e:
    dVar3 = (double)fn_830176A0(lbl_832642FC,param_3,param_7);
    (**(int (***)())(*param_2 + 0x3c))((double)(float)(param_1 - dVar3),param_2,param_4);
    uVar2 = 1;
    break;
  default:
    uVar2 = 2;
    break;
  case 8:
    cVar1 = (**(int (***)())(*param_2 + 0x90))(param_2);
    if ((cVar1 != '\0') || (param_2[4] == 0)) {
      fn_82FFF670(param_1,param_2);
      uVar2 = 1;
    }
    break;
  case 9:
    if (((*(unsigned char *)((int)param_2 + 0x3d) & 0x20) != 0) || (param_2[4] == 0)) {
      (**(int (***)())(*param_2 + 0xe0))(param_2,(__int64)param_1 & 0xffff,param_7,param_8,1);
      uVar2 = 1;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x14:
  case 0x15:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
    (**(int (***)())(*param_2 + 0x48))(param_1,param_2,param_3,param_4,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x18:
    (**(int (***)())(*param_2 + 0x54))(param_2,param_1 != (double)lbl_821AAD20,1,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x19:
    (**(int (***)())(*param_2 + 0x54))
              (param_2,(unsigned __int64)(param_1 != (double)lbl_821AAD20) << 1,2,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x1a:
    (**(int (***)())(*param_2 + 0x54))
              (param_2,(unsigned __int64)(param_1 != (double)lbl_821AAD20) << 2,4,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x1b:
    (**(int (***)())(*param_2 + 0x54))
              (param_2,(unsigned __int64)(param_1 != (double)lbl_821AAD20) << 3,8,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x1c:
    (**(int (***)())(*param_2 + 0x54))
              (param_2,(unsigned __int64)(param_1 != (double)lbl_821AAD20) << 4,0x10,param_7,param_8);
    uVar2 = 1;
  }
  return uVar2;
}

