extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82E4FE40();
extern int fn_82E51DE8();
extern unsigned int uStack_48;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


__int64 fn_82E520C8(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned char *puStack_60;
  unsigned char *puStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char auStack_50 [4];
  unsigned char auStack_4c [4];
  unsigned int uStack_48;
  
  puStack_60 = (unsigned char *)0x0;
  uStack_58 = 0;
  puStack_5c = (unsigned char *)0x0;
  uStack_54 = 0;
  lVar6 = 0;
  iVar1 = (**(int (***)())(*param_1 + 0x40))(param_1,0xffffffff8214c290,&puStack_60,&uStack_58);
  uVar5 = 0xffffffff8214c2a0;
  iVar2 = (**(int (***)())(*param_1 + 0x40))(param_1,0xffffffff8214c2a0,&puStack_5c,&uStack_54);
  if (iVar1 == 0) {
    puVar3 = puStack_60;
    uVar4 = uStack_58;
    if (iVar2 == 0) goto LAB_82e521e8;
  }
  else if (iVar2 == 0) {
    uVar5 = 0xffffffff8214c290;
    puVar3 = puStack_5c;
    uVar4 = uStack_54;
  }
  else {
    uStack_48 = 0;
    lVar6 = fn_82E51DE8(param_1,param_1[0x18],auStack_50,auStack_4c);
    if ((lVar6 < 0) ||
       (lVar6 = (**(int (***)())(*param_1 + 0x68))(param_1,0xffffffff8214c290,auStack_50,0xc), lVar6 < 0
       )) goto LAB_82e521e8;
    uVar4 = 0xc;
    puVar3 = auStack_50;
  }
  lVar6 = (**(int (***)())(*param_1 + 0x68))(param_1,uVar5,puVar3,uVar4);
LAB_82e521e8:
  fn_82E4FE40(puStack_60);
  puStack_60 = (unsigned char *)0x0;
  fn_82E4FE40(puStack_5c);
  return lVar6;
}

