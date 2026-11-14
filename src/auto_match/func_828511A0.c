int memcmp(const void *a, const void *b, unsigned int n);

typedef struct Frame_828511A0 {
  char pad0[0x40];
  unsigned char *planes[1];
} Frame_828511A0;

typedef struct Ctx_828511A0 {
  char pad0[0x178];
  int words;
} Ctx_828511A0;

int fn_828511A0(Ctx_828511A0 *self, Frame_828511A0 *a, Frame_828511A0 *b, int plane)
{
  return memcmp(a->planes[plane], b->planes[plane], self->words * 4) == 0;
}
