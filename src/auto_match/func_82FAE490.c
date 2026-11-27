typedef struct Entry_82FAE490 {
    unsigned int key;      /* 0x0 */
    unsigned int position; /* 0x4 */
} Entry_82FAE490;

typedef struct Vector_82FAE490 {
    Entry_82FAE490 *begin; /* 0x0 */
    Entry_82FAE490 *end;   /* 0x4 */
} Vector_82FAE490;

typedef struct Map_82FAE490 {
    unsigned char pad00[0xa0];
    Vector_82FAE490 entries; /* 0xa0 */
} Map_82FAE490;

typedef struct Steps_82FAE490 {
    int word;       /* 0x0 */
    int line;       /* 0x4 */
    int pageFirst;  /* 0x8 */
    int pageSecond; /* 0xc */
} Steps_82FAE490;

extern Steps_82FAE490 *fn_82FAF750(Map_82FAE490 *self);
extern int fn_82FAE338(Map_82FAE490 *self, int position, int first, int second, int *out);
extern unsigned int fn_82FAE198(Map_82FAE490 *self, unsigned int position, unsigned char clamp);
extern int fn_82FAE1F0(Map_82FAE490 *self, unsigned int position, unsigned int *out);

static __forceinline Entry_82FAE490 *Front(const Vector_82FAE490 *entries)
{
    return entries->begin;
}

static __forceinline Entry_82FAE490 *Back(const Vector_82FAE490 *entries)
{
    return entries->end - 1;
}

int fn_82FAE490(Map_82FAE490 *self, int position, unsigned int mode, unsigned char clamp, int *out)
{
    int result = 2;
    Steps_82FAE490 *steps;

    if (clamp && position < 0) {
        position = 0;
    } else if (position < -(int)self->entries.begin->position) {
        position = -(int)self->entries.begin->position;
    }
    if (position <= (int)(self->entries.end[-1].position - self->entries.begin->position)) {
        switch (mode) {
        case 0:
            *out = position;
            result = 1;
            break;
        case 1:
            steps = fn_82FAF750(self);
            result = fn_82FAE338(self, position, steps->pageFirst, steps->pageSecond, out);
            break;
        case 3:
            steps = fn_82FAF750(self);
            result = fn_82FAE338(self, position, steps->word, 0, out);
            break;
        case 2:
            result = fn_82FAE338(self, position, fn_82FAF750(self)->line, 0, out);
            break;
        case 4:
            *out = fn_82FAE198(self, position, clamp);
            result = 1;
            break;
        case 5:
            result = fn_82FAE1F0(self, position, (unsigned int *)out);
            break;
        case 7:
            *out = Back(&self->entries)->position - Front(&self->entries)->position;
            result = 1;
            break;
        case 6:
            if (position <= 0 && !clamp) {
                *out = 0;
                result = 1;
                break;
            }
            break;
        default:
            result = 2;
            break;
        }
    }
    return result;
}
