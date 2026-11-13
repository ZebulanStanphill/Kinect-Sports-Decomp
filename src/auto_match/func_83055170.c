extern void fn_83050528(char *o, int state);
extern void fn_83055CF0(char *o);
extern void fn_83055EE8(void *owner, char *o);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_83055170(char *param_1)
{
  RtlEnterCriticalSection(param_1 - 0x40);
  if (*(unsigned char *)(param_1 + 0x28) != 0) {
    fn_83050528(param_1 - 0x78, 3);
    fn_83055CF0(param_1 - 0x78);
    RtlLeaveCriticalSection(param_1 - 0x40);
    fn_83055EE8(*(void **)(param_1 - 0x18), param_1 - 0x78);
  }
  else {
    fn_83050528(param_1 - 0x78, 3);
    RtlLeaveCriticalSection(param_1 - 0x40);
  }
}
