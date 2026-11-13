extern int fn_8223C200();
extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_8223BE70(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  unsigned char bVar4;
  char *pcVar5;
  unsigned int uVar6;
  
  pcVar5 = (char *)(param_4 + 8);
  if (4 < *(unsigned int *)(param_4 + 0xc)) {
    pcVar5 = *(char **)(param_4 + 8);
  }
  iVar2 = 0;
  for (pcVar3 = pcVar5; pcVar3 != pcVar5 + 8; pcVar3 = pcVar3 + 1) {
    if (*pcVar3 == '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  fn_8223C200(param_3,iVar2 == 8,0);
  uVar6 = 0;
  if (iVar2 != 8) {
    do {
      cVar1 = pcVar5[uVar6];
      fn_8223C200(param_3,cVar1 == '\0',0);
      if (cVar1 != '\0') {
        bVar4 = -(uVar6 != 8) & 8;
        fn_8223C478(param_3,bVar4,0);
        fn_828E9DB8(param_3,cVar1,bVar4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
  }
  return;
}

