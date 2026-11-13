extern int *lbl_8327F868;

void fn_82552A18(int **param_1, int param_2)
{
  int *p0;
  int *piVar1;
  unsigned char cVar3;
  int iVar2;

  p0 = *param_1;
  if (p0 != (int *)0x0) {
    piVar1 = (*(int *(**)(int *))(*p0 + 0x20))(p0);
    if (piVar1 != (int *)0x0) {
      cVar3 = (*(unsigned char (**)(int *))(*piVar1 + 4))(piVar1);
      if ((cVar3 != 0) && (iVar2 = (*(int (**)(int *, int))(*piVar1 + 0x78))(piVar1, param_2), iVar2 < 0)) {
        (*(void (**)(int *, const char *, int, const char *))(*lbl_8327F868 + 8))(lbl_8327F868, "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\audio\\audio_main.cpp", 0x7bc, "SetOrientation failed\n");
      }
    }
  }
}
