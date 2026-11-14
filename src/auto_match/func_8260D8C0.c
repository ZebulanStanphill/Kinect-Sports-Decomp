extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82A1E968(__int64 *);
extern __int64 lbl_832767D8;

/* One 0x60-byte slot of the table; func_8260D928 reads the same slots from +8. */
typedef struct Slot_8260D8C0 {
  char pad0[0x28];
  __int64 start;
  char pad1[0x34];
  int depth;
} Slot_8260D8C0;

void fn_8260D8C0(Slot_8260D8C0 *slots)
{
  int idx;
  Slot_8260D8C0 *slot;
  __int64 now;
  fn_82A1BB18();
  idx = fn_8259A230();
  slot = (Slot_8260D8C0 *)((char *)slots + idx * 0x60);
  if (++slot->depth == 1) {
    fn_82A1E968(&now);
    slot->start = now - lbl_832767D8;
  }
}
