extern unsigned int *auStack_70;
extern int fn_82E3BCC8();
extern int fn_82E3C590();
extern int fn_82E5C778();
extern int fn_82E5C7D8();
extern int fn_82E62670();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


__int64 fn_82E3D570(int param_1,int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  __int64 lVar4;
  int iVar5;
  int *piVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned __int64 uVar9;
  unsigned short auStack_70 [2];
  int *piStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  if (param_2 == (int *)0x0) {
    lVar4 = -0x7ff8ffa9;
  }
  else {
    piStack_6c = (int *)0x0;
    fn_82E3BCC8(param_1 + 0x78,0);
    *(unsigned int *)(param_1 + 0xb8) = 0;
    uStack_68 = 0;
    lVar4 = (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82154b18,&uStack_68);
    piVar6 = piStack_6c;
    if ((-1 < lVar4) && (uVar9 = 0, uStack_68 != 0)) {
      do {
        lVar4 = (**(int (***)())(*param_2 + 0x10))(param_2,0xffffffff82154b18,uVar9,&piStack_6c);
        piVar3 = piStack_6c;
        piVar6 = piStack_6c;
        if (lVar4 < 0) break;
        uStack_64 = 0;
        lVar4 = fn_82E62670(piStack_6c,&uStack_64);
        piVar6 = piStack_6c;
        if (lVar4 < 0) break;
        uStack_60 = lbl_8202E618;
        uStack_5c = lbl_8202E61C;
        uStack_58 = lbl_8202E620;
        uStack_54 = lbl_8202E624;
        lVar4 = fn_82E5C778(piVar3,&uStack_60);
        piVar6 = piStack_6c;
        if (lVar4 < 0) break;
        auStack_70[0] = 0;
        lVar4 = fn_82E5C7D8(piVar3,auStack_70);
        piVar6 = piStack_6c;
        if (lVar4 < 0) break;
        if (piStack_6c != (int *)0x0) {
          (**(int (***)())(*piStack_6c + 8))();
          piStack_6c = (int *)0x0;
        }
        piVar6 = (int *)0x0;
        if ((uStack_64 & 0x80000000) == 0) {
          pbVar7 = (unsigned char *)&uStack_60;
          pbVar8 = &lbl_820F8EB8;
          do {
            bVar1 = *pbVar8;
            bVar2 = *pbVar7;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar8 != &lbl_820F8EC8);
          if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
             (iVar5 = fn_82E3C590(param_1 + 0x78,auStack_70[0],0), piVar6 = piStack_6c, iVar5 == 0
             )) {
            lVar4 = -0x7ff8fff2;
            break;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 0xffffffff) < (unsigned __int64)uStack_68);
    }
    if (piVar6 != (int *)0x0) {
      (**(int (***)())(*piVar6 + 8))();
    }
  }
  return lVar4;
}

