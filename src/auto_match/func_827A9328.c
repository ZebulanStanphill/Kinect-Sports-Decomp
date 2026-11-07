typedef struct ShortClip_827A9328 {
    int unk0[4];
    int start;
    short unk14;
    unsigned short length;
    char unk18[5];
    signed char offset;
} ShortClip_827A9328;

typedef struct LongClip_827A9328 {
    int unk0[4];
    int start;
    int unk14;
    int length;
    char unk1c[12];
    short offset;
} LongClip_827A9328;

typedef union Clip_827A9328 {
    struct {
        unsigned int isShort : 1;
        unsigned int unk0 : 31;
    } hdr;
    ShortClip_827A9328 s;
    LongClip_827A9328 l;
} Clip_827A9328;

typedef struct Track_827A9328 {
    Clip_827A9328 **clips;
    unsigned int count;
    char unk8[0x6c];
    unsigned char pad74 : 5;
    unsigned char loop : 1;
    unsigned char unk74 : 2;
} Track_827A9328;

typedef struct Cursor_827A9328 {
    Track_827A9328 *track;
    int unk4;
    unsigned int index;
    float time;
    unsigned char loop;
} Cursor_827A9328;

extern void fn_827A83F8(void);
extern unsigned int fn_827A8630(Track_827A9328 *track, unsigned int first, unsigned int last, float *key, void *compare);

Cursor_827A9328 fn_827A9328(Track_827A9328 *track, float time)
{
    Cursor_827A9328 result;
    unsigned int index;
    Clip_827A9328 *clip;
    float t = time;
    unsigned int isShort;
    int start;
    int length;
    int offset;

    if (track->count != 0) {
        index = fn_827A8630(track, 0, track->count, &time, (void *)fn_827A83F8);
        if (index == track->count) {
            index--;
        }
        clip = track->clips[index];
        isShort = clip->hdr.isShort;
        if (t >= (float)(isShort ? clip->s.start : clip->l.start)) {
            start = isShort ? clip->s.start : clip->l.start;
            length = isShort ? clip->s.length : clip->l.length;
            offset = isShort ? clip->s.offset : clip->l.offset;
            if (t < (float)(offset + length + start)) {
                result.track = track;
                result.unk4 = 0;
                result.index = index;
                result.time = 0.0f;
                result.loop = track->loop;
                return result;
            }
        }
    }
    result.track = 0;
    result.unk4 = 0;
    result.index = 0;
    result.time = 0.0f;
    result.loop = 0;
    return result;
}
