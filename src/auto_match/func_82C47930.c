typedef struct Decoder_82C47930 {
    char pad0[0x10];
    int busy; /* 0x10 */
    char pad14[0xb4 - 0x14];
    int lumaHeight;   /* 0xb4 */
    int fb8;          /* 0xb8 */
    int lumaWidth;    /* 0xbc */
    int chromaHeight; /* 0xc0 */
    int fc4;          /* 0xc4 */
    int chromaWidth;  /* 0xc8 */
    char padcc[0x120 - 0xcc];
    int f120; /* 0x120 */
    char pad124[0xd54 - 0x124];
    int fd54; /* 0xd54 */
    int fd58; /* 0xd58 */
    int fd5c; /* 0xd5c */
    char padd60[0xd68 - 0xd60];
    int fd68; /* 0xd68 */
    int fd6c; /* 0xd6c */
    char padd70[0xda4 - 0xd70];
    int fda4; /* 0xda4 */
    char padda8[0xe30 - 0xda8];
    __int64 fe30; /* 0xe30 */
    char pade38[0xe8c - 0xe38];
    int fe8c; /* 0xe8c */
    char pade90[0xe9c - 0xe90];
    unsigned short fe9c; /* 0xe9c */
    char pade9e[0xec0 - 0xe9e];
    unsigned char *planes[6]; /*0xec0 */
    char paded8[0x3a04 - 0xed8];
    int f3a04; /* 0x3a04 */
    char pad3a08[0x3c04 - 0x3a08];
    int hasFrames; /* 0x3c04 */
    char pad3c08[0x3cb0 - 0x3c08];
    int state; /* 0x3cb0 */
    char pad3cb4[0x3d00 - 0x3cb4];
    int f3d00; /* 0x3d00 */
    char pad3d04[0x4fb0 - 0x3d04];
    unsigned int lumaBorder;   /* 0x4fb0 */
    unsigned int chromaBorder; /* 0x4fb4 */
} Decoder_82C47930;

typedef struct Player_82C47930 {
    char pad0[0x2e0];
    Decoder_82C47930 *decoder; /* 0x2e0 */
} Player_82C47930;

extern void *memset(void *dest, int value, unsigned int size);

int fn_82C47930(Player_82C47930 *player)
{
    Decoder_82C47930 *decoder;

    if (player == 0)
        return -3;
    decoder = player->decoder;
    if (decoder->busy != 0)
        return -4;
    decoder->fe8c = 0;
    decoder->fe9c = 0;
    decoder->f3d00 = 0;
    if (decoder->state == 6) {
        decoder->fe30 = 0;
        decoder->f120 = 0;
        decoder->fd54 = -3;
        decoder->fd58 = 0;
        decoder->fd68 = 0;
        decoder->f3a04 = 1;
        decoder->fd5c = 0;
        decoder->fd6c = 0;
        decoder->fda4 = 0;
        if (decoder->hasFrames != 0) {
            unsigned int lumaSize = (decoder->lumaWidth + decoder->lumaBorder * 2) *
                                    (decoder->lumaHeight + decoder->lumaBorder * 2);
            unsigned int chromaSize = (decoder->chromaWidth + decoder->chromaBorder * 2) *
                                      (decoder->chromaHeight + decoder->chromaBorder * 2);

            memset(decoder->planes[0], 0, lumaSize);
            memset(decoder->planes[1], 0x80, chromaSize);
            memset(decoder->planes[2], 0x80, chromaSize);
            memset(decoder->planes[3], 0, lumaSize);
            memset(decoder->planes[4], 0x80, chromaSize);
            memset(decoder->planes[5], 0x80, chromaSize);
        }
    }
    return 0;
}
