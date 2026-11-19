typedef struct Track_82FA9A38 {
    char pad00[0x5c];
    int start;  /* 0x5c */
    void *data; /* 0x60 */
} Track_82FA9A38;

typedef struct Stream_82FA9A38 Stream_82FA9A38;

typedef struct StreamVtbl_82FA9A38 {
    void *slots[3];
    unsigned int (*GetLimit)(Stream_82FA9A38 *self, int key, int *value, int *limit); /* 0x0c */
} StreamVtbl_82FA9A38;

struct Stream_82FA9A38 {
    StreamVtbl_82FA9A38 *vt; /* 0x00 */
    char pad04[8];
    int offset; /* 0x0c */
    char pad10[0x30];
    Track_82FA9A38 *track; /* 0x40 */
    int base;              /* 0x44 */
};

extern int fn_82FAE490(void *data, int position, int count, unsigned char clamp, int *out);

int fn_82FA9A38(Stream_82FA9A38 *self, int key, int value, int position, int minimum, int count,
                unsigned char clamp, unsigned char force, int *out)
{
    Track_82FA9A38 *track = self->track;
    int start;
    int result;
    int limit;

    position = position < 0 ? 0 : position;
    if ((int)track != 0) {
        start = track->start;
    } else {
        start = -self->offset;
    }
    if (minimum > start) {
        start = minimum;
    }
    if (self->base > start) {
        start = self->base;
    }
    if (clamp == 0 || start > 0) {
        position += start;
    }
    result = 2;
    if ((int)track != 0) {
        result = fn_82FAE490(track->data, position, count, clamp, out);
    } else if (force != 0 || count == 0) {
        *out = position;
        result = 1;
    }
    *out -= self->base;
    if (result == 1 && self->vt->GetLimit(self, key, &value, &limit) != 0) {
        int end = *out;

        if (self->offset < 0) {
            end += self->offset;
        }
        if (end > limit) {
            return 2;
        }
    }
    return result;
}
