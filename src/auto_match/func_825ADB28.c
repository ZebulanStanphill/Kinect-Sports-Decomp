/* Packs a value into a 6-byte bit buffer (fields of 10/5/6/6/10/5 bits) with the fn_828E9D28 bit writer
   and passes the bytes on (the func_822CB0A0 shape). */
typedef struct BitWriter_825ADB28 {
  int bitPos;
  int bytePos;
  void *buffer;
  int size;
  void *inlineBuffer;
  int inlineSize;
  void *heapBuffer;
  int unk1C;
  int unk20;
} BitWriter_825ADB28;

extern void fn_828E9D28(BitWriter_825ADB28 *w, void *buffer, int size);
extern void fn_822CB7F8(BitWriter_825ADB28 *w, void *value, int a, int b, int c, int d, int e, int f);
extern void fn_822D6EA8(void *dst, unsigned char *data);
extern void fn_8265CA20(void *p);

void fn_825ADB28(void *dst, void *value)
{
  unsigned char storage[6] = {0};
  BitWriter_825ADB28 w;
  w.heapBuffer = 0;
  w.unk1C = 0;
  w.unk20 = 0;
  w.inlineBuffer = storage;
  w.inlineSize = 6;
  fn_828E9D28(&w, storage, 6);
  fn_822CB7F8(&w, value, 10, 5, 6, 6, 10, 5);
  fn_822D6EA8(dst, storage);
  if (w.heapBuffer != 0) {
    fn_8265CA20(w.heapBuffer);
  }
}
