typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8267BE38();
extern int fn_82681728();
extern int fn_8268B330();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_8269E088();
extern int fn_826CD5E8();
extern int fn_826F6FA8();
extern int fn_82711878();
extern unsigned int iStack_7c;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;
extern unsigned __int64 storeWordConditionalIndexed();


int * fn_82711A18(int *param_1,unsigned __int64 param_2,int *param_3,int *param_4,int *param_5)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  char cVar7;
  int iVar6;
  __int64 lVar4;
  unsigned __int64 uVar5;
  char cVar8;
  unsigned int *puVar9;
  int *piVar10;
  char in_RESERVE;
  unsigned char bVar11;
  unsigned int uStack_80;
  int iStack_7c;
  int aiStack_78 [2];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  double dStack_68;
  unsigned char auStack_60 [96];
  
  aiStack_78[0] = 0;
  bVar3 = false;
  cVar7 = (**(int (***)())(*param_1 + 0x48))();
  if (cVar7 == '\0') {
    return param_4;
  }
  if ((param_4 != (int *)0x0) && (iVar6 = (**(int (***)())(*param_4 + 0x9c))(param_4), iVar6 == 4)) {
    lVar4 = (**(int (***)())(*param_4 + 0x19c))(param_4);
    uStack_70 = 0;
    uStack_6c = 0;
    if (lVar4 != 0) {
      cVar7 = (**(int (***)())(**(int **)param_1[3] + 0x44))
                        (*(int **)param_1[3],&uStack_70,0xffffffff8200ea00);
      if (cVar7 == '\0') {
        fn_82273CD8(&uStack_70,3);
        dStack_68 = lbl_82005710;
      }
      uVar5 = fn_826F6FA8(*(unsigned int *)param_1[3],9999);
      if (((uVar5 & 0xffffffff) != 0) && (dStack_68 == lbl_82002C40)) {
        fn_826CD5E8(uVar5,lVar4);
      }
    }
    fn_82273C88(&uStack_70);
  }
  if ((param_3 == (int *)0x0) || (iVar6 = (**(int (***)())(*param_3 + 0x9c))(param_3), iVar6 != 4)) {
LAB_82711e98:
    if ((param_4 != (int *)0x0) && (iVar6 = (**(int (***)())(*param_4 + 0x9c))(param_4), iVar6 == 4)) {
      cVar7 = (**(int (***)())(*param_4 + 0x170))(param_4);
      cVar8 = '\x01';
      if (cVar7 != '\0') goto LAB_82711ee0;
    }
  }
  else {
    if (param_4 != (int *)0x0) {
      (**(int (***)())(*param_4 + 0x9c))(param_4);
      fn_82711878(param_1);
      goto LAB_82711e98;
    }
    if (param_5 != (int *)0x0) {
      fn_8268B330(&uStack_80);
      fn_8269E088(param_5,&uStack_80);
      cVar7 = (**(int (***)())(*param_1 + 0x54))(param_1,((unsigned __int64)uStack_80 & 0xfffffffc) + 8);
      if (cVar7 != '\0') {
        lVar4 = ((unsigned __int64)uStack_80 & 0xfffffffc) + 4;
        bVar3 = false;
        do {
          puVar9 = (unsigned int *)lVar4;
          uVar5 = (unsigned __int64)*puVar9;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar4);
            *puVar9 = uVar1;
            bVar3 = true;
          }
        } while (!bVar3);
LAB_82711bc0:
        if (uVar5 != 1) {
          return param_3;
        }
        fn_8267BE38();
        return param_3;
      }
      auStack_60[0] = 0;
      do {
        iVar6 = (**(int (***)())(*param_5 + 0x5c))(param_5);
        fn_82681728(aiStack_78,(unsigned __int64)*(unsigned int *)(iVar6 + 0x78) + 0x254,0xffffffff8200ea28);
        lVar4 = (**(int (***)())(*param_5 + 0x5c))(param_5);
        piVar10 = param_5 + 0x1a;
        cVar7 = (**(int (***)())(param_5[0x1a] + 0x2c))(piVar10,lVar4 + 0x78,aiStack_78,auStack_60);
        if (cVar7 == '\0') {
          bVar3 = true;
          iVar6 = (**(int (***)())(*param_5 + 0x5c))(param_5);
          fn_82681728(&iStack_7c,(unsigned __int64)*(unsigned int *)(iVar6 + 0x78) + 0x254,0xffffffff8200ea38
                           );
          lVar4 = (**(int (***)())(*param_5 + 0x5c))(param_5);
          cVar7 = (**(int (***)())(*piVar10 + 0x2c))(piVar10,lVar4 + 0x78,&iStack_7c,auStack_60);
          bVar2 = false;
          if (cVar7 != '\0') goto LAB_82711cc8;
        }
        else {
LAB_82711cc8:
          bVar2 = true;
        }
        if (bVar3) {
          lVar4 = (unsigned __int64)*(unsigned int *)(iStack_7c + 8) - 1;
          *(int *)(iStack_7c + 8) = (int)lVar4;
          bVar3 = false;
          if (lVar4 == 0) {
            fn_826944C8(iStack_7c);
            bVar3 = false;
          }
        }
        lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_78[0] + 8) - 1;
        *(int *)(aiStack_78[0] + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8(aiStack_78[0]);
        }
        bVar11 = !bVar2 << 1;
        if (bVar2) {
          fn_82696330(auStack_60);
          lVar4 = ((unsigned __int64)uStack_80 & 0xfffffffc) + 4;
          do {
            puVar9 = (unsigned int *)lVar4;
            uVar5 = (unsigned __int64)*puVar9;
            if (in_RESERVE != '\0') {
              uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar4);
              *puVar9 = uVar1;
              bVar11 = 2;
            }
          } while (!(bool)(bVar11 >> 1 & 1));
          goto LAB_82711bc0;
        }
        param_5 = (int *)param_5[8];
      } while (param_5 != (int *)0x0);
      cVar7 = (**(int (***)())(*param_1 + 0x58))(param_1,((unsigned __int64)uStack_80 & 0xfffffffc) + 8);
      bVar11 = (cVar7 == '\0') << 1;
      if (cVar7 != '\0') {
        fn_82696330(auStack_60);
        lVar4 = ((unsigned __int64)uStack_80 & 0xfffffffc) + 4;
        do {
          puVar9 = (unsigned int *)lVar4;
          uVar5 = (unsigned __int64)*puVar9;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar4);
            *puVar9 = uVar1;
            bVar11 = 2;
          }
        } while (!(bool)(bVar11 >> 1 & 1));
        goto LAB_82711bc0;
      }
      cVar7 = (**(int (***)())(*param_1 + 0x5c))(param_1,((unsigned __int64)uStack_80 & 0xfffffffc) + 8);
      bVar11 = (cVar7 == '\0') << 1;
      if (cVar7 != '\0') {
        fn_82696330(auStack_60);
        lVar4 = ((unsigned __int64)uStack_80 & 0xfffffffc) + 4;
        do {
          puVar9 = (unsigned int *)lVar4;
          uVar5 = (unsigned __int64)*puVar9;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar4);
            *puVar9 = uVar1;
            bVar11 = 2;
          }
        } while (!(bool)(bVar11 >> 1 & 1));
        goto LAB_82711bc0;
      }
      fn_82696330(auStack_60);
      lVar4 = ((unsigned __int64)uStack_80 & 0xfffffffc) + 4;
      do {
        puVar9 = (unsigned int *)lVar4;
        uVar5 = (unsigned __int64)*puVar9;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar4);
          *puVar9 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if (uVar5 == 1) {
        fn_8267BE38();
      }
    }
    fn_82711878(param_1);
  }
  cVar8 = '\0';
LAB_82711ee0:
  cVar7 = *(char *)(param_1[3] + 0x14);
  if (cVar7 == cVar8) {
    *(bool *)(param_1[3] + 0x14) = cVar7 == '\0';
    (**(int (***)())(*param_1 + 0x7c))(param_1);
  }
  return param_4;
}

