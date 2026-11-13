extern void fn_83050528(char *o, int state);
extern void fn_83055CF0(char *o);
extern void fn_83055EE8(void *owner, char *o);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_83055638(char *param_1)
{
  char *o;
  RtlEnterCriticalSection(param_1 - 0x40);
  o = param_1 - 0x78;
  *(unsigned int *)(o + 0x74) = *(unsigned int *)(o + 0x74) & 0xf6ffffff | 0x8000000;
  if (*(unsigned char *)(param_1 + 0x28) != 0) {
    fn_83050528(o, 3);
    fn_83055CF0(o);
    RtlLeaveCriticalSection(param_1 - 0x40);
    fn_83055EE8(*(void **)(param_1 - 0x18), o);
  }
  else {
    fn_83050528(o, 3);
    RtlLeaveCriticalSection(param_1 - 0x40);
  }
}
