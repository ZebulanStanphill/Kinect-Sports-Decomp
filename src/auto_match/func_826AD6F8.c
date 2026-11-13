typedef struct Str_826AD6F8 {
    char pad0[8];
    char *buf;
    unsigned size;
} Str_826AD6F8;
typedef struct Ctx_826AD6F8 {
    char pad0[0x288];
    int m288;
} Ctx_826AD6F8;
typedef struct Hold_826AD6F8 {
    char pad0[0x78];
    Ctx_826AD6F8 *m78;
} Hold_826AD6F8;
typedef struct Self_826AD6F8 {
    char pad0[4];
    int s;
} Self_826AD6F8;
typedef struct Dev_826AD6F8 Dev_826AD6F8;
struct Dev_826AD6F8 {
    struct {
        char pad[0x5c];
        Hold_826AD6F8 *(*f5c)(Dev_826AD6F8 *);
    } *vt;
};

extern void *fn_8267B890(int, int, int);
extern void *fn_826AA930(void *, void *, Str_826AD6F8 *);
extern void fn_826C7030(Dev_826AD6F8 *, void *, int);
extern void fn_8267C498(void *);

void fn_826AD6F8(Self_826AD6F8 *self, Dev_826AD6F8 *dev, int arg)
{
    Hold_826AD6F8 *h;
    void *mem;
    void *r;
    unsigned char empty;

    if (self->s != 0) {
        if (((Str_826AD6F8 *)self->s)->size < 1 || *((Str_826AD6F8 *)self->s)->buf == 0) {
            empty = 1;
        } else {
            empty = 0;
        }
        if (!empty) {
            h = dev->vt->f5c(dev);
            mem = fn_8267B890(h->m78->m288, 0x20, 0);
            if (mem != 0) {
                r = fn_826AA930(mem, &h->m78, (Str_826AD6F8 *)self->s);
            } else {
                r = 0;
            }
            fn_826C7030(dev, r, arg);
            if (r != 0) {
                fn_8267C498(r);
            }
        }
    }
}
