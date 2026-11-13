extern int fn_82250A18();
extern int fn_823548E8();
extern int fn_828AAF70(void *, int);
extern int (*lbl_83276774[9])();
extern unsigned int lbl_832975B0;


static int getCallback(void) { if (lbl_83276774[8]) return lbl_83276774[8](); return 0; }
static void enable(char *p,int yes) { char *q=p+0x150; fn_828AAF70(q,yes); }
void fn_82354750(int param_1)

{
  int iVar2;
  int lVar1;
  
  if (*(int *)(param_1 + 0x3ec) == 0) {
    iVar2 = getCallback();
    if (iVar2 != 0) {
      fn_823548E8(param_1);
    }
  }
  else {
    iVar2 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(char *)(iVar2 + 4) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x88);
    } else iVar2 = 1;
    *(int *)(param_1 + 1000) = iVar2;
    if (iVar2 != 0) {
      if (*(int **)(param_1 + 0x3f4) != (int *)0x0) {
        lVar1 = (*(int (**)())(**(int **)(param_1 + 0x3f4) + 8))(*(int **)(param_1 + 0x3f4));
        enable((char *)lVar1,1);
      }
      if (*(int *)(param_1 + 8) != 3) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
        *(unsigned int *)(param_1 + 8) = 3;
      }
    }
  }
  return;
}

