typedef struct Unk_82E46C10 Unk_82E46C10;
typedef struct {
  void *QueryInterface;
  unsigned long (*AddRef)(Unk_82E46C10 *);
} UnkVt_82E46C10;
struct Unk_82E46C10 { UnkVt_82E46C10 *vt; };
typedef struct {
  char pad0[0x64];
  unsigned int count;
  char pad68[0xc];
  Unk_82E46C10 **items;
} Obj_82E46C10;
long fn_82E46C10(Obj_82E46C10 *o, unsigned int i, Unk_82E46C10 **out)
{
  long hr = 0;
  Unk_82E46C10 **slot;
  Unk_82E46C10 *p;
  if (i >= o->count) {
    hr = 0x80070057;
    goto done;
  }
  if (out == 0) {
    hr = 0x80070057;
    goto done;
  }
  slot = &o->items[i];
  if (slot == 0 || (p = *slot) == 0) {
    hr = 0x8000ffff;
    goto done;
  }
  *out = p;
  p->vt->AddRef(p);
done:
  return hr;
}
