typedef struct { char pad[0xc]; unsigned flag; char pad2[0x10]; char cs[0]; } File_82F6AC80;
typedef struct { char b[0x20]; } Slot_82F6AC80;
extern Slot_82F6AC80 lbl_831BB660[];
extern void _lock(int);
extern void RtlEnterCriticalSection(void *);

void fn_82F6AC80(File_82F6AC80 *f)
{
  if ((Slot_82F6AC80 *)f < lbl_831BB660 || (Slot_82F6AC80 *)f > &lbl_831BB660[19]) {
    RtlEnterCriticalSection(f->cs);
  } else {
    _lock((int)((Slot_82F6AC80 *)f - lbl_831BB660) + 0x10);
    f->flag |= 0x8000;
  }
}
