extern void fn_82C06578(char *);
extern void *memset(void *, int, unsigned);
void fn_82C006B0(char *p)
{
  fn_82C06578(p);
  *(int *)(p + 0x280) = 0;
  *(int *)(p + 0x38) = 0;
  *(int *)(p + 0x27c) = 0;
  *(int *)(p + 0x284) = 0;
  *(int *)(p + 0x288) = 0;
  *(int *)(p + 0x28c) = 0;
  memset(p + 0x3c, 0, 0x240);
  *(int *)(p + 0x290) = 0;
  *(int *)(p + 0x294) = 0;
}
