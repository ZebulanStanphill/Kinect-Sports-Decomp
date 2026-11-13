// Kinect Sports retail 4D5308C9, function 0x82668328 (84 bytes).
// Pair constructor: first = *fn_8265D5A8(a), second = *fn_82BA02A8(b) (a byte).
typedef struct { unsigned a; unsigned char b; } Pair_82668328;
extern unsigned *fn_8265D5A8(void *);
extern unsigned char *fn_82BA02A8(void *);
Pair_82668328 *fn_82668328(Pair_82668328 *self, void *first, void *second)
{
  self->a = *fn_8265D5A8(first);
  self->b = *fn_82BA02A8(second);
  return self;
}
