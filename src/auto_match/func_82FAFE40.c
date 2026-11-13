extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAF650();
extern int fn_82FAFA90();
extern int fn_82FAFB18();
extern int fn_82FB04A0();
extern int fn_83007AE8();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_3b;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


unsigned __int64 fn_82FAFE40(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  char cVar1;
  unsigned __int64 *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  unsigned char uStack_3b;
  
  *param_2 = *param_2 + 4;
  uVar5 = fn_83007AE8();
  if ((int)uVar5 == 1) {
    uVar5 = fn_82FB04A0(param_1,param_2,param_3);
  }
  puVar2 = (unsigned __int64 *)*param_2;
  *param_2 = (int)(puVar2 + 1);
  uStack_50 = *puVar2;
  uStack_48 = puVar2[1];
  uStack_40 = *(unsigned int *)(puVar2 + 2);
  *param_2 = (int)(puVar2 + 2);
  *param_2 = (int)puVar2 + 0x14;
  uStack_3c = *(unsigned char *)((int)puVar2 + 0x14);
  *param_2 = (int)puVar2 + 0x15;
  uStack_3b = *(unsigned char *)((int)puVar2 + 0x15);
  *param_2 = (int)puVar2 + 0x16;
  cVar1 = *(char *)((int)puVar2 + 0x16);
  *param_2 = (int)puVar2 + 0x17;
  if (cVar1 != '\0') {
    fn_82FAF650(param_1,&uStack_50);
  }
  uVar3 = *(unsigned int *)*param_2;
  uVar8 = (unsigned __int64)uVar3;
  *param_2 = (int)((unsigned int *)*param_2 + 1);
  if (uVar8 == 0) {
    fn_82FAFA90(param_1);
  }
  else {
    iVar6 = fn_82FA5060(lbl_831BC768,
                              (uVar8 + ((unsigned __int64)uVar3 & 0x3fffffff) * 4 & 0x3fffffff) << 2);
    if (iVar6 == 0) {
      uVar5 = 2;
    }
    else {
      if (uVar8 != 0) {
        puVar7 = (unsigned int *)(iVar6 + -4);
        uVar9 = uVar8;
        do {
          uVar4 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          puVar7[1] = uVar4;
          uVar4 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          puVar7[2] = uVar4;
          uVar4 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          puVar7[3] = uVar4;
          uVar4 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          puVar7[4] = uVar4;
          uVar4 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          puVar7 = puVar7 + 5;
          *puVar7 = uVar4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      fn_82FAFB18(param_1,iVar6,uVar8);
      fn_82FA5190(lbl_831BC768,iVar6);
    }
  }
  return uVar5;
}

