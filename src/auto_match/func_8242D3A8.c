extern void *fn_82555A88();


typedef struct Fl_8242D3A8 { int pad[9]; unsigned a : 4; unsigned f : 1; unsigned b : 27; } Fl_8242D3A8;

void fn_8242D3A8(int param_1, int param_2, int param_3)
{
  unsigned int iVar1;
  unsigned int uVar2;
  Fl_8242D3A8 *p;

  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0x3e4);
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x8c0);
    if (uVar2 != 0) {
      p = (Fl_8242D3A8 *)fn_82555A88(uVar2 + 0x98);
      if (p != 0) {
        p->f = (param_3 == 0);
      }
    }
  }
}
