#define true 1
extern unsigned int lbl_821AAD20;


void fn_828055F8(int param_1,unsigned int *param_2,int *param_3,int *param_4,int param_5,
                  unsigned __int64 param_6,unsigned int *param_7,unsigned int param_8)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  int iVar10;
  __int64 lVar11;
  int in_stack_00000054;
  int *in_stack_0000005c;
  unsigned char *in_stack_00000064;
  
  uVar7 = lbl_821AAD20;
  uVar9 = 0x80;
  iVar10 = param_8 << 2;
  in_stack_00000054 = in_stack_00000054 << 2;
  do {
    if (*(unsigned short *)(param_1 + 0x1e) <= param_8) {
      return;
    }
    if ((param_6 & 0xff & uVar9) == 0) {
      fVar1 = *(float *)(*(int *)(param_1 + 8) + iVar10);
LAB_82805770:
      iVar3 = in_stack_0000005c[1];
      iVar4 = in_stack_0000005c[2];
      iVar5 = in_stack_0000005c[3];
      *(float *)(in_stack_00000054 + *in_stack_0000005c) = fVar1;
      *(float *)(iVar3 + in_stack_00000054) = fVar1;
      *(float *)(iVar4 + in_stack_00000054) = fVar1;
      *(float *)(iVar5 + in_stack_00000054) = fVar1;
    }
    else {
      piVar2 = (int *)*param_2;
      if (*(char *)(param_1 + 0x26) == '\0') {
        piVar8 = (int *)((int)piVar2 + 2);
        lVar11 = (__int64)*(short *)piVar2;
      }
      else {
        piVar8 = piVar2 + 1;
        lVar11 = (__int64)*piVar2;
      }
      *param_2 = piVar8;
      if ((param_6 & 0xff & uVar9 >> 3) != 0) {
        fVar1 = *(float *)(*(int *)(param_1 + 4) + iVar10) * (float)lVar11;
        goto LAB_82805770;
      }
      if (param_7 != (unsigned int *)0x0) {
        uVar6 = *param_7 >> 3 & 0x1ffffffc;
        *(unsigned int *)(uVar6 + *(int *)(param_5 + 0x2c)) =
             1 << (*param_7 & 0x1f) | *(unsigned int *)(uVar6 + *(int *)(param_5 + 0x2c));
      }
      if (*(char *)(param_1 + 0x26) == '\0') {
        *(unsigned char *)*param_4 = (*(unsigned char *)*param_3 >> ((*in_stack_00000064 & 0xf) << 2) & 0xf) + 1;
        *param_4 = *param_4 + 1;
        *param_3 = (unsigned int)*in_stack_00000064 + *param_3;
        *in_stack_00000064 = *in_stack_00000064 == 0;
      }
      else {
        *(unsigned char *)*param_4 = *(unsigned char *)*param_3 + 1;
        *param_4 = *param_4 + 1;
        *param_3 = *param_3 + 1;
      }
      iVar3 = in_stack_0000005c[1];
      iVar4 = in_stack_0000005c[2];
      iVar5 = in_stack_0000005c[3];
      *(unsigned int *)(in_stack_00000054 + *in_stack_0000005c) = uVar7;
      *(unsigned int *)(iVar3 + in_stack_00000054) = uVar7;
      *(unsigned int *)(iVar4 + in_stack_00000054) = uVar7;
      *(unsigned int *)(iVar5 + in_stack_00000054) = uVar7;
    }
    in_stack_00000054 = in_stack_00000054 + 4;
    if (param_7 != (unsigned int *)0x0) {
      *param_7 = *param_7 + 1;
    }
    uVar9 = uVar9 >> 1;
    param_8 = param_8 + 1;
    iVar10 = iVar10 + 4;
    if (uVar9 == 0x10) {
      return;
    }
  } while( true );
}

