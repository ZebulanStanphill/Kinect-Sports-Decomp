struct Ent { int id; int pad[2]; unsigned char tag; unsigned char pad2; };
struct Self { char pad[0x44]; Ent *ents; char pad2[0x28]; int idx; int id; unsigned char tag; };

extern "C" bool fn_82817088(Self *s, Ent **out)
{
  Ent *e = (Ent *)((char *)s->ents + s->idx * 0xe);
  *out = e;
  bool r = e->tag == s->tag;
  if (r && e->id == s->id)
    r = false;
  return r;
}
