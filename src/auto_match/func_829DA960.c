typedef struct Slot {
  int state;
  int x4;
  int x8;
  int xc;
  int x10;
  int x14;
} Slot;

typedef struct Info {
  int value;
  int flags;
} Info;

extern int lbl_83215000[];
extern char *lbl_832179FC;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

int fn_829DA960(unsigned int idx, Info *out)
{
  void *cs;
  Slot *s;
  int v;

  if (idx >= 8) {
    return 0x80070057;
  }
  if (out == 0) {
    return 0x80070057;
  }
  if (lbl_83215000[0x2148 / 4] == 0 || lbl_832179FC == 0) {
    return 0x83010005;
  }
  cs = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(cs);
  s = (Slot *)(lbl_832179FC + idx * sizeof(Slot));
  out->flags = 0;
  out->value = 0xfe;
  if (s->state != 0 && s->state != 3) {
    v = s->xc;
    out->flags = 1;
    out->value = v;
    if (s->x8 == 0) {
      out->flags = 0x40000001;
    }
  }
  RtlLeaveCriticalSection(cs);
  return 0;
}
