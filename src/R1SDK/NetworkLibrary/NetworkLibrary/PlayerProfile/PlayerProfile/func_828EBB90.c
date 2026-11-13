#define true 1
extern unsigned int *auStack_70;
extern int fn_825089A0();
extern int fn_8251C390();
extern int fn_828EA790();
extern int fn_828EAFD8();
extern int fn_828EB300();
extern int fn_829E53B0();
extern int fn_82F63EC8();
extern unsigned int lbl_8321451C;
extern unsigned int lbl_83214528;
extern unsigned int lbl_83214544;
extern unsigned int lbl_83214550;
extern unsigned int uRam83214520;
extern unsigned int uRam83214548;


int fn_828EBB90(unsigned __int64 param_1,__int64 *param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned int uVar9;
  int aiStack_80 [4];
  unsigned char auStack_70 [112];
  
  iVar5 = fn_828EB300();
  aiStack_80[0] = **(int **)(iVar5 + 4);
  uVar9 = lbl_83214528;
  do {
    iVar5 = aiStack_80[0];
    if ((uVar9 & 1) == 0) {
      lbl_83214528 = uVar9 | 1;
      uRam83214520 = 0;
      piVar6 = (int *)fn_825089A0();
      lbl_8321451C = (**(int (***)())(*piVar6 + 0x24))(piVar6,0x18,0);
      *(int *)lbl_8321451C = lbl_8321451C;
      *(int *)(lbl_8321451C + 4) = lbl_8321451C;
      *(int *)(lbl_8321451C + 8) = lbl_8321451C;
      *(unsigned char *)(lbl_8321451C + 0x14) = 1;
      *(unsigned char *)(lbl_8321451C + 0x15) = 1;
      fn_82F63EC8(0xffffffff83141900);
      uVar9 = lbl_83214528;
    }
    if (iVar5 == lbl_8321451C) {
      fn_8251C390(auStack_70,0xffffffff82027528,0x499);
      piVar6 = (int *)fn_825089A0();
      iVar5 = (**(int (***)())(*piVar6 + 0x3c))
                        (piVar6,0,0,param_3,*param_2,*(unsigned __int64 *)param_4,
                         *(unsigned __int64 *)(param_4 + 8),*(unsigned __int64 *)(param_4 + 0x10));
      if ((lbl_83214528 & 1) == 0) {
        lbl_83214528 = lbl_83214528 | 1;
        uRam83214520 = 0;
        piVar6 = (int *)fn_825089A0();
        lbl_8321451C = (**(int (***)())(*piVar6 + 0x24))(piVar6,0x18,0);
        *(int *)lbl_8321451C = lbl_8321451C;
        *(int *)(lbl_8321451C + 4) = lbl_8321451C;
        *(int *)(lbl_8321451C + 8) = lbl_8321451C;
        *(unsigned char *)(lbl_8321451C + 0x14) = 1;
        *(unsigned char *)(lbl_8321451C + 0x15) = 1;
        fn_82F63EC8(0xffffffff83141900);
      }
      iVar3 = *(int *)(iVar5 + 0x54);
      piVar6 = (int *)fn_825089A0();
      piVar6 = (int *)(**(int (***)())(*piVar6 + 0x24))(piVar6,0x18,0);
      *piVar6 = lbl_8321451C;
      piVar6[1] = lbl_8321451C;
      iVar4 = lbl_8321451C;
      *(unsigned char *)(piVar6 + 5) = 0;
      *(unsigned char *)((int)piVar6 + 0x15) = 0;
      piVar6[2] = iVar4;
      if (piVar6 + 3 != (int *)0x0) {
        piVar6[3] = iVar3;
        piVar6[4] = iVar5;
      }
      fn_828EAFD8(aiStack_80,0xffffffff83214518,piVar6,0);
      if ((lbl_83214550 & 1) == 0) {
        lbl_83214550 = lbl_83214550 | 1;
        uRam83214548 = 0;
        piVar6 = (int *)fn_825089A0();
        lbl_83214544 = (**(int (***)())(*piVar6 + 0x24))(piVar6,0x18,0);
        *(int *)lbl_83214544 = lbl_83214544;
        *(int *)(lbl_83214544 + 4) = lbl_83214544;
        *(int *)(lbl_83214544 + 8) = lbl_83214544;
        *(unsigned char *)(lbl_83214544 + 0x14) = 1;
        *(unsigned char *)(lbl_83214544 + 0x15) = 1;
        fn_82F63EC8(0xffffffff831419c0);
      }
      iVar3 = *(int *)(iVar5 + 0x54);
      piVar6 = (int *)fn_825089A0();
      piVar6 = (int *)(**(int (***)())(*piVar6 + 0x24))(piVar6,0x18,0);
      *piVar6 = lbl_83214544;
      piVar6[1] = lbl_83214544;
      iVar4 = lbl_83214544;
      *(unsigned char *)(piVar6 + 5) = 0;
      *(unsigned char *)((int)piVar6 + 0x15) = 0;
      piVar6[2] = iVar4;
      if (piVar6 + 3 != (int *)0x0) {
        piVar6[3] = iVar3;
        piVar6[4] = iVar5;
      }
      fn_828EAFD8(aiStack_80,0xffffffff83214540,piVar6,0);
      fn_829E53B0(auStack_70);
      return iVar5;
    }
    iVar5 = *(int *)(iVar5 + 0x10);
    pbVar7 = (unsigned char *)(iVar5 + 0x30);
    pbVar8 = param_4;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != param_4 + 0x24);
    if (((((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
         (*(int *)(iVar5 + 0x70) == (int)param_3)) && (*param_2 == *(__int64 *)(iVar5 + 0x28))) &&
       (*(char *)(iVar5 + 8) == '\0')) {
      *(int *)(iVar5 + 0x90) = *(int *)(iVar5 + 0x90) + 1;
      return iVar5;
    }
    fn_828EA790(aiStack_80);
  } while( true );
}

