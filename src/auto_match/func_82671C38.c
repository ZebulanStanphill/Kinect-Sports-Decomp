typedef struct Ent_82671C38 { int a; unsigned key; } Ent_82671C38;
typedef struct Obj_82671C38 {
  char pad[0x24];
  Ent_82671C38 *begin;
  Ent_82671C38 *end;
  char pad2[0x140 - 0x2c];
  char cs[1];
} Obj_82671C38;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void *fn_82671620(void *, void *, void *);

int fn_82671C38(Obj_82671C38 *o, unsigned key)
{
  char buf[16];
  char *cs;
  Ent_82671C38 *it;
  Ent_82671C38 *end;

  cs = o->cs;
  if (cs != 0) {
    RtlEnterCriticalSection(cs);
  }
  end = o->end;
  for (it = o->begin; it != end; it++) {
    if (it->key == key) {
      fn_82671620(buf, &o->begin, it);
      if (cs != 0) {
        RtlLeaveCriticalSection(cs);
      }
      return 1;
    }
  }
  if (cs != 0) {
    RtlLeaveCriticalSection(cs);
  }
  return 0;
}
