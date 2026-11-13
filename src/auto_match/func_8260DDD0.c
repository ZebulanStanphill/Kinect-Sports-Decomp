typedef struct Vec2_8260DDD0 {
    float x;
    float y;
} Vec2_8260DDD0;

typedef struct Pair_8260DDD0 {
    int a;
    int b;
} Pair_8260DDD0;

typedef struct Desc_8260DDD0 {
    int a;
    int b;
    int c;
    int d;
    Vec2_8260DDD0 v[2];
    Pair_8260DDD0 tail;
} Desc_8260DDD0;

void *memset(void *, int, unsigned int);
extern void fn_8260BA88(void *dst, Desc_8260DDD0 *desc);

void fn_8260DDD0(char *self)
{
    Desc_8260DDD0 desc;
    int i;

    desc.d = 0;
    desc.a = 0;
    desc.b = 0;
    desc.c = 0;
    for (i = 0; i < 2; i++) {
        desc.v[i].y = 0.0f;
        desc.v[i].x = 0.0f;
    }
    memset(&desc.tail, 0, sizeof(desc.tail));
    fn_8260BA88(self + 0x10, &desc);
}
