typedef struct BitWriter_822CB0A0 {
  int bitPos;
  int bytePos;
  void *buffer;
  int size;
  void *inlineBuffer;
  int inlineSize;
  void *heapBuffer;
  int unk1C;
  int unk20;
} BitWriter_822CB0A0;

extern void fn_828E9D28(BitWriter_822CB0A0 *w, void *buffer, int size);
extern void fn_822CB608(BitWriter_822CB0A0 *w, void *value);
extern void fn_82248CC8(void *dst, unsigned char *data);
extern void fn_8265CA20(void *p);

void fn_822CB0A0(void *dst, void *value)
{
  unsigned char storage[4] = {0};
  BitWriter_822CB0A0 w;
  w.heapBuffer = 0;
  w.unk1C = 0;
  w.unk20 = 0;
  w.inlineBuffer = storage;
  w.inlineSize = 4;
  fn_828E9D28(&w, storage, 4);
  fn_822CB608(&w, value);
  fn_82248CC8(dst, storage);
  if (w.heapBuffer != 0) {
    fn_8265CA20(w.heapBuffer);
  }
}
