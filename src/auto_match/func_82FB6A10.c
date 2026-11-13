extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAFE40();
extern int fn_82FB6808();
extern unsigned int lbl_831BC768;


int fn_82FB6A10(int param_1,int *param_2)

{
  unsigned char uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int uVar4;
  unsigned int iVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  uVar4 = fn_82FAFE40(param_1);
  uVar7 = *(unsigned int *)*param_2;
  *param_2 = (int)((unsigned int *)*param_2 + 1);
  if (uVar7 != 0) {
    iVar5 = fn_82FA5060(lbl_831BC768,uVar7 * 0x54);
    if (iVar5 == 0) {
      uVar4 = 2;
    }
    else {
      if (uVar7 > 0) {
        puVar6 = (unsigned char *)(iVar5 + -3);
        uVar8 = uVar7;
        do {
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 3) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 7) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0xb) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0xf) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x13) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x17) = uVar3;
          uVar1 = *(unsigned char *)*param_2;
          *param_2 = (int)((unsigned char *)*param_2 + 1);
          puVar6[0x1b] = uVar1;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x1f) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x23) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x27) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x2b) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x2f) = uVar3;
          uVar2 = *(unsigned short *)*param_2;
          *param_2 = (int)((unsigned short *)*param_2 + 1);
          *(unsigned short *)(puVar6 + 0x33) = uVar2;
          uVar1 = *(unsigned char *)*param_2;
          *param_2 = (int)((unsigned char *)*param_2 + 1);
          puVar6[0x35] = uVar1;
          uVar1 = *(unsigned char *)*param_2;
          *param_2 = (int)((unsigned char *)*param_2 + 1);
          puVar6[0x36] = uVar1;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x37) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x3b) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x3f) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x43) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x47) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x4b) = uVar3;
          uVar3 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(puVar6 + 0x4f) = uVar3;
          uVar1 = *(unsigned char *)*param_2;
          *param_2 = (int)((unsigned char *)*param_2 + 1);
          puVar6[0x53] = uVar1;
          uVar1 = *(unsigned char *)*param_2;
          *param_2 = (int)((unsigned char *)*param_2 + 1);
          puVar6 = puVar6 + 0x54;
          *puVar6 = uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      fn_82FB6808(param_1,uVar7,iVar5);
      fn_82FA5190(lbl_831BC768,iVar5);
    }
  }
  return uVar4;
}

