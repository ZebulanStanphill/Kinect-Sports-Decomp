extern int fn_82E5A160();
extern int fn_82E5A170();
extern int fn_82E5A180();
extern int fn_82E5A190();
extern int fn_82E5A1A0();
extern int fn_82E5A1B0();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


unsigned __int64 fn_82E5F1F0(int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int aiStack_50;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  if ((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    return 0xffffffff80004003;
  }
  aiStack_50 = 0;
  lVar1 = (**(int (***)())(*param_1 + 0x3c))(param_1,0xffffffff8214c290,&uStack_38,0xc,&aiStack_50);
  uVar4 = 0;
  if ((lVar1 < 0) || (uVar4 = uStack_38, aiStack_50 == 0xc)) {
    iVar3 = (**(int (***)())(*param_1 + 0x3c))(param_1,0xffffffff8214c2a0,&uStack_48,0xc,&aiStack_50);
    if (iVar3 < 0) {
      uStack_48 = uVar4;
      if ((int)lVar1 < 0) {
        return 0xffffffffc00d4654;
      }
    }
    else {
      if (aiStack_50 != 0xc) goto LAB_82e5f254;
      if ((int)lVar1 < 0) {
        uVar4 = uStack_48;
      }
    }
    uVar2 = fn_82E5A190(param_2,uStack_48);
    if ((((-1 < (int)uVar2) && (uVar2 = fn_82E5A160(param_2,uVar4), -1 < (int)uVar2)) &&
        (uVar2 = fn_82E5A1A0(param_2,uStack_44), -1 < (int)uVar2)) &&
       ((uVar2 = fn_82E5A170(param_2,uStack_34), -1 < (int)uVar2 &&
        (uVar2 = fn_82E5A1B0(param_2,uStack_40), -1 < (int)uVar2)))) {
      uVar2 = fn_82E5A180(param_2,uStack_30);
    }
  }
  else {
LAB_82e5f254:
    uVar2 = 0xffffffffc00d36bb;
  }
  return uVar2;
}

