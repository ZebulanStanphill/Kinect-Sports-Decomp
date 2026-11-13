extern int fn_8265C940();
extern int fn_82BD81E0();
extern int fn_82BD88F8();
extern unsigned int lbl_820E86E0;
extern unsigned int lbl_820E86E8;


__int64 fn_82BD8E30(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  int iVar7;
  __int64 lVar8;
  
  piVar3 = (int *)fn_8265C940(0x1a0,0x618a8013);
  if (piVar3 == (int *)0x0) {
LAB_82bd8e60:
    lVar8 = -0x7ff8fff2;
  }
  else {
    piVar3[0x67] = param_1;
    piVar3[0x10] = 0;
    uVar2 = lbl_820E86E8;
    uVar1 = lbl_820E86E0;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0xf0;
    piVar3[10] = 0;
    piVar3[0xb] = 0xf0;
    *(unsigned __int64 *)(piVar3 + 0x48) = uVar2;
    piVar3[2] = 0x1c;
    *(unsigned __int64 *)(piVar3 + 0x46) = uVar1;
    *(unsigned short *)(piVar3 + 0x11) = 0xc;
    *(unsigned short *)(piVar3 + 0x12) = 4;
    piVar6 = piVar3 + 0x12;
    *(unsigned short *)((int)piVar3 + 0x46) = 0x1c;
    lVar8 = 0x19;
    piVar3[0x5f] = 10;
    piVar3[0x51] = 1;
    do {
      piVar6 = piVar6 + 2;
      *(unsigned __int64 *)piVar6 = *(unsigned __int64 *)(piVar3 + 0x46);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar8 = fn_82BD81E0((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x18) + 2,0x20,piVar3[2],0
                          ,piVar3);
    if (-1 < lVar8) {
      iVar4 = fn_8265C940(piVar3[2] << 3,0x618a0003);
      piVar3[1] = iVar4;
      if (iVar4 != 0) {
        uVar5 = 0;
        if (piVar3[2] != 0) {
          iVar4 = 0;
          do {
            *(unsigned int *)(piVar3[1] + iVar4) = *(int *)(*piVar3 + 8) * uVar5 + *(int *)(*piVar3 + 4);
            iVar7 = piVar3[1] + iVar4;
            *(unsigned int *)(iVar7 + 4) = 0;
            if (piVar3[0x61] == 0) {
              piVar3[0x60] = iVar7;
            }
            else {
              *(int *)(piVar3[0x61] + 4) = iVar7;
            }
            uVar5 = uVar5 + 1;
            piVar3[0x61] = iVar7;
            iVar4 = iVar4 + 8;
          } while (uVar5 < (unsigned int)piVar3[2]);
        }
        goto LAB_82bd8e74;
      }
      goto LAB_82bd8e60;
    }
  }
  fn_82BD88F8(piVar3);
  piVar3 = (int *)0x0;
LAB_82bd8e74:
  *param_2 = piVar3;
  return lVar8;
}

