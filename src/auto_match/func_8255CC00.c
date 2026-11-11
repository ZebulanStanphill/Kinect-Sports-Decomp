// Tests the midpoint of a segment against the query's shape (fn_825BBD78); if it is inside,
// hands the segment to the query's callback, otherwise returns 1.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Segment_8255CC00 {
    __vector4 start;         // 0x00
    __vector4 end;           // 0x10
} Segment_8255CC00;

typedef struct Query_8255CC00 {
    void *shape;                                         // 0x00
    int (*callback)(Segment_8255CC00 *segment, void *context);  // 0x04
    void *context;                                       // 0x08
} Query_8255CC00;

extern const float lbl_8218E8E8[5];
extern int fn_825BBD78(void *shape, __vector4 *point, int flags);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

int fn_8255CC00(Segment_8255CC00 *segment, Query_8255CC00 *query)
{
    __vector4 middle;

    middle = __vmaddfp(__vsubfp(segment->end, segment->start), Replicate(lbl_8218E8E8[0]), segment->start);
    if (fn_825BBD78(query->shape, &middle, 0) != 0) {
        return query->callback(segment, query->context);
    }
    return 1;
}
