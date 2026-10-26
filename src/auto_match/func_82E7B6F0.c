typedef void (*code)(void *);

void fn_82E7B6F0(int p)
{
  int o = *(int *)(*(int *)(*(int *)(p + 0x20) + 8) + 8) + *(int *)(p + 0x20);
  (*(code *)*(int *)(o + 8))((void *)(o + 8));
}
