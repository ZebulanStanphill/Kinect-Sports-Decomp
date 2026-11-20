extern unsigned __int64 __mftb();

typedef struct TimerEntryA {
    const char *name;
    unsigned int time;
    int pad;
    const char *name2;
} TimerEntryA;

typedef struct TimerEntryB {
    const char *name;
    unsigned int time;
    unsigned int pad;
} TimerEntryB;

typedef struct TimerStream {
    void *pad;
    char *current;
    void *pad2;
    char *end;
} TimerStream;

extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

typedef struct Block_82DC51F0 {
    int v[4];
} Block_82DC51F0;

typedef struct Cfg_82DC51F0 {
    char pad00[0x14];
    int f14; /* 0x14 */
    char pad18[0x30 - 0x18];
    int f30; /* 0x30 */
    char pad34[0x3c - 0x34];
    int f3c; /* 0x3c */
    int f40; /* 0x40 */
    char pad44[0x54 - 0x44];
    unsigned short f54; /* 0x54 */
    char pad56[0x78 - 0x56];
    int f78; /* 0x78 */
} Cfg_82DC51F0;

typedef struct Arg_82DC51F0 {
    char pad00[0x10];
    unsigned short f10; /* 0x10 */
    int f14;            /* 0x14 */
    Cfg_82DC51F0 *cfg;  /* 0x18 */
    int f1c;            /* 0x1c */
    char *buffer;       /* 0x20 */
    int f24;            /* 0x24 */
    int f28;            /* 0x28 */
    int f2c;            /* 0x2c */
    int blocksOffset;   /* 0x30 */
    int f34;            /* 0x34 */
    unsigned int size;  /* 0x38 */
} Arg_82DC51F0;

typedef struct Job_82DC51F0 {
    unsigned char type; /* 0x00 */
    unsigned char f01;  /* 0x01 */
    unsigned char f02;  /* 0x02 */
    unsigned short f04; /* 0x04 */
    unsigned short f06; /* 0x06 */
    char pad08[0x10 - 0x08];
    unsigned short f10; /* 0x10 */
    int f14;            /* 0x14 */
    Cfg_82DC51F0 *cfg;  /* 0x18 */
    int f1c;            /* 0x1c */
    int f20;            /* 0x20 */
    char pad24[0x30 - 0x24];
    int f30;            /* 0x30 */
    unsigned short f34; /* 0x34 */
    unsigned short f36; /* 0x36 */
    char pad38[0x80 - 0x38];
} Job_82DC51F0;

extern void fn_830ABD78(char *solver, char *a, char *b, Block_82DC51F0 *blocks);
extern void fn_82CE8AF0(void *out, Job_82DC51F0 *job, int flags);
extern void fn_830B1390(char *solver, int a, int b, int c);
extern void fn_82CE8E78(void *out, Arg_82DC51F0 *a, Arg_82DC51F0 *b, int flags);

void fn_82DC51F0(char **self, void *out, Arg_82DC51F0 *a)
{
    TimerStream *s;
    TimerEntryA *ea;
    TimerEntryB *eb;
    Cfg_82DC51F0 *c;
    Block_82DC51F0 *blocks;
    Job_82DC51F0 job;
    char *buffer;
    char *first;
    char *second;
    int i;
    int n;

    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        ea = (TimerEntryA *)s->current;
        ea->name = "LtIntegrate";
        ea->name2 = "StSolve";
        ea->time = (unsigned)__mftb();
        s->current = (char *)(ea + 1);
    }
    buffer = a->buffer;
    second = buffer + a->f28;
    first = buffer + a->f2c;
    blocks = (Block_82DC51F0 *)(buffer + a->blocksOffset);
    n = (a->size * 4 + 15) >> 4;
    for (i = 0; i < n; i++) {
        blocks[i].v[0] = 0;
        blocks[i].v[1] = 0;
        blocks[i].v[2] = 0;
        blocks[i].v[3] = 0;
    }
    fn_830ABD78(*self + 0x1e0, first, second, blocks);
    job.type = 0xb;
    job.f01 = 0;
    job.f02 = 2;
    job.f04 = 0x40;
    job.f06 = 0xffff;
    job.f10 = a->f10;
    job.f14 = a->f14;
    c = a->cfg;
    job.cfg = c;
    job.f1c = a->f1c;
    job.f20 = c->f78;
    job.f36 = 0;
    job.f34 = c->f54;
    job.f30 = c->f14;
    fn_82CE8AF0(out, &job, 0);
    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        eb = (TimerEntryB *)s->current;
        eb->name = "StSolverExport";
        eb->time = (unsigned)__mftb();
        s->current = (char *)(eb + 1);
    }
    fn_830B1390(*self + 0x1e0, c->f40, c->f3c, c->f30);
    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        eb = (TimerEntryB *)s->current;
        eb->name = "lt";
        eb->time = (unsigned)__mftb();
        s->current = (char *)(eb + 1);
    }
    fn_82CE8E78(out, a, a, 0);
}
