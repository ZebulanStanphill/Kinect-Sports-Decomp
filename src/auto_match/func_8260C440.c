typedef struct HeapVt_8260C440 HeapVt_8260C440;
typedef struct Heap_8260C440 { HeapVt_8260C440 *vt; } Heap_8260C440;
struct HeapVt_8260C440 { void *s[6]; void (*free)(Heap_8260C440 *, void *, unsigned int); };
extern void fn_822315A0(void *);
extern void fn_8256D798(void *, int, int);
extern void fn_825BF428(void *);
extern void fn_827D9A90(void *);
extern void fn_827D9F20(void *);
extern void fn_827DDF38(void *);
extern unsigned int fn_82811400(void *, int);
extern unsigned int lbl_821CAAD0;
extern Heap_8260C440 *lbl_83156AA0;

unsigned int *fn_8260C440(unsigned int *self, unsigned int flags)
{
  unsigned char auStack_40[32];

  *self = (unsigned int)&lbl_821CAAD0;
  fn_8256D798(self + 0x5b, 1, 0);
  fn_825BF428(self + 0x50);
  fn_827DDF38(self + 0x32);
  fn_827D9F20(self + 0x18);
  if (self[0x17] != 0) {
    fn_822315A0((void *)self[0x17]);
  }
  if (self[0x15] != 0) {
    fn_822315A0((void *)self[0x15]);
  }
  if (self[0x13] != 0) {
    fn_822315A0((void *)self[0x13]);
  }
  fn_827D9A90(self);
  if ((flags & 1) != 0) {
    lbl_83156AA0->vt->free(lbl_83156AA0, self, fn_82811400(auStack_40, 4));
  }
  return self;
}
