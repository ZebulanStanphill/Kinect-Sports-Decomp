typedef struct {unsigned pad:30; unsigned active:1; unsigned busy:1;} Flags_82BC3588;
extern void fn_82BBFDD0(unsigned);
extern void fn_82BBFFC8(int,unsigned);
extern unsigned *fn_82BC0088(int,unsigned);
void fn_82BC3588(unsigned self)
{
  unsigned i, offset;
  int array;
  unsigned *entry;
  ((Flags_82BC3588 *)(self + 0xe4))->busy = 0;
  fn_82BBFDD0(self);
  if ((unsigned char)((Flags_82BC3588 *)(self + 0xe4))->active) {
    i = 0;
    array = *(int *)(*(int *)(*(int *)(self + 0x3b8) + 0xab0) + 0x60);
    if (*(unsigned *)(array + 4) != 0) {
      offset = 0;
      do {
        if (i < *(unsigned *)(array + 4)) entry = (unsigned *)(*(unsigned *)(array + 8) + offset);
        else entry = fn_82BC0088(array,i);
        if (*entry == self) fn_82BBFFC8(array,i);
        ++i;
        offset += 4;
      } while (i < *(unsigned *)(array + 4));
    }
  }
}
