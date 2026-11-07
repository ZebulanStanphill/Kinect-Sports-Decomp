typedef struct BitWriter_828ACA08 {
  int bitPos;
  int bytePos;
  void *buffer;
  int size;
  void *inlineBuffer;
  int inlineSize;
  void *heapBuffer;
  int unk1C;
  int unk20;
} BitWriter_828ACA08;

extern void fn_828E9D28(BitWriter_828ACA08 *w, void *buffer, int size);
extern void fn_8223C478(BitWriter_828ACA08 *w, int bits, int unk);
extern void fn_828E9F18(BitWriter_828ACA08 *w, unsigned int value, int bits);
extern void fn_828E9D40(BitWriter_828ACA08 *w);
extern void fn_828AC768(void *dst, BitWriter_828ACA08 *w);
extern void fn_8265CA20(void *p);

void fn_828ACA08(void *dst, unsigned int value)
{
  unsigned char storage[16];
  BitWriter_828ACA08 w;
  w.heapBuffer = 0;
  w.unk1C = 0;
  w.unk20 = 0;
  w.inlineBuffer = storage;
  w.inlineSize = 2;
  fn_828E9D28(&w, storage, 2);
  fn_8223C478(&w, 0xc, 0);
  fn_828E9F18(&w, value, 0xc);
  fn_828E9D40(&w);
  fn_828AC768(dst, &w);
  if (w.heapBuffer != 0) {
    fn_8265CA20(w.heapBuffer);
  }
}
