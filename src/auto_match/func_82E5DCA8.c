extern unsigned int *auStack_60;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EE4D00();
extern int fn_82EE4D48();
extern int fn_82EE53B8();
extern unsigned int lbl_82153858;
extern unsigned int lbl_82153868;
extern unsigned int lbl_82153878;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82E5DCA8(int *param_1,int *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  __int64 lVar4;
  unsigned short *puVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned int uVar8;
  unsigned short *puVar9;
  unsigned int uStack_70;
  int *piStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [16];
  unsigned char abStack_50 [80];
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (unsigned int *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  puVar5 = (unsigned short *)0x0;
  piStack_6c = (int *)0x0;
  uStack_70 = 0;
  lVar4 = (**(int (***)())(*param_1 + 0xc))(param_1,abStack_50);
  if (-1 < lVar4) {
    pbVar6 = abStack_50;
    pbVar7 = (unsigned char *)&lbl_82153858;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_82153868);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      pbVar6 = abStack_50;
      pbVar7 = &lbl_82153868;
      do {
        if (*pbVar7 != *pbVar6) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != &lbl_82153878);
    }
    lVar4 = (**(int (***)())(*param_2 + 0x1c))(param_2,0xffffffff82154978,&piStack_6c);
    piVar3 = piStack_6c;
    if (((-1 < lVar4) && (lVar4 = fn_82EE4D00(piStack_6c,auStack_60), -1 < lVar4)) &&
       ((lVar4 = (**(int (***)())(*param_1 + 0x14))(param_1,&uStack_64,&uStack_68), -1 < lVar4 &&
        ((lVar4 = fn_82EE4D48(piVar3,uStack_64,uStack_68), -1 < lVar4 &&
         (lVar4 = (**(int (***)())(*param_1 + 0x1c))(param_1,0,&uStack_70), -1 < lVar4)))))) {
      lVar4 = ((unsigned __int64)uStack_70 & 0x7fffffff) << 1;
      if (0x7fffffff < uStack_70) {
        lVar4 = -1;
      }
      puVar5 = (unsigned short *)fn_82E50BE8(lVar4,0,0,0,0);
      if (puVar5 == (unsigned short *)0x0) {
        lVar4 = -0x7ff8fff2;
      }
      else {
        lVar4 = (**(int (***)())(*param_1 + 0x1c))(param_1,puVar5,&uStack_70);
        if (-1 < lVar4) {
          uVar8 = 0;
          puVar9 = puVar5;
          if (uStack_70 != 0) {
            do {
              lVar4 = fn_82EE53B8(piVar3,*puVar9);
              if (lVar4 < 0) goto LAB_82e5df70;
              uVar8 = uVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 < uStack_70);
          }
          *param_3 = piStack_6c;
          if (piStack_6c == (int *)0x0) goto LAB_82e5df90;
          (**(int (***)())(*piStack_6c + 4))();
        }
      }
    }
  }
LAB_82e5df70:
  if (piStack_6c != (int *)0x0) {
    (**(int (***)())(*piStack_6c + 8))();
    piStack_6c = (int *)0x0;
  }
LAB_82e5df90:
  if (puVar5 != (unsigned short *)0x0) {
    fn_82E4FE40(puVar5);
  }
  return lVar4;
}

