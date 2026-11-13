extern char cRam83214569;
extern char cRam8321456a;
extern int fn_828F02F8();
extern int fn_828F9A60();
extern int fn_82A1F2B8();
extern int fn_82A1F4F8();
extern int fn_82F691F0();
extern unsigned int lbl_821BBC6C;
extern unsigned int lbl_821BBC74;
extern unsigned int uStack_80;


__int64 fn_828F0618(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                      int *param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int *piVar1;
  int iVar5;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  int *piStack_84;
  unsigned int uStack_80;
  unsigned char *apuStack_7c [31];
  
  if (cRam8321456a == '\0') {
    iVar5 = fn_82A1F4F8(0xffffffff82027af8);
    if (iVar5 != -1) {
      cRam83214569 = '\x01';
      fn_82A1F2B8(0xffffffff82027aa0);
    }
    cRam8321456a = '\x01';
  }
  lVar2 = fn_828F02F8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((((-1 < lVar2) && (cRam83214569 != '\0')) && ((param_4 & 0x2000000) == 0)) &&
     ((((param_4 & 0x100000) == 0 && (param_5 != (int *)0x0)) && (*param_5 != 0)))) {
    piStack_90 = (int *)0x0;
    piStack_8c = (int *)0x0;
    piStack_88 = (int *)0x0;
    piStack_84 = (int *)0x0;
    if (*(char *)*param_3 == 'v') {
      apuStack_7c[0] = &lbl_821BBC6C;
    }
    else {
      apuStack_7c[0] = &lbl_821BBC74;
    }
    iVar5 = fn_828F02F8(param_1,param_2,apuStack_7c,param_4 | 0x100000,&piStack_88,&piStack_8c,
                          &piStack_84,param_8);
    piVar1 = piStack_8c;
    if (-1 < iVar5) {
      iVar5 = fn_828F9A60(0x10000,&piStack_90);
      if (-1 < iVar5) {
        uStack_80 = 0;
        uVar3 = (**(int (***)())(*piStack_90 + 0x10))();
        uVar4 = (**(int (***)())(*piStack_90 + 0xc))(piStack_90);
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar4,0,uVar3);
      }
      if (piStack_8c != (int *)0x0) {
        (**(int (***)())(*piStack_8c + 8))();
        piStack_8c = (int *)0x0;
      }
      piVar1 = piStack_84;
      if (piStack_88 != (int *)0x0) {
        (**(int (***)())(*piStack_88 + 8))();
        piVar1 = piStack_84;
      }
    }
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 8))();
    }
  }
  return lVar2;
}

