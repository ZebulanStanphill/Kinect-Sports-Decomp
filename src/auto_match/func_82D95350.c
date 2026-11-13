extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern int fn_82D95480();
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_34;


void fn_82D95350(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  unsigned int uStack_34;
  int iStack_30;
  
  if (((*(unsigned char *)(param_2[6] + 0xf) & 1) != 0) && (iVar2 = param_2[4], iVar2 != 3)) {
    fVar1 = lbl_821AAD20;
    if (0 >= iVar2) {
      fVar1 = *(float *)param_2[9];
    }
    dVar4 = (double)fVar1;
    if ((float *)param_2[8] == (float *)0x0) {
      dVar3 = (double)fn_82D95480((unsigned __int64)(unsigned int)param_2[1],(unsigned __int64)(unsigned int)param_2[2],
                                   (unsigned __int64)(unsigned int)param_2[1] + 0x140,
                                   (unsigned __int64)(unsigned int)param_2[2] + 0x140,param_2[5]);
    }
    else {
      dVar3 = (double)*(float *)param_2[8];
    }
    fStack_3c = (float)dVar4;
    fStack_38 = (float)dVar3;
    iStack_30 = param_2[3] + 0x14;
    iStack_44 = param_2[5];
    iStack_50 = param_2[1] + 0x10;
    iStack_40 = param_2[6];
    iStack_4c = param_2[2] + 0x10;
    uStack_34 = (unsigned int)(0 < iVar2);
    iStack_48 = param_2[1];
    if ((*param_2 != 0) && (iStack_48 = param_2[2], *param_2 != 1)) {
      iStack_48 = 0;
    }
    (**(int (***)())(*param_1 + 0x1c))(param_1,&iStack_50);
    *(float *)param_2[8] = fStack_38;
    if (param_2[4] < 1) {
      *(float *)param_2[9] = fStack_3c;
    }
  }
  return;
}

