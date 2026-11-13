extern int fn_83001FE8();
extern int fn_83004190();
extern int fn_83007940();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_3a;


void fn_83002C08(int param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  unsigned short uStack_3a;
  
  pfVar1 = (float *)*param_2;
  *param_2 = (int)(pfVar1 + 1);
  fn_83004190((double)*pfVar1,param_1 + 0x2c);
  pfVar1 = (float *)*param_2;
  dVar6 = (double)*pfVar1;
  dVar8 = (double)lbl_821AAD20;
  dVar7 = (double)pfVar1[1];
  *param_2 = (int)(pfVar1 + 2);
  if (((dVar6 != dVar8) || (dVar7 != dVar8)) && (cVar5 = fn_83001FE8(param_1), cVar5 != '\0'))
  {
    *(float *)(*(int *)(param_1 + 0x68) + 4) = (float)dVar6;
    *(float *)(*(int *)(param_1 + 0x68) + 8) = (float)dVar7;
  }
  pfVar1 = (float *)*param_2;
  *param_2 = (int)(pfVar1 + 1);
  fn_83004190((double)*pfVar1,param_1 + 0x2e);
  pfVar1 = (float *)*param_2;
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  *param_2 = (int)(pfVar1 + 2);
  dVar6 = (double)fVar2;
  dVar7 = (double)fVar3;
  if (((dVar6 != dVar8) || (dVar7 != dVar8)) && (cVar5 = fn_83001FE8(param_1), cVar5 != '\0'))
  {
    *(float *)(*(int *)(param_1 + 0x68) + 0xc) = (float)dVar6;
    *(float *)(*(int *)(param_1 + 0x68) + 0x10) = (float)dVar7;
  }
  pfVar1 = (float *)*param_2;
  *param_2 = (int)(pfVar1 + 1);
  uStack_3a = (unsigned short)(int)*pfVar1;
  *(unsigned short *)(param_1 + 0x30) = uStack_3a;
  pfVar1 = (float *)*param_2;
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  *param_2 = (int)(pfVar1 + 2);
  dVar6 = (double)fVar2;
  dVar7 = (double)fVar3;
  if (((dVar6 != dVar8) || (dVar7 != dVar8)) && (cVar5 = fn_83001FE8(param_1), cVar5 != '\0'))
  {
    *(float *)(*(int *)(param_1 + 0x68) + 0x14) = (float)dVar6;
    *(float *)(*(int *)(param_1 + 0x68) + 0x18) = (float)dVar7;
  }
  pfVar1 = (float *)*param_2;
  *param_2 = (int)(pfVar1 + 1);
  uStack_3a = ((((unsigned __int64)(uStack_3a)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)(__int64)*pfVar1)) & ((unsigned __int64)0xFF)) << 8));
  *(unsigned char *)(param_1 + 0x3c) = (unsigned char)uStack_3a;
  pfVar1 = (float *)*param_2;
  dVar7 = (double)pfVar1[1];
  dVar6 = (double)*pfVar1;
  *param_2 = (int)(pfVar1 + 2);
  if (((dVar6 != dVar8) || (dVar7 != dVar8)) && (cVar5 = fn_83001FE8(param_1), cVar5 != '\0'))
  {
    *(float *)(*(int *)(param_1 + 0x68) + 0x1c) = (float)dVar6;
    *(float *)(*(int *)(param_1 + 0x68) + 0x20) = (float)dVar7;
  }
  *(unsigned char *)(param_1 + 0x3d) = *(unsigned char *)(param_1 + 0x3d) | 4;
  uVar4 = *(unsigned int *)*param_2;
  *param_2 = (int)((unsigned int *)*param_2 + 1);
  fn_83007940(param_1,uVar4);
  return;
}

