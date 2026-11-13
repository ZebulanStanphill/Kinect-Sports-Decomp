#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_30;
extern int fn_82936290();
extern int fn_82F68CC0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 fn_82EF3E60(int *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  char *pcVar7;
  unsigned int *puVar8;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned __int64 auStack_30 [6];
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
LAB_82ef41a4:
    uVar2 = 0xffffffff80070057;
  }
  else {
    (**(int (***)())(*param_1 + 0x14))(param_1,auStack_30,0);
    if (0xffffffff < auStack_30[0]) {
      return 0xffffffffc00d3a9a;
    }
    *param_4 = (unsigned int)auStack_30[0];
    if (param_3 < (unsigned int)auStack_30[0]) {
      return 0xffffffffc00d36b1;
    }
    uStack_38 = *(unsigned __int64 *)(param_1 + 6);
    uStack_40 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x13) << 0x18 |
                         (unsigned int)*(unsigned char *)((int)param_1 + 0x12) << 0x10 |
                         (unsigned int)*(unsigned char *)((int)param_1 + 0x11) << 8 | (unsigned int)*(unsigned char *)(param_1 + 4),
                         CONCAT22(*(unsigned short *)(param_1 + 5) << 8 | *(unsigned short *)(param_1 + 5) >> 8,
                                  *(unsigned short *)((int)param_1 + 0x16) << 8 |
                                  *(unsigned short *)((int)param_1 + 0x16) >> 8));
    fn_82F68CC0(param_2,&uStack_40,0x10);
    uVar3 = *(unsigned __int64 *)(param_1 + 8);
    uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar3 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    *(unsigned __int64 *)(param_2 + 0x10) =
         ((uVar3 & 0xff) << 0x18 |
         (uVar3 & 0xff00) << 8 |
         (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
    *(unsigned int *)(param_2 + 0x18) =
         (unsigned int)*(unsigned char *)((int)param_1 + 0x57) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x56) << 0x10
         | (unsigned int)*(unsigned char *)((int)param_1 + 0x55) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x15);
    puVar8 = (unsigned int *)(param_2 + 0x1c);
    uStack_40 = uVar3;
    if (param_1[0x15] != 0) {
      fn_82F68CC0(puVar8,param_1[0x14]);
      puVar8 = (unsigned int *)(param_1[0x15] + (int)puVar8);
    }
    pcVar7 = (char *)param_1[0x12];
    pcVar4 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      puVar6 = puVar8 + 1;
      *puVar8 = 0;
    }
    else {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar7;
      *puVar8 = uVar5 * 0x1000000 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
      pcVar7 = (char *)param_1[0x12];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (0x7fffffff < (unsigned int)((int)pcVar7 - param_1[0x12])) goto LAB_82ef41a4;
      uVar2 = fn_82936290(puVar8 + 1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      pcVar7 = (char *)param_1[0x12];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar6 = (unsigned int *)(((int)pcVar7 - param_1[0x12]) + (int)(puVar8 + 1));
    }
    pcVar7 = (char *)param_1[0x13];
    pcVar4 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      puVar8 = puVar6 + 1;
      *puVar6 = 0;
    }
    else {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar7;
      *puVar6 = uVar5 * 0x1000000 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
      pcVar7 = (char *)param_1[0x13];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (0x7fffffff < (unsigned int)((int)pcVar7 - param_1[0x13])) goto LAB_82ef41a4;
      uVar2 = fn_82936290(puVar6 + 1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      pcVar7 = (char *)param_1[0x13];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar8 = (unsigned int *)(((int)pcVar7 - param_1[0x13]) + (int)(puVar6 + 1));
    }
    pcVar7 = (char *)param_1[0x16];
    pcVar4 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      *puVar8 = 0;
    }
    else {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar7;
      *puVar8 = uVar5 * 0x1000000 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
      pcVar7 = (char *)param_1[0x16];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (0x7fffffff < (unsigned int)((int)pcVar7 - param_1[0x16])) goto LAB_82ef41a4;
      uVar2 = fn_82936290(puVar8 + 1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

