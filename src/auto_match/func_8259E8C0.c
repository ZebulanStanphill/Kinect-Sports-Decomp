extern int fn_82543BE0();
extern int fn_82543C70();
extern int fn_8263CBB0();
extern unsigned int lbl_8326F48C;


void fn_8259E8C0(int param_1,unsigned int *param_2,__int64 param_3,int *param_4,int param_5,
                  unsigned int *param_6)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned short *puVar7;
  
  uVar1 = *param_2;
  iVar2 = *param_4;
  puVar7 = (unsigned short *)(param_4 + 3);
  lVar6 = 0x14;
  do {
    iVar3 = *(int *)(puVar7 + -4);
    if (iVar3 == 1) {
      uVar5 = 0;
      iVar3 = *(int *)(puVar7 + -2);
      if (iVar3 == 7) {
        uVar5 = (unsigned __int64)param_6[1];
      }
      else if (iVar3 == 8) {
        uVar5 = (unsigned __int64)param_6[2];
      }
      else if (iVar3 == 9) {
        uVar5 = (unsigned __int64)param_6[3];
      }
      else if (iVar3 == 10) {
        uVar5 = (unsigned __int64)param_6[4];
      }
      else if (iVar3 == 0xc) {
        uVar5 = (unsigned __int64)*param_6;
      }
      uVar4 = (unsigned __int64)puVar7[1];
      if (uVar4 == 0xffff) {
        uVar4 = (unsigned __int64)*(unsigned char *)(iVar3 * 5 + iVar2 + -0x7cd90818);
      }
                    /* WARNING: Subroutine does not return */
      fn_8263CBB0(uVar1,uVar4,
                        ((param_3 * 0x12 + (unsigned __int64)*puVar7 & 0xfffffff) * 0x10 +
                        (-(unsigned __int64)(uVar5 < *(unsigned int *)((unsigned int)*puVar7 * 0x2c + param_5 + 0x20)) &
                        uVar5)) * 0x34 + (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x2100,
                        0x8000000000000000 >> (uVar4 + 0x20 & 0x7f));
    }
    if (iVar3 == 2) {
      fn_82543BE0(param_2,*(unsigned char *)(*(int *)(puVar7 + -2) * 5 + iVar2 + -0x7cd908a8),
                        puVar7,1);
    }
    else if (iVar3 == 3) {
      fn_82543C70(param_2,(&lbl_8326F48C)[*(int *)(puVar7 + -2)],puVar7,1);
    }
    lVar6 = lVar6 + -1;
    puVar7 = puVar7 + 0xc;
  } while (lVar6 != 0);
  return;
}

