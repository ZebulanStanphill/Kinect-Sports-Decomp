typedef struct { int active; unsigned char data[16]; } Slot_82BE6A00;
typedef struct { char pad[0x90]; Slot_82BE6A00 slots[4]; } Mgr_82BE6A00;
extern char *fn_82BE1A10(void);
extern void fn_82BEA1F8(void *, const char *);
extern void fn_82BEA230(void *, const char *);
extern int fn_82BE6268(void *, void *, int);

int fn_82BE6A00(void *self)
{
  const char *name;
  Slot_82BE6A00 *slots;
  unsigned char i;
  union { unsigned char b; unsigned short h; int w; } v;
  name = "CRequestObject::WritePlayerUpdateBlocks";
  fn_82BEA1F8(fn_82BE1A10() + 0x58, name);
  slots = ((Mgr_82BE6A00 *)fn_82BE1A10())->slots;
  for (i = 0; i < 4; i++) {
    Slot_82BE6A00 *s = &slots[i];
    if (s->active != 0) {
      v.b = 0xe4;
      if (fn_82BE6268(self, &v, 1) == 0) return 0;
      v.w = 0x15;
      if (fn_82BE6268(self, &v, 4) == 0) return 0;
      v.b = 0x57;
      if (fn_82BE6268(self, &v, 1) == 0) return 0;
      v.b = i;
      if (fn_82BE6268(self, &v, 1) == 0) return 0;
      v.b = 0x41;
      if (fn_82BE6268(self, &v, 1) == 0) return 0;
      v.h = 0x10;
      if (fn_82BE6268(self, &v, 2) == 0) return 0;
      if (fn_82BE6268(self, s->data, 0x10) == 0) return 0;
    }
  }
  fn_82BEA230(fn_82BE1A10() + 0x58, name);
  return 1;
}
