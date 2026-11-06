extern void fn_82D94918(int, int);
typedef struct Vec_82D82548 { int *data; int count; } Vec_82D82548;
typedef struct Inner_82D82548 { char pad[0x48]; Vec_82D82548 v; } Inner_82D82548;
typedef struct Outer_82D82548 { char pad[0x28]; Vec_82D82548 v; } Outer_82D82548;
unsigned char *fn_82D82548(unsigned char *out, Outer_82D82548 *o, int arg)
{
  Vec_82D82548 *vec = &o->v;
  Inner_82D82548 **it = (Inner_82D82548 **)vec->data;
  if (it != (Inner_82D82548 **)vec->data + vec->count) {
    do {
      Inner_82D82548 *in = *it;
      Vec_82D82548 *iv = &in->v;
      int i = 0;
      if (0 < iv->count) {
        int off = 0;
        do {
          fn_82D94918(arg, *(int *)((char *)iv->data + off));
          i++;
          off += 4;
        } while (i < iv->count);
      }
      it++;
    } while (it != (Inner_82D82548 **)vec->data + vec->count);
  }
  *out = vec->count > 0;
  return out;
}
