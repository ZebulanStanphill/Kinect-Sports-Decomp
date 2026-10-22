extern void *__imp_ExThreadObjectType;
extern long ObReferenceObjectByHandle(void *h, void *type, void **obj);
extern long KeSetBasePriorityThread(void *thread, long inc);
extern void ObDereferenceObject(void *obj);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();
extern char *lbl_832179FC;

void fn_829D4EB8(void)
{
  void *thread;
  char *cs;

  if (lbl_832179FC != 0 && *(void **)(lbl_832179FC + 0x8f4b0) != 0) {
    if (ObReferenceObjectByHandle(*(void **)(lbl_832179FC + 0x8f4b0), __imp_ExThreadObjectType, &thread) >= 0) {
      KeSetBasePriorityThread(thread, 0x11);
      ObDereferenceObject(thread);
    }
    cs = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(cs);
    *(unsigned char *)(lbl_832179FC + 0x24974) = 1;
    fn_82A1E810(*(void **)(lbl_832179FC + 0x8f4b8));
    RtlLeaveCriticalSection(cs);
    fn_82A1E650(*(void **)(lbl_832179FC + 0x8f4b0), -1);
    fn_82A1E658(*(void **)(lbl_832179FC + 0x8f4b0));
    *(void **)(lbl_832179FC + 0x8f4b0) = 0;
  }
}
