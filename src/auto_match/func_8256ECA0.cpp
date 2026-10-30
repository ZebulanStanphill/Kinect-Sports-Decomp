struct Item_8256ECA0 { char pad[0x58]; void *f58; void *f5c; void *f60; void *f64; };
struct Vec_8256ECA0 {
  Item_8256ECA0 **first; Item_8256ECA0 **last; Item_8256ECA0 **end;
  unsigned int size() const { return last - first; }
  Item_8256ECA0 *&operator[](unsigned int i) { return first[i]; }
};
struct Self_8256ECA0 { Vec_8256ECA0 *v; char pad[0xbc - 4]; void *fbc; };
extern "C" {
void fn_8251FA58(void *);
void fn_82522ED8(void *);
void fn_8265CA20(void *);
}

extern "C" void fn_8256ECA0(Self_8256ECA0 *s)
{
  fn_8251FA58(s->fbc);
  for (unsigned int i = 0; i < s->v->size(); i++) {
    Item_8256ECA0 *it = (*s->v)[i];
    fn_82522ED8(it->f58);
    fn_82522ED8(it->f5c);
    fn_82522ED8(it->f60);
    fn_82522ED8(it->f64);
    fn_82522ED8(it);
  }
  Vec_8256ECA0 *v = s->v;
  if (v != 0) {
    if (v->first != 0)
      fn_8265CA20(v->first);
    v->first = 0;
    v->last = 0;
    v->end = 0;
    fn_8265CA20(v);
  }
  fn_82522ED8(s);
}
