/* CMassiveRecordImpression (constructor fn_82BF8DF8) */
typedef struct Impression_82BF8F68 {
    char pad0[0x14];
    int type;           /* 0x14 */
    int f18;            /* 0x18 */
    unsigned short f1c; /* 0x1c */
    float f20;          /* 0x20 */
    unsigned short f24; /* 0x24 */
    float f28;          /* 0x28 */
    unsigned short f2c; /* 0x2c */
    int f30;            /* 0x30 */
    int f34;            /* 0x34 */
    int f38;            /* 0x38 */
    int pad3c;
    unsigned __int64 t40; /* 0x40 */
    unsigned __int64 t48; /* 0x48 */
    unsigned __int64 t50; /* 0x50 */
    unsigned short f58;   /* 0x58 */
    char pad5a[0x6];
} Impression_82BF8F68;

/* CMassiveRecord (constructor fn_82BF8E90) */
typedef struct Record_82BF8F68 {
    char pad0[0x20];
    Impression_82BF8F68 first;  /* 0x20 */
    Impression_82BF8F68 second; /* 0x80 */
} Record_82BF8F68;

extern void fn_82BF8D78(Record_82BF8F68 *record);

static __forceinline void ResetImpression(Impression_82BF8F68 *impression, int type)
{
    impression->type = type;
    impression->f34 = 0;
    impression->f28 = 0.0f;
    impression->f30 = 0;
    impression->f20 = 0.0f;
    impression->f18 = 0;
    impression->t50 = 0;
    impression->t48 = 0;
    impression->t40 = 0;
    impression->f2c = 0;
    impression->f58 = 0;
    impression->f24 = 0;
    impression->f1c = 0;
}

void fn_82BF8F68(Record_82BF8F68 *record)
{
    ResetImpression(&record->first, record->first.type);
    ResetImpression(&record->second, record->second.type);
    fn_82BF8D78(record);
}
