extern int fn_83050528();
extern int fn_830543B8();
extern int fn_83055CF0();
extern int fn_83055EE8();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
void fn_830539F8(char *param_1)
{
  char *o;
  RtlEnterCriticalSection(param_1 - 0x40);
  o = param_1 - 0x78;
  *(unsigned int *)(o + 0x74) = *(unsigned int *)(o + 0x74) & 0xf6ffffff | 0x8000000;
  fn_83050528(o, 3);
  if (*(unsigned int *)(param_1 + 0x30) == 0 && *(unsigned int *)(param_1 + 0x34) == 0) {
    RtlLeaveCriticalSection(param_1 - 0x40);
  }
  else {
    fn_83055CF0(o);
    fn_830543B8(o, 0);
    RtlLeaveCriticalSection(param_1 - 0x40);
    fn_83055EE8(*(void **)(param_1 - 0x18), o);
  }
}
