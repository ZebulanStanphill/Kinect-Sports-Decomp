typedef struct Buffer_8305B2E8 {
    int pad0;
    unsigned int size;    /* 0x04 */
    char *base;           /* 0x08 */
    char *cur;            /* 0x0c */
} Buffer_8305B2E8;

void *memset(void *dst, int c, unsigned int n);

void fn_8305B2E8(Buffer_8305B2E8 *b)
{
  if (b->size != 0) {
    memset(b->base, 0, b->size);
    b->cur = b->base;
  }
}
