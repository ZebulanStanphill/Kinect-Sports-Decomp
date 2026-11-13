extern int fn_82274130();
extern unsigned int lbl_82193CD8;
extern unsigned int lbl_83265988;


void fn_82274250(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar4;
  int iVar5;
  unsigned char bVar6;
  
  iVar5 = lbl_83265988;
  if (lbl_83265988 != 0) {
    uVar2 = *(unsigned int *)(&lbl_82193CD8 + param_2 * 4);
    if (uVar2 != 0) {
      uVar3 = uVar2 >> 3;
      uVar2 = 1 << (uVar2 & 7);
      iVar1 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
      bVar6 = (unsigned char)uVar2;
      if ((uVar2 & 0xff & (unsigned int)*(unsigned char *)(iVar1 + uVar3)) == 0) {
        bVar6 = *(unsigned char *)(iVar1 + uVar3) | bVar6;
      }
      else {
        bVar6 = *(unsigned char *)(iVar1 + uVar3) & ~bVar6;
      }
      *(unsigned char *)(iVar1 + uVar3) = bVar6;
    }
    uVar2 = *(unsigned int *)(&lbl_82193CD8 + param_2 * 4);
    if ((uVar2 == 0) ||
       (cVar4 = '\x01',
       ((unsigned int)*(unsigned char *)(*(int *)(*(int *)(iVar5 + 0xf0) + 8) + (uVar2 >> 3)) & 1 << (uVar2 & 7)) ==
       0)) {
      cVar4 = '\0';
    }
    fn_82274130(param_1,param_2,cVar4 + '\x02');
    return;
  }
  return;
}

