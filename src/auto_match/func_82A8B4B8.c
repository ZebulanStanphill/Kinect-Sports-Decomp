typedef struct Buf_82A8B4B8 {
    int pad0;
    unsigned int size;          /* 0x04 */
    char pad8[8];
    unsigned int used;          /* 0x10 */
} Buf_82A8B4B8;

int fn_82A8B4B8(Buf_82A8B4B8 *self, unsigned int count)
{
    return self->used + count <= self->size;
}
