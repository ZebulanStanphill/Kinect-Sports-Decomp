extern int fn_82F72E58();
extern unsigned int lbl_832635D0;


unsigned int * fn_82F72FB0(unsigned int *param_1,unsigned int *param_2,unsigned char param_3)

{
  unsigned char bVar1;
  char *pcVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned char uVar5;
  
  *param_1 = 0;
  *(unsigned char *)(param_1 + 1) = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)0x0) {
LAB_82f730f0:
    uVar5 = 2;
  }
  else {
    if (*pcVar2 != '\0') {
      lVar3 = 0;
      do {
        bVar1 = *(unsigned char *)*param_2;
        if (bVar1 == param_3) break;
        if (((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (bVar1 != 0x3c)) &&
              (((bVar1 != 0x3e && (bVar1 != 0x2d)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1)))))
              ) && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
            (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
           (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((lbl_832635D0 & 0x10000) == 0))))
        goto LAB_82f730f0;
        pbVar4 = (unsigned char *)*param_2 + 1;
        lVar3 = lVar3 + 1;
        *param_2 = pbVar4;
      } while (*pbVar4 != 0);
      fn_82F72E58(param_1,pcVar2,lVar3);
      bVar1 = *(unsigned char *)*param_2;
      if (bVar1 != 0) {
        *param_2 = (unsigned char *)*param_2 + 1;
        if (bVar1 == param_3) {
          return param_1;
        }
        uVar5 = 3;
        *param_1 = 0;
        goto LAB_82f730f4;
      }
      if ((param_1[1] & 0xff000000) != 0) {
        return param_1;
      }
    }
    uVar5 = 1;
  }
LAB_82f730f4:
  *(unsigned char *)(param_1 + 1) = uVar5;
  return param_1;
}

