typedef unsigned char bool;
extern int fn_82523220();
extern int fn_8252CAF8();
extern int fn_8252CC80();
extern int fn_8265C9E0();
extern float lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


bool fn_8252BDB8(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  
  if (*(int **)(param_1 + 0x8c0) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x8c0) + 8))();
    puVar1 = *(unsigned int **)(param_1 + 0x8c0);
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    *(unsigned int *)(param_1 + 0x8c0) = 0;
  }
  uVar2 = fn_8265C9E0(0x319c0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82523220(uVar2,param_2,0);
  }
  *(unsigned int *)(param_1 + 0x8c0) = uVar3;
  iVar5 = 0;
  do {
    fn_8252CC80(param_1,*(char *)(param_1 + 0x930 + iVar5) != '\0',iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar4 = *(unsigned int *)(param_1 + 0x91c);
  if (uVar4 == 4) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar4 = (unsigned int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8218E8FC);
  }
  fn_8252CAF8(param_1,0xf,uVar4 & 0xff);
  return *(int *)(param_1 + 0x8c0) != 0;
}

