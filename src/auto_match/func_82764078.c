#define __lwsync() __emit(0x7C2004AC)

typedef struct Rect_82764078 {
    float left;   /* 0x00 */
    float top;    /* 0x04 */
    float right;  /* 0x08 */
    float bottom; /* 0x0C */
} Rect_82764078;

typedef struct Range_82764078 {
    int count; /* 0x00 */
    int first; /* 0x04 */
    int last;  /* 0x08 */
} Range_82764078;

typedef struct Region_82764078 {
    void *vt;             /* 0x00 */
    Rect_82764078 bounds; /* 0x04 */
    int valid;            /* 0x14 */
    Range_82764078 range; /* 0x18 */
    unsigned char flags;  /* 0x24 */
    unsigned char locked; /* 0x25 */
    char pad26[2];
    int field28;        /* 0x28 */
    int field2c;        /* 0x2C */
    int field30;        /* 0x30 */
    int field34;        /* 0x34 */
    int field38;        /* 0x38 */
    float scale;        /* 0x3C */
    Rect_82764078 area; /* 0x40 */
} Region_82764078;

extern char lbl_820147E0[];
extern char lbl_82014840[];

static __forceinline void ClearRect_82764078(Rect_82764078 *rect)
{
    rect->left = 0.0f;
    rect->top = 0.0f;
    rect->right = 0.0f;
    rect->bottom = 0.0f;
}

static __forceinline void ClearRange_82764078(Range_82764078 *range)
{
    range->count = 0;
    range->first = 0;
    range->last = 0;
}

void fn_82764078(Region_82764078 *region)
{
    region->vt = lbl_820147E0;
    ClearRect_82764078(&region->bounds);
    __lwsync();
    region->valid = 1;
    ClearRange_82764078(&region->range);
    ClearRect_82764078(&region->bounds);
    region->flags = 0;
    region->locked = 0;
    region->field28 = 0;
    region->vt = lbl_82014840;
    ClearRect_82764078(&region->area);
    region->scale = 100.0f;
    region->flags |= 0xc0;
    region->field2c = 0;
    region->field30 = 0;
    region->field38 = 0;
    region->field34 = 0;
    ClearRect_82764078(&region->area);
}
