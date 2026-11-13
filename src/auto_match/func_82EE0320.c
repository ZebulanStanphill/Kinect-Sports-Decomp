extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_82154A38;
extern unsigned int lbl_82154A48;


unsigned __int64 fn_82EE0320(int param_1,unsigned int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  int iVar6;
  
  if ((int)param_2 < 0x8002) {
    iVar6 = param_3;
    if ((0x7fff < (int)param_2) || (param_2 < 2)) goto LAB_82ee0430;
    if (param_2 == 2) goto LAB_82ee03b4;
    if (param_2 < 4) goto LAB_82ee03ac;
    if (param_2 == 4) goto LAB_82ee03a4;
    if (5 < param_2) {
      iVar6 = 0;
      if (param_2 != 6) goto LAB_82ee0430;
      goto LAB_82ee039c;
    }
  }
  else if (param_2 == 0x8002) {
LAB_82ee03b4:
    pbVar3 = (unsigned char *)(param_1 + 0x10);
    pbVar4 = &lbl_820ED0B8;
    pbVar5 = pbVar3;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar5;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar4 != &lbl_820ED0C8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      pbVar5 = &lbl_82154A38;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar3;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar5 != &lbl_82154A48);
      iVar6 = 4;
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_82ee0430;
    }
  }
  else {
    if (param_2 == 0x8003) {
LAB_82ee03ac:
      iVar6 = 4;
      goto LAB_82ee0430;
    }
    if (param_2 == 0x8004) {
LAB_82ee03a4:
      iVar6 = 8;
      goto LAB_82ee0430;
    }
    if (param_2 != 0x8005) {
      iVar6 = 0;
      if (param_2 != 0x8006) goto LAB_82ee0430;
LAB_82ee039c:
      iVar6 = 0x10;
      goto LAB_82ee0430;
    }
  }
  iVar6 = 2;
LAB_82ee0430:
  if ((param_3 != 0) && (param_3 != iVar6)) {
    return 0xffffffff80004005;
  }
  return 0;
}

