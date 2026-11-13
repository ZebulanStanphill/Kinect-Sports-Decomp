extern int fn_8223C200();
extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_822576B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  unsigned int uVar5;
  char cVar6;
  
  pcVar4 = (char *)(param_4 + 8);
  if (4 < *(unsigned int *)(param_4 + 0xc)) {
    pcVar4 = *(char **)(param_4 + 8);
  }
  iVar2 = 0;
  for (pcVar3 = pcVar4; pcVar3 != pcVar4 + 4; pcVar3 = pcVar3 + 1) {
    if (*pcVar3 == '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  fn_8223C200(param_3,iVar2 == 4,0);
  if (iVar2 != 4) {
    uVar5 = 0;
    do {
      cVar1 = pcVar4[uVar5];
      fn_8223C200(param_3,cVar1 == '\0',0);
      if (cVar1 != '\0') {
        cVar6 = (uVar5 != 3) + '\a';
        fn_8223C478(param_3,cVar6,0);
        fn_828E9DB8(param_3,cVar1,cVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
  }
  return;
}

