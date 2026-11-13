extern void *__imp_ExThreadObjectType;
extern int ObReferenceObjectByHandle(void *, void *, void **);
extern int KeSetAffinityThread(void *, unsigned, unsigned *);
extern void ObDereferenceObject(void *);
extern unsigned int _CountLeadingZeros(unsigned int);
extern void fn_82A31F28(int);

int fn_82A1E508(void *h, unsigned cpu)
{
  int hr;
  void *thr;
  unsigned prev;
  if (cpu < 6) {
    hr = ObReferenceObjectByHandle(h, __imp_ExThreadObjectType, &thr);
    if (hr < 0) goto fail;
    hr = KeSetAffinityThread(thr, 1 << cpu, &prev);
    ObDereferenceObject(thr);
  } else {
    hr = 0xC000000D;
  }
  if (hr >= 0) {
    if (prev != 0) return 0x1f - _CountLeadingZeros(prev);
    return 0;
  }
fail:
  fn_82A31F28(hr);
  return -1;
}
