extern int fn_825200A8(int, int);

int fn_824C2330(int a, int b)
{
  if (fn_825200A8(a + 0x40c, b + 0x40c) != 0 &&
      *(int *)(a + 0x410) == *(int *)(b + 0x410) &&
      *(int *)(a + 0x414) == *(int *)(b + 0x414) &&
      *(int *)(a + 0x418) == *(int *)(b + 0x418) &&
      fn_825200A8(a + 0x420, b + 0x420) != 0 &&
      fn_825200A8(a + 0x424, b + 0x424) != 0) {
    return 0;
  }
  return 1;
}
