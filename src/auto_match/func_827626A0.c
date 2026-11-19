#define __lwsync() __emit(0x7C2004AC)

typedef struct Rect_827626A0 {
    float left;   /* 0x00 */
    float top;    /* 0x04 */
    float right;  /* 0x08 */
    float bottom; /* 0x0C */
} Rect_827626A0;

typedef struct Range_827626A0 {
    int count; /* 0x00 */
    int first; /* 0x04 */
    int last;  /* 0x08 */
} Range_827626A0;

typedef struct Region_827626A0 {
    void *vt;             /* 0x00 */
    Rect_827626A0 bounds; /* 0x04 */
    int valid;            /* 0x14 */
    Range_827626A0 range; /* 0x18 */
    unsigned char dirty;  /* 0x24 */
    unsigned char locked; /* 0x25 */
} Region_827626A0;

extern char lbl_820147E0[];

static __forceinline void ClearRect_827626A0(Rect_827626A0 *rect)
{
    rect->left = 0.0f;
    rect->top = 0.0f;
    rect->right = 0.0f;
    rect->bottom = 0.0f;
}

static __forceinline void ClearRange_827626A0(Range_827626A0 *range)
{
    range->count = 0;
    range->first = 0;
    range->last = 0;
}

void fn_827626A0(Region_827626A0 *region)
{
    region->vt = lbl_820147E0;
    ClearRect_827626A0(&region->bounds);
    __lwsync();
    region->valid = 1;
    ClearRange_827626A0(&region->range);
    ClearRect_827626A0(&region->bounds);
    region->dirty = 0;
    region->locked = 0;
}
