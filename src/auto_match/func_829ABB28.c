
typedef struct Jpeg_829ABB28 Jpeg_829ABB28;

typedef struct Error_829ABB28 {
    void (*exit)(Jpeg_829ABB28 *);
    void (*emit)(Jpeg_829ABB28 *, int);
    char pad[12];
    int code;
    int arg;
} Error_829ABB28;

typedef struct Progress_829ABB28 {
    void (*monitor)(Jpeg_829ABB28 *);
    unsigned counter, limit;
} Progress_829ABB28;

typedef struct Main_829ABB28 {
    void *pad;
    void (*process)(Jpeg_829ABB28 *, void *, unsigned *, unsigned);
} Main_829ABB28;

struct Jpeg_829ABB28 {
    Error_829ABB28 *err;
    void *mem;
    Progress_829ABB28 *progress;
    char padc[8];
    int state;
    char pad18[0x74 - 0x18];
    unsigned height;
    char pad78[0x8c - 0x78];
    unsigned scanline;
    char pad90[0x1ac - 0x90];
    Main_829ABB28 *main;
};

unsigned fn_829ABB28(Jpeg_829ABB28 *self, void *scanlines, unsigned count)
{
    unsigned rows;
    if (self->state != 0xcd) {
        self->err->code = 0x14;
        self->err->arg = self->state;
        self->err->exit(self);
    }
    if (self->scanline >= self->height) {
        self->err->code = 0x7b;
        self->err->emit(self, -1);
        return 0;
    }
    if (self->progress) {
        self->progress->counter = self->scanline;
        self->progress->limit = self->height;
        self->progress->monitor(self);
    }
    rows = 0;
    self->main->process(self, scanlines, &rows, count);
    self->scanline += rows;
    return rows;
}
