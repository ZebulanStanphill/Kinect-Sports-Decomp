typedef struct Header_827EFB40 {
    char pad0[0x2e];
    unsigned short base;      /* 0x2e */
    unsigned short pad30;
    unsigned short row;       /* 0x32 */
    char pad34[0x84 - 0x34];
    int *items;               /* 0x84 */
} Header_827EFB40;

extern Header_827EFB40 *fn_827F3C28(void *self);

int *fn_827EFB40(void *self, unsigned short index)
{
    return &fn_827F3C28(self)->items[fn_827F3C28(self)->base + index + fn_827F3C28(self)->row * 12];
}
