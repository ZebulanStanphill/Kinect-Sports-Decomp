#define true 1
extern int fn_82F66368();


/* WARNING: Type propagation algorithm not settling */

void fn_82526DC8(char *param_1,int param_2,int param_3,char *param_4,char *param_5)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  unsigned int uVar8;
  char *pcVar9;
  char *pcVar10;
  unsigned char *pbVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  
  pcVar9 = param_1;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + (-1 - (int)param_1);
  pcVar7 = param_4;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + (-1 - (int)param_4);
  pcVar10 = param_5;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + (-1 - (int)param_5);
  iVar5 = 0;
  pcVar14 = (char *)0x0;
  pcVar4 = strstr(param_1,param_4);
  pcVar12 = param_1;
  do {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar12 - (int)param_1 != 1) {
    do {
      if (pcVar4 == (char *)0x0) break;
      iVar5 = iVar5 + 1;
      pcVar12 = param_4;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      pcVar14 = pcVar12 + (int)(pcVar14 + (-1 - (int)param_4));
      pcVar12 = param_4;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      pcVar4 = strstr(pcVar4 + (int)(pcVar12 + (-1 - (int)param_4)),param_4);
      pcVar12 = param_1;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
    } while (pcVar14 < pcVar12 + (-1 - (int)param_1));
    if (0 < iVar5) {
      pcVar12 = (char *)0x0;
      iVar5 = 0;
      if (pcVar9 == (char *)0x0) {
        return;
      }
      iVar13 = 0;
      do {
        if (pcVar7 != (char *)0x0) {
          pcVar4 = pcVar7;
          pbVar11 = (unsigned char *)(param_1 + (int)pcVar12);
          do {
            bVar2 = *pbVar11;
            pbVar3 = (unsigned char *)(param_4 + (iVar13 - (int)param_1) + (int)pbVar11);
            pbVar11 = pbVar11 + 1;
            uVar8 = bVar2 & 0xdf;
            if (uVar8 != (*pbVar3 & 0xdf)) {
              iVar6 = uVar8 - (*pbVar3 & 0xdf);
              goto LAB_82526f9c;
            }
            pcVar4 = pcVar4 + -1;
          } while (pcVar4 != (char *)0x0 && (bVar2 & 0xdf) != 0);
        }
        iVar6 = 0;
LAB_82526f9c:
        iVar15 = param_3 - iVar5;
        if (iVar6 == 0) {
          iVar6 = fn_82F66368(param_2,iVar15,param_5,pcVar10);
          pcVar10[param_2] = '\0';
          if (iVar6 != 0) {
            *(unsigned char *)(param_2 + iVar15 + -1) = 0;
          }
          iVar13 = (iVar13 - (int)pcVar7) + 1;
          pcVar12 = pcVar12 + (int)pcVar7 + -1;
          iVar5 = iVar5 + (int)pcVar10;
          param_2 = param_2 + (int)pcVar10;
        }
        else {
          iVar6 = fn_82F66368(param_2,iVar15,param_1 + (int)pcVar12,1);
          *(unsigned char *)(param_2 + 1) = 0;
          if (iVar6 != 0) {
            *(unsigned char *)(param_2 + iVar15 + -1) = 0;
          }
          iVar5 = iVar5 + 1;
          param_2 = param_2 + 1;
        }
        pcVar12 = pcVar12 + 1;
        iVar13 = iVar13 + -1;
        if (pcVar9 <= pcVar12) {
          return;
        }
      } while( true );
    }
  }
  iVar5 = fn_82F66368(param_2,param_3,param_1,pcVar9);
  pcVar9[param_2] = '\0';
  if (iVar5 != 0) {
    *(unsigned char *)(param_2 + param_3 + -1) = 0;
  }
  return;
}

