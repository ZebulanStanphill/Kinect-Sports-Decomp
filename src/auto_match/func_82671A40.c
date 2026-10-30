typedef struct Ent_82671A40 { int a; unsigned key; } Ent_82671A40;
typedef struct Obj_82671A40 {
  char pad[0x14];
  Ent_82671A40 *begin;
  Ent_82671A40 *end;
  char pad2[0x124 - 0x1c];
  char cs[1];
} Obj_82671A40;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void *fn_82671620(void *, void *, void *);

int fn_82671A40(Obj_82671A40 *o, unsigned key)
{
  char buf[16];
  char *cs;
  Ent_82671A40 *it;
  Ent_82671A40 *end;

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
