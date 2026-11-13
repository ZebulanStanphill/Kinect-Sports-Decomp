typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_8268B610();
extern int fn_826A70D0();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_826F8298(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned int auStack_30 [12];
  
  uVar1 = (**(int (***)())(*param_1 + 0x18))();
  uVar2 = (unsigned int)uVar1;
  *param_3 = uVar2;
  bVar8 = (uVar2 == 0) << 1;
  if (uVar2 == 0) {
    return uVar1;
  }
  fn_8268B330(auStack_30);
  puVar3 = (unsigned short *)fn_8267B890(lbl_831E7E64,*param_3,0);
  (**(int (***)())(*param_1 + 0x28))(param_1,puVar3,*param_3);
  uVar2 = *param_3;
  uVar5 = (unsigned __int64)uVar2;
  if (*puVar3 == 0xfffe) {
    lVar6 = (__int64)((int)uVar2 >> 1) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1;
    bVar8 = (lVar6 == 0) << 1;
    puVar4 = puVar3;
    if (0 < lVar6) {
      do {
        puVar4[1] = puVar4[1] << 8 | puVar4[1] >> 8;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 1;
      } while (lVar6 != 0);
    }
  }
  else {
    if (*puVar3 != 0xfeff) {
      puVar4 = puVar3;
      if ((((2 < (int)uVar2) && (*(char *)puVar3 == -0x11)) && ((char)*puVar3 == -0x45)) &&
         (*(char *)(puVar3 + 1) == -0x41)) {
        uVar5 = uVar5 - 3;
        puVar4 = (unsigned short *)((int)puVar3 + 3);
      }
      fn_8268B610(auStack_30,puVar4,uVar5);
      goto LAB_826f83cc;
    }
    lVar6 = (__int64)((int)uVar2 >> 1) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1;
    bVar8 = (lVar6 == 0) << 1;
    if (0 < lVar6) {
      do {
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  fn_8268B508(auStack_30,puVar3 + 1);
LAB_826f83cc:
  fn_826A70D0((unsigned int *)(auStack_30[0] & 0xfffffffc) + 2,
                    *(unsigned int *)(auStack_30[0] & 0xfffffffc) & 0x7fffffff,param_2);
  fn_8267BE38(puVar3);
  lVar6 = ((unsigned __int64)auStack_30[0] & 0xfffffffc) + 4;
  do {
    puVar7 = (unsigned int *)lVar6;
    uVar5 = (unsigned __int64)*puVar7;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
      *puVar7 = uVar2;
      bVar8 = 2;
    }
  } while (!(bool)(bVar8 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return 1;
}

