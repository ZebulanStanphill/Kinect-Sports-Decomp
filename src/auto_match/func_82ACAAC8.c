#define true 1
extern int fn_82ABE190();


__int64 fn_82ACAAC8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,int *param_4,unsigned int param_5,
                      unsigned char *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  __int64 lVar6;
  
  iVar1 = *param_2;
  lVar6 = 0;
  do {
    if (iVar1 == 0) {
      *param_4 = *param_4 - ((unsigned int)param_2[2] >> 0xe & 7);
      return lVar6 - ((unsigned __int64)((unsigned int)param_2[2] >> 0xe) & 7);
    }
    cVar5 = fn_82ABE190(iVar1);
    if ((cVar5 != '\0') &&
       (iVar2 = *(int *)(iVar1 + 0xc), (*(unsigned int *)(iVar2 + 8) & 0x3f80) != 0x3c00)) {
      if (*(int *)(iVar2 + 0x1c) == param_2[7]) {
        if (((*(unsigned int *)(iVar2 + 0x14) & 0x1e000) != 0) &&
           ((*(unsigned int *)(iVar2 + 0x14) >> 0x11 & 0xff) == param_5)) {
          *param_6 = 1;
        }
      }
      for (iVar3 = *param_2; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        if (iVar3 == iVar1) goto LAB_82acab8c;
        cVar5 = fn_82ABE190(iVar3);
        if ((cVar5 != '\0') && (*(int *)(iVar3 + 0xc) == iVar2)) break;
      }
      if (iVar3 == iVar1) {
LAB_82acab8c:
        for (iVar3 = *(int *)(iVar2 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
          piVar4 = *(int **)(iVar3 + 0x10);
          if ((piVar4 != (int *)0x0) && (piVar4 != param_2)) {
            if ((((unsigned int)piVar4[2] >> 0x1a & 1) != 0) && ((piVar4[2] & 0x3f80U) != 0x3800)) {
              if ((((unsigned __int64)((unsigned int)piVar4[5] >> 5) |
                   (unsigned __int64)(unsigned int)piVar4[4] & 0xfffffffff8000000) >> 0x14 & 0x7ff) ==
                  (param_3 & 0xffffffff)) goto LAB_82acabf0;
            }
          }
        }
        lVar6 = ((unsigned __int64)(*(unsigned int *)(iVar2 + 8) >> 0xe) & 7) + lVar6;
LAB_82acabf0:
        *param_4 = (*(unsigned int *)(iVar2 + 8) >> 0xe & 7) + *param_4;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

