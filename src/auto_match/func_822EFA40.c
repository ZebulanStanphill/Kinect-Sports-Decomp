typedef struct Inner_822EFA40 {
  char pad[0x24];
  int busy;
} Inner_822EFA40;
typedef struct Owner_822EFA40 {
  char pad[0xc];
  Inner_822EFA40 *inner;
} Owner_822EFA40;
extern void fn_822E54B0(Inner_822EFA40 *inner);

void fn_822EFA40(Owner_822EFA40 *self)
{
  Inner_822EFA40 *inner = self->inner;
  if (inner->busy == 0) {
    fn_822E54B0(inner);
  }
}
