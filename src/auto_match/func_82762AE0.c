#define __lwsync() __emit(0x7C2004AC)

typedef struct Rect_82762AE0 {
    float left;   /* 0x00 */
    float top;    /* 0x04 */
    float right;  /* 0x08 */
    float bottom; /* 0x0C */
} Rect_82762AE0;

typedef struct Range_82762AE0 {
    int count; /* 0x00 */
    int first; /* 0x04 */
    int last;  /* 0x08 */
} Range_82762AE0;

typedef struct Region_82762AE0 {
    void *vt;             /* 0x00 */
    Rect_82762AE0 bounds; /* 0x04 */
    int valid;            /* 0x14 */
    Range_82762AE0 range; /* 0x18 */
    unsigned char dirty;  /* 0x24 */
    unsigned char locked; /* 0x25 */
    char pad26[2];
    int field28;   /* 0x28 */
    int field2c;   /* 0x2C */
    short field30; /* 0x30 */
    short kind;    /* 0x32 */
    int field34;   /* 0x34 */
    int field38;   /* 0x38 */
    int field3c;   /* 0x3C */
    short field40; /* 0x40 */
} Region_82762AE0;

extern char lbl_820147E0[];
extern char lbl_820148A8[];

static __forceinline void ClearRect_82762AE0(Rect_82762AE0 *rect)
{
    rect->left = 0.0f;
    rect->top = 0.0f;
    rect->right = 0.0f;
    rect->bottom = 0.0f;
}

static __forceinline void ClearRange_82762AE0(Range_82762AE0 *range)
{
    range->count = 0;
    range->first = 0;
    range->last = 0;
}

void fn_82762AE0(Region_82762AE0 *region, short kind)
{
    region->vt = lbl_820147E0;
    ClearRect_82762AE0(&region->bounds);
    __lwsync();
    region->valid = 1;
    ClearRange_82762AE0(&region->range);
    ClearRect_82762AE0(&region->bounds);
    region->dirty = 0;
    region->locked = 0;
    region->vt = lbl_820148A8;
    region->field28 = 0;
    region->field2c = 0;
    region->field30 = 0;
    region->kind = kind;
    region->field34 = 0;
    region->field38 = 0;
    region->field3c = 0;
    region->field40 = 0;
}
