typedef struct Unk { struct UnkVt *vt; } Unk;
typedef struct UnkVt { unsigned long (*QueryInterface)(Unk *); unsigned long (*AddRef)(Unk *); } UnkVt;

int fn_82E43790(char *self, Unk **out)
{
  Unk *p;
  if (out == 0) return 0x80070057;
  p = *(Unk **)(self + 0x78);
  *out = p;
  if (p) p->vt->AddRef(p);
  return 0;
}
