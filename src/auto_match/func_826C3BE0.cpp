struct Pair_826C3BE0 { int a; int b; };
struct Vec_826C3BE0;
extern "C" void fn_826A9B58(Vec_826C3BE0 *v, Vec_826C3BE0 *v2, unsigned int n);
struct Vec_826C3BE0 {
  Pair_826C3BE0 *data;
  unsigned int size;
  Vec_826C3BE0 *assign(Vec_826C3BE0 *s);
};
Vec_826C3BE0 *Vec_826C3BE0::assign(Vec_826C3BE0 *s)
{
  unsigned int i;
  fn_826A9B58(this, this, s->size);
  for (i = 0; i < size; i++) {
    data[i] = s->data[i];
  }
  return this;
}
