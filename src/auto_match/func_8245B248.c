typedef struct String_8245B248 {
    char data[0x1c];
} String_8245B248;

typedef struct Range_8245B248 {
    double low;
    double high;
} Range_8245B248;

typedef struct Stats_8245B248 {
    double start;             /* 0x40 */
    double interval;          /* 0x48 */
    double offset;            /* 0x50 */
    double limit;             /* 0x58 */
    int count;                /* 0x60 */
    String_8245B248 names[2]; /* 0x64 */
    char pad9c[0xc4 - 0x9c];
    int fieldC4; /* 0xc4 */
    int fieldC8; /* 0xc8 */
    int fieldCC; /* 0xcc */
    char padD0[0xd8 - 0xd0];
    int fieldD8; /* 0xd8 */
    char padDC[0xec - 0xdc];
    int fieldEC;          /* 0xec */
    String_8245B248 text; /* 0xf0 */
    int field10c;         /* 0x10c */
    int field110;         /* 0x110 */
    int field114;         /* 0x114 */
    int pad118[2];
    Range_8245B248 times; /* 0x120 */
    char pad130[0x534 - 0x130];
    int field534; /* 0x534 */
    int pad538;
    int field53c; /* 0x53c */
    int field540; /* 0x540 */
    char pad544[0x558 - 0x544];
    int field558; /* 0x558 */
    int field55c; /* 0x55c */
} Stats_8245B248;

typedef struct Session_8245B248 {
    char lock[0x1c];            /* 0x000 */
    char lock2[0x38 - 0x1c];    /* 0x01c */
    int field38;                /* 0x038 */
    int field3c;                /* 0x03c */
    Stats_8245B248 stats;       /* 0x040 */
    int field560;               /* 0x560 */
    int field564;               /* 0x564 */
    void *handles[2];           /* 0x568 */
    int field570;               /* 0x570 */
    int field574;               /* 0x574 */
    int field578;               /* 0x578 */
    int field57c;               /* 0x57c */
    int field580;               /* 0x580 */
    int field584;               /* 0x584 */
    int field588;               /* 0x588 */
    int field58c;               /* 0x58c */
    char block590[0x28];        /* 0x590 */
    double time5b8;             /* 0x5b8 */
    int field5c0;               /* 0x5c0 */
    char block5c4[0x18];        /* 0x5c4 */
    String_8245B248 servers[2]; /* 0x5dc */
    char pad614[0x63c - 0x614];
    int field63c;         /* 0x63c */
    String_8245B248 path; /* 0x640 */
    short field65c;       /* 0x65c */
    short field65e;       /* 0x65e */
    int field660;         /* 0x660 */
    int field664;         /* 0x664 */
    int field668;         /* 0x668 */
    int field66c;         /* 0x66c */
    double time670;       /* 0x670 */
    int pad678[2];
    double time680; /* 0x680 */
    double time688; /* 0x688 */
    short field690; /* 0x690 */
    short pad692;
    int pad694;
    int field698; /* 0x698 */
    int field69c; /* 0x69c */
    int field6a0; /* 0x6a0 */
    int field6a4; /* 0x6a4 */
    int field6a8; /* 0x6a8 */
    int field6ac; /* 0x6ac */
    int field6b0; /* 0x6b0 */
    int field6b4; /* 0x6b4 */
    int field6b8; /* 0x6b8 */
    char pad6bc[0x6c8 - 0x6bc];
    char queue[0x718 - 0x6c8]; /* 0x6c8 */
    int field718;              /* 0x718 */
    int field71c;              /* 0x71c */
} Session_8245B248;

extern char lbl_82196582[];

extern void fn_82230300(String_8245B248 *s, int built, unsigned int size);
extern void fn_822B2888(String_8245B248 *s, unsigned int capacity);
extern void fn_82230110(String_8245B248 *s, const char *text);
extern void fn_82579B78(void *queue);
extern void XMemSet(void *dst, int value, unsigned int size);
extern void RtlInitializeCriticalSection(void *lock);

static __forceinline void ConstructStrings(String_8245B248 *strings)
{
    fn_82230300(&strings[0], 0, 0);
    fn_82230300(&strings[1], 0, 0);
}

static __forceinline void SetRange(Range_8245B248 *r, double low, double high)
{
    r->low = low;
    r->high = high;
}

static __forceinline void InitStats(Stats_8245B248 *s)
{
    s->count = 0;
    s->start = 0.0;
    s->interval = 5.0;
    s->offset = 0.0;
    s->limit = 120.0;
    ConstructStrings(s->names);
    s->fieldC4 = 0;
    s->fieldC8 = 0;
    s->fieldCC = 0;
    s->fieldD8 = 0;
    s->fieldEC = 0;
    fn_82230300(&s->text, 0, 0);
    s->field10c = 0;
    s->field110 = 0;
    s->field114 = 0;
    SetRange(&s->times, 0.0, 0.0);
    s->field534 = 0;
    s->field53c = 0;
    s->field540 = 0;
    s->field558 = 0;
    s->field55c = 0;
    fn_822B2888(&s->text, 0x400);
}

Session_8245B248 *fn_8245B248(Session_8245B248 *self)
{
    int i;

    self->field38 = 0;
    self->field3c = 0;
    InitStats(&self->stats);
    self->time5b8 = 0.0;
    self->field560 = 0;
    self->field564 = 0;
    self->field570 = 0;
    self->field574 = 0;
    self->field578 = 0;
    self->field57c = 1;
    self->field580 = 0;
    self->field584 = 0;
    self->field588 = 0;
    self->field58c = 0;
    self->field5c0 = 0;
    ConstructStrings(self->servers);
    self->field63c = 0;
    fn_82230110(&self->path, lbl_82196582);
    self->field65c = 0;
    self->time670 = 30.0;
    self->time680 = 0.0;
    self->time688 = 0.0;
    self->field65e = 0;
    self->field660 = 1;
    self->field664 = 1;
    self->field668 = 0x8000;
    self->field66c = 0x8000;
    self->field690 = (short)0xabab;
    self->field698 = 0;
    self->field69c = 0;
    self->field6a0 = 0;
    self->field6a4 = 0;
    self->field6a8 = 0;
    self->field6ac = 0;
    self->field6b0 = 0;
    self->field6b4 = 1;
    fn_82579B78(self->queue);
    self->field71c = 0;
    self->field718 = 3;
    XMemSet(self->block590, 0, 0x28);
    XMemSet(self->block5c4, 0, 0x18);
    for (i = 0; i < 2; i++) {
        if (self->handles[i] != 0)
            self->handles[i] = 0;
    }
    RtlInitializeCriticalSection(self->lock);
    RtlInitializeCriticalSection(self->lock2);
    self->field6b8 = 0;
    return self;
}
