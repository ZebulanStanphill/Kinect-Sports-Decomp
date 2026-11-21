typedef struct Info_829F7D28 {
    unsigned int words[6];
} Info_829F7D28;

typedef struct Source_829F7D28 {
    char pad0[0x1c];
    Info_829F7D28 info; /* 0x1c */
} Source_829F7D28;

typedef struct Message_829F7D28 {
    int type;               /* 0x00 */
    Info_829F7D28 infos[7]; /* 0x04 */
} Message_829F7D28;

void *memset(void *dst, int value, unsigned int size);
extern void fn_82645CF8(void *target, int type, void *data, unsigned int size);

static __forceinline void SetInfo(Info_829F7D28 *info, Source_829F7D28 *source)
{
    int i;

    if (source != 0) {
        *info = source->info;
    } else {
        for (i = 0; i < 6; i++)
            info->words[i] = 0;
    }
}

void fn_829F7D28(void *target, Source_829F7D28 *a, Source_829F7D28 *b, Source_829F7D28 *c, Source_829F7D28 *d,
                 Source_829F7D28 *e, Source_829F7D28 *f, Source_829F7D28 *g)
{
    Message_829F7D28 message;

    memset(&message, 0, sizeof(message));
    message.type = 0;
    SetInfo(&message.infos[0], a);
    SetInfo(&message.infos[1], b);
    SetInfo(&message.infos[2], c);
    SetInfo(&message.infos[3], d);
    SetInfo(&message.infos[4], e);
    SetInfo(&message.infos[5], f);
    SetInfo(&message.infos[6], g);
    fn_82645CF8(target, 1, &message, sizeof(message));
}
