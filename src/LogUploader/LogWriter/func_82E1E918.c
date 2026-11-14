typedef struct Entry_82E1E918 {
  int size;
  void *data;
  struct Entry_82E1E918 *next;
} Entry_82E1E918;

typedef struct Writer_82E1E918 {
  char pad0[0x14];
  unsigned char busy;
  unsigned char quit;
  char pad16[0x18 - 0x16];
  Entry_82E1E918 *queue;
  char pad1c[0x3c - 0x1c];
  void *event;
} Writer_82E1E918;

typedef struct Lock_82E1E918 {
  int words[4];
} Lock_82E1E918;

extern void fn_82A1E108(int ms);
extern void fn_8251C390(Lock_82E1E918 *lock, const char *file, int line);
extern void fn_829E53B0(Lock_82E1E918 *lock);
extern void fn_82E1E6E0(Writer_82E1E918 *self, void *data, int size);
extern void fn_82A1F2F8(void);
extern void fn_82E21B50(Entry_82E1E918 *e);
extern void fn_8265CA20(void *p);
extern void fn_82A1E810(void *event);

int fn_82E1E918(Writer_82E1E918 *self)
{
  while (!self->quit) {
    fn_82A1E108(0xfa);
    while (self->queue != 0 && !self->quit) {
      Lock_82E1E918 lock;
      Entry_82E1E918 *e;
      fn_8251C390(&lock, ".\\LogWriter.cpp", 0x30b);
      fn_82E1E6E0(self, self->queue->data, self->queue->size);
      while (self->busy) {
        fn_82A1F2F8();
        fn_82A1E108(0x19);
      }
      e = self->queue;
      self->queue = self->queue->next;
      if (e != 0) {
        fn_82E21B50(e);
        fn_8265CA20(e);
      }
      fn_829E53B0(&lock);
    }
    fn_82A1E810(self->event);
  }
  return 0;
}
