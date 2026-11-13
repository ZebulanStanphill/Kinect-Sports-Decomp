typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_8269D300();
extern int fn_8269EA50();
extern int fn_826A76D0();
extern int fn_826C91B0();
extern int fn_82700248();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_826CCBA8(int *param_1,int *param_2)

{
  unsigned char bVar1;
  bool bVar2;
  bool bVar3;
  char cVar6;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar7;
  int aiStack_60 [4];
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if ((*(unsigned char *)(param_1 + 0x73) & 0x40) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1[0x27];
  }
  if (iVar5 != 0) {
    bVar1 = *(unsigned char *)(iVar5 + 0x34);
    if ((bVar1 & 7) != 0) {
      iVar5 = *param_2;
      if (iVar5 == 0x400) {
        if ((bVar1 & 2) != 0) {
          uVar7 = 0xffffffff8200bf6c;
          goto LAB_826ccc5c;
        }
      }
      else {
        if (iVar5 != 0x800) {
          if (iVar5 == 0x1000) {
LAB_826ccc38:
            if ((bVar1 & 1) != 0) {
              uVar7 = 0xffffffff8200bf74;
              goto LAB_826ccc5c;
            }
            goto LAB_826ccc68;
          }
          if (iVar5 != 0x2000) {
            if (iVar5 == 0x4000) goto LAB_826ccc38;
            if (iVar5 != 0x10000) goto LAB_826ccc68;
          }
        }
        if ((bVar1 & 4) != 0) {
          uVar7 = 0xffffffff8200bf78;
LAB_826ccc5c:
          fn_826C91B0(param_1,uVar7,0);
        }
      }
    }
  }
LAB_826ccc68:
  cVar6 = fn_8269EA50(param_1,param_2);
  if (cVar6 == '\0') {
    lVar4 = (**(int (***)())(*param_1 + 0x5c))(param_1);
    fn_826A76D0(aiStack_60,param_2,lVar4 + 0x78);
    if (*(int *)(aiStack_60[0] + 0x10) != 0) {
      iVar5 = param_1[0x6c];
      bVar3 = false;
      auStack_50[0] = 0;
      if (iVar5 == 0) {
        iVar5 = param_1[0x1b];
      }
      if (iVar5 != 0) {
        cVar6 = (**(int (***)())(*(int *)(iVar5 + 0x10) + 0x2c))
                          (iVar5 + 0x10,param_1 + 0x52,aiStack_60,auStack_50);
        if (cVar6 != '\0') {
          bVar3 = true;
        }
      }
      if ((*param_2 == 0x40) || (*param_2 == 0x80)) {
        if (5 < *(unsigned char *)(param_1 + 0x53)) {
          iVar5 = (**(int (***)())(*param_1 + 0x40))(param_1);
          cVar6 = fn_8269D300(iVar5,param_1);
          if (cVar6 == '\0') {
LAB_826ccd54:
            bVar2 = false;
          }
          else {
            bVar2 = true;
            if ((*(unsigned short *)(iVar5 + 0xb00) & 1) == 0) goto LAB_826ccd54;
          }
          if (bVar2) goto LAB_826ccd64;
        }
        bVar3 = false;
      }
LAB_826ccd64:
      if (bVar3) {
        fn_82696330(auStack_50);
        lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_60[0] + 8) - 1;
        *(int *)(aiStack_60[0] + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8(aiStack_60[0]);
        }
        goto LAB_826ccd90;
      }
      fn_82696330(auStack_50);
    }
    lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_60[0] + 8) - 1;
    *(int *)(aiStack_60[0] + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(aiStack_60[0]);
    }
    uVar7 = 0;
  }
  else {
LAB_826ccd90:
    lVar4 = (**(int (***)())(*param_1 + 0x40))(param_1);
    iVar5 = fn_82700248(lVar4 + 0xa2c,4);
    if (iVar5 != 0) {
      iStack_3c = param_2[1];
      iStack_38 = param_2[2];
      iStack_34 = param_2[3];
      *(unsigned int *)(iVar5 + 4) = 2;
      param_1[1] = param_1[1] + 1;
      if (*(int *)(iVar5 + 8) != 0) {
        fn_8267C498();
      }
      *(int **)(iVar5 + 8) = param_1;
      if (*(int *)(iVar5 + 0xc) != 0) {
        fn_8267C498();
      }
      *(unsigned int *)(iVar5 + 0xc) = 0;
      *(unsigned int *)(iVar5 + 0x10) = uStack_40;
      *(int *)(iVar5 + 0x14) = iStack_3c;
      *(int *)(iVar5 + 0x18) = iStack_38;
      *(int *)(iVar5 + 0x1c) = iStack_34;
    }
    uVar7 = 1;
  }
  return uVar7;
}

