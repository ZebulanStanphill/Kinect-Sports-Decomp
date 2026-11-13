extern char lbl_83160558[];
extern char lbl_83160538[];
extern char lbl_83160548[];
extern int fn_82A29A38();
extern int fn_82AB0600();


void fn_82AB0978(unsigned int param_1,int param_2,int *param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar5;
  unsigned int uVar4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (param_1 >= 0xffff0200) {
    fn_82A29A38();
  }
  uVar5 = 0;
  if (*(unsigned *)(param_2 + 8) > 0) {
    do {
      if ((*(unsigned int *)(param_2 + 0xc) >> uVar5 & 1) != 0) {
        puVar2 = (unsigned int *)*param_3;
        if (uVar5 >= 0x10) {
          fn_82A29A38();
        }
        *puVar2 = (uVar5 & 0xff) << 0x10 | 0x8000019;
        *param_3 = (int)(puVar2 + 1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(unsigned int *)(param_2 + 8));
  }
  uVar4 = 0;
  if (*(unsigned *)(param_2 + 4) > 0) {
    do {
      if ((*(unsigned int *)(iVar1 + 0xc4) >> uVar4 & 1) != 0) {
        fn_82AB0600(uVar4 + 2,5,uVar4,0,(unsigned)lbl_83160558,0xf0000,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (unsigned int)*(unsigned int *)(param_2 + 4));
  }
  uVar5 = 0;
  do {
    if (*(unsigned *)((uVar5 + 4) * 8 + iVar1) != 0) {
      if(uVar5==0) uVar3=(unsigned)lbl_83160538; else uVar3=(unsigned)lbl_83160548;
      fn_82AB0600(uVar5,10,uVar5,1,uVar3,0xf0000,param_2,param_3);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return;
}

