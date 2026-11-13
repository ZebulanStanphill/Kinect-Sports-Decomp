extern int fn_82C038C8();
extern unsigned int lbl_820ED018;
extern unsigned int lbl_820ED028;


unsigned __int64 fn_82C13260(__int64 *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  int aiStack_80 [4];
  unsigned char abStack_70 [112];
  
  aiStack_80[0] = 0;
  if (param_1 == (__int64 *)0x0) {
    uVar3 = 2;
  }
  else {
    iVar4 = fn_82C038C8(param_1,*param_1,0x1e,aiStack_80);
    if (iVar4 == 0x1e) {
      pbVar5 = abStack_70;
      pbVar6 = (unsigned char *)&lbl_820ED018;
      *param_1 = *param_1 + 0x1e;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != &lbl_820ED028);
      if ((((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
          (*(char *)(aiStack_80[0] + 0x1c) == '\x01')) &&
         (*(char *)(aiStack_80[0] + 0x1d) == '\x02')) {
        *(unsigned int *)(param_1 + 2) =
             (((unsigned int)*(unsigned char *)(aiStack_80[0] + 0x13) * 0x100 + (unsigned int)*(unsigned char *)(aiStack_80[0] + 0x12)
              ) * 0x100 + (unsigned int)*(unsigned char *)(aiStack_80[0] + 0x11)) * 0x100 +
             (unsigned int)*(unsigned char *)(aiStack_80[0] + 0x10);
        uVar3 = 0;
      }
      else {
        uVar3 = 4;
      }
    }
    else {
      uVar3 = 3;
    }
  }
  return uVar3;
}

