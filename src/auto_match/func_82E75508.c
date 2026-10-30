extern void fn_82E73470(void *p);
extern void fn_82E4FE40(void *p);

void fn_82E75508(char *p)
{
  if (*(void **)(p + 0x78) != 0) {
    fn_82E73470(*(void **)(p + 0x78));
    *(void **)(p + 0x78) = 0;
  }
  if (*(void **)(p + 0x70) != 0) {
    fn_82E4FE40(*(void **)(p + 0x70));
  }
  *(void **)(p + 0x70) = 0;
  *(int *)(p + 0x74) = 0;
}
