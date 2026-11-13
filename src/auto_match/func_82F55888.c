extern void *memset(void *, int, unsigned int);
typedef struct Obj_82F55888 {
    int f0;
    int f4;
    int f8;
    int fc;
    unsigned char a[0x50];
    unsigned char b[0x50];
    float fb0;
    float fb4;
    int fb8;
    int fbc;
    unsigned __int64 fc0;
    unsigned __int64 fc8;
} Obj_82F55888;

void fn_82F55888(Obj_82F55888 *o)
{
    memset(o->a, 0, sizeof(o->a));
    memset(o->b, 0, sizeof(o->b));
    o->fb0 = 0.0f;
    o->fb4 = 0.0f;
    o->fc0 = 0;
    o->fc8 = 0;
    o->f8 = 1;
    o->fc = 0;
}
