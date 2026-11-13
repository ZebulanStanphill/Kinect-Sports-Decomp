extern int fn_82FA5060();
extern int fn_82FAB9C0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642F0;


unsigned __int64 fn_83007488(int *param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned short *puVar7;
  int *piVar8;
  unsigned __int64 uVar6;
  
  if (*(char *)(lbl_832642F0 + 0x4a0) != '\0') {
    if (param_1[0x11] == 0) {
      puVar7 = (unsigned short *)fn_82FA5060(lbl_831BC768,0xc);
      param_1[0x11] = (int)puVar7;
      if (puVar7 != (unsigned short *)0x0) {
        *puVar7 = 0;
        *(unsigned int *)(puVar7 + 2) = 0;
      }
      if (param_1[0x11] == 0) {
        return 0x34;
      }
    }
    iVar1 = *(int *)*param_2;
    *param_2 = (int)((int *)*param_2 + 1);
    if (iVar1 != 0) {
      piVar8 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
      if (piVar8 == (int *)0x0) {
        return 2;
      }
      uVar6 = (**(int (***)())(*piVar8 + 100))(piVar8,param_1[3]);
      (**(int (***)())(*piVar8 + 8))(piVar8);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      pfVar2 = (float *)*param_2;
      *param_2 = (int)(pfVar2 + 1);
      fVar3 = pfVar2[2];
      fVar4 = pfVar2[1];
      fVar5 = *pfVar2;
      *param_2 = (int)(pfVar2 + 3);
      (**(int (***)())(*param_1 + 0x108))((double)fVar5,(double)fVar4,(double)fVar3,param_1);
      pfVar2 = (float *)*param_2;
      *param_2 = (int)(pfVar2 + 1);
      fVar3 = *pfVar2;
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      *param_2 = (int)(pfVar2 + 3);
      (**(int (***)())(*param_1 + 0x11c))((double)fVar3,(double)fVar4,(double)fVar5,param_1);
    }
  }
  return 1;
}

