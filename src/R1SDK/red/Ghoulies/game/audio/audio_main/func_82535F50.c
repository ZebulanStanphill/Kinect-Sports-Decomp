extern int *lbl_8327F868;

void fn_82535F50(int *param_1, int param_2)
{
  int *piVar1;
  unsigned char cVar3;
  int iVar2;

  if (param_1 != (int *)0x0) {
    piVar1 = (*(int *(**)(int *))(*param_1 + 0x20))(param_1);
    if (piVar1 != (int *)0x0) {
      cVar3 = (*(unsigned char (**)(int *))(*piVar1 + 4))(piVar1);
      if ((cVar3 != 0) && (iVar2 = (*(int (**)(int *, int))(*piVar1 + 0x80))(piVar1, param_2), iVar2 < 0)) {
        (*(void (**)(int *, const char *, int, const char *))(*lbl_8327F868 + 8))(lbl_8327F868, "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\audio\\audio_main.cpp", 0x79a, "SetOrigin failed\n");
      }
    }
  }
}
