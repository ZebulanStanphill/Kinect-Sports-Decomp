extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_90;
extern int fn_82E3C590();
extern int fn_82E41928();
extern int fn_82E41C58();
extern int fn_82E42120();
extern int fn_82E423A0();
extern int fn_82E50330();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E59440();
extern int fn_82E619C8();
extern int fn_82E74768();
extern int fn_82E78410();
extern unsigned int uStack_58;


/* WARNING: Removing unreachable block (ram,0x82e427b4) */
/* WARNING: Removing unreachable block (ram,0x82e42804) */
/* WARNING: Removing unreachable block (ram,0x82e42810) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82E426B0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned short auStack_90;
  int *piStack_8c;
  int *piStack_88;
  int *piStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  unsigned int auStack_6c [3];
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  
  fn_82E50CB8(param_1 + 0x10);
  if (param_2 == (int *)0x0) {
    lVar8 = -0x7ff8ffa9;
    goto LAB_82e426e0;
  }
  piStack_7c = (int *)0x0;
  piStack_8c = (int *)0x0;
  uStack_58 = 0;
  piStack_78 = (int *)0x0;
  piStack_88 = (int *)0x0;
  piStack_84 = (int *)0x0;
  piStack_80 = (int *)0x0;
  piStack_74 = (int *)0x0;
  piStack_70 = (int *)0x0;
  lVar8 = fn_82E423A0(param_1);
  if (lVar8 < 0) {
LAB_82e42af8:
    fn_82E423A0(param_1);
  }
  else {
    iVar4 = (**(int (***)())(*param_2 + 0x24))(param_2,0,&piStack_80);
    if ((-1 < iVar4) && (piStack_80 != (int *)0x0)) {
      fn_82E50330(auStack_60);
      uStack_58 = 0;
      (**(int (***)())(*piStack_80 + 0x14))(piStack_80,0xffffffff82152f8c,auStack_60);
      fn_82E50330(auStack_60);
      uStack_58 = 0;
      (**(int (***)())(*piStack_80 + 0x14))(piStack_80,0xffffffff82152fa0,auStack_60);
    }
    lVar8 = (**(int (***)())*param_2)(param_2,0xffffffff8215ed68,&piStack_7c);
    if (((lVar8 < 0) ||
        (lVar8 = (**(int (***)())(*piStack_7c + 0x28))(piStack_7c,&piStack_8c), lVar8 < 0)) ||
       (lVar8 = fn_82E59440(piStack_8c,0xffffffff821549b8,0xffffffff82154c68,&piStack_78),
       lVar8 < 0)) goto LAB_82e42af8;
    piVar6 = (int *)(param_1 + 0x4c);
    lVar8 = (**(int (***)())(*piStack_78 + 0x38))(piStack_78,piVar6);
    if (((((lVar8 < 0) || (lVar8 = (**(int (***)())(*param_2 + 0x18))(param_2,&piStack_88), lVar8 < 0))
         || ((lVar8 = fn_82E59440(piStack_8c,0xffffffff820ed018,0xffffffff82154c58,&piStack_74
                                       ), lVar8 < 0 ||
             ((lVar8 = (**(int (***)())*piStack_74)(piStack_74,0xffffffff82154c18,&piStack_70),
              lVar8 < 0 || (lVar8 = fn_82E619C8(param_2,piStack_70), lVar8 < 0)))))) ||
        (lVar8 = fn_82E41928(param_1,piStack_8c), lVar8 < 0)) ||
       ((*piVar6 != 0 && (lVar8 = fn_82E78410(*piVar6,piStack_88), lVar8 < 0))))
    goto LAB_82e42af8;
    auStack_6c[0] = 0;
    lVar8 = (**(int (***)())(*piStack_88 + 0x84))(piStack_88,auStack_6c);
    if (lVar8 < 0) goto LAB_82e42af8;
    uVar7 = 0;
    if (auStack_6c[0] != 0) {
      do {
        auStack_90 = 0;
        lVar8 = (**(int (***)())(*piStack_88 + 0x88))(piStack_88,uVar7,&auStack_90,&piStack_84);
        if (lVar8 < 0) goto LAB_82e42af8;
        iVar4 = fn_82E3C590(param_1 + 0x26c,auStack_90,0);
        if (iVar4 == 0) goto LAB_82e42af0;
        uVar3 = fn_82E42120(param_1,auStack_90,param_2);
        lVar8 = fn_82E41C58(param_1,0,piStack_84,uVar3);
        if (lVar8 < 0) goto LAB_82e42af8;
        uVar5 = fn_82E50BE8(8,0,0,0,0);
        *(unsigned int *)((auStack_90 + 0xac) * 4 + param_1) = uVar5;
        if (*(int *)((auStack_90 + 0x1b) * 4 + param_1) == 0) {
          lVar8 = -0x7ff8fff2;
          break;
        }
        puVar1 = *(unsigned int **)((auStack_90 + 0xac) * 4 + param_1);
        *puVar1 = 0;
        puVar1[1] = 0;
        if (piStack_84 != (int *)0x0) {
          (**(int (***)())(*piStack_84 + 8))();
          piStack_84 = (int *)0x0;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffffffff) < (unsigned __int64)auStack_6c[0]);
    }
    if ((int)lVar8 < 0) goto LAB_82e42af8;
    uVar7 = fn_82E50BE8(0x210,0,0,0,0);
    if ((uVar7 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      uVar2 = *(unsigned __int64 *)(param_1 + 0x58) & 0xffffffff;
      iVar4 = fn_82E74768(uVar7,(*(unsigned __int64 *)(param_1 + 0x60) & 0xffffffff) + uVar2,
                              *(unsigned int *)(param_1 + 0x50),uVar2,*piVar6,param_1);
    }
    *(int *)(param_1 + 0x4b0) = iVar4;
    if (iVar4 == 0) {
LAB_82e42af0:
      lVar8 = -0x7ff8fff2;
      goto LAB_82e42af8;
    }
  }
  if (piStack_7c != (int *)0x0) {
    (**(int (***)())(*piStack_7c + 8))();
    piStack_7c = (int *)0x0;
  }
  if (piStack_8c != (int *)0x0) {
    (**(int (***)())(*piStack_8c + 8))();
    piStack_8c = (int *)0x0;
  }
  if (piStack_78 != (int *)0x0) {
    (**(int (***)())(*piStack_78 + 8))();
    piStack_78 = (int *)0x0;
  }
  if (piStack_88 != (int *)0x0) {
    (**(int (***)())(*piStack_88 + 8))();
    piStack_88 = (int *)0x0;
  }
  if (piStack_84 != (int *)0x0) {
    (**(int (***)())(*piStack_84 + 8))();
    piStack_84 = (int *)0x0;
  }
  if (piStack_80 != (int *)0x0) {
    (**(int (***)())(*piStack_80 + 8))();
    piStack_80 = (int *)0x0;
  }
  if (piStack_74 != (int *)0x0) {
    (**(int (***)())(*piStack_74 + 8))();
    piStack_74 = (int *)0x0;
  }
  if (piStack_70 != (int *)0x0) {
    (**(int (***)())(*piStack_70 + 8))();
    piStack_70 = (int *)0x0;
  }
  fn_82E50330(auStack_60);
LAB_82e426e0:
  fn_82E50F10(param_1 + 0x10);
  return lVar8;
}

