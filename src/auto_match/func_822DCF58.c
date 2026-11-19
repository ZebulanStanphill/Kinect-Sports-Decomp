/* vector<string>::insert(where, first, last) for input iterators over (begin, end) character
   ranges: the strings are appended, then rotated into place. */
typedef struct String_822DCF58 {
    char storage[0x1c];
} String_822DCF58;

typedef struct StringVector_822DCF58 {
    String_822DCF58 *first; /* 0x00 */
    String_822DCF58 *last;  /* 0x04 */
    String_822DCF58 *end;   /* 0x08 */
} StringVector_822DCF58;

typedef struct RangeIterator_822DCF58 {
    unsigned int finder[8]; /* 0x00 */
    const char *matchBegin; /* 0x20 */
    const char *matchEnd;   /* 0x24 */
    int unk28;              /* 0x28 */
    int unk2c;              /* 0x2c */
    unsigned char unk30;    /* 0x30 */
    int unk34[3];           /* 0x34 */
} RangeIterator_822DCF58;

extern void fn_822DBCB8(RangeIterator_822DCF58 *self, const RangeIterator_822DCF58 *src);
extern void fn_822DBD60(RangeIterator_822DCF58 *self);
extern unsigned char fn_822DD640(const RangeIterator_822DCF58 *a, const RangeIterator_822DCF58 *b);
extern void fn_822DC2E0(RangeIterator_822DCF58 *self);
extern void fn_82230300(String_822DCF58 *s, int built, unsigned int newSize);
extern void fn_82230360(String_822DCF58 *s, const char *text, int count);
extern void fn_822DD1B8(StringVector_822DCF58 *v, String_822DCF58 *value);
extern void fn_822DD750(String_822DCF58 *first, String_822DCF58 *mid, String_822DCF58 *last);

void fn_822DCF58(StringVector_822DCF58 *v, String_822DCF58 *where, RangeIterator_822DCF58 *first,
                 RangeIterator_822DCF58 *last)
{
    String_822DCF58 value;
    RangeIterator_822DCF58 lastCopy;
    RangeIterator_822DCF58 firstCopy;
    String_822DCF58 *base;
    int offset;
    int oldSize;

    fn_822DBCB8(&lastCopy, last);
    fn_822DBCB8(&firstCopy, first);
    base = v->first;
    offset = where - base;
    if (fn_822DD640(&firstCopy, &lastCopy)) {
        oldSize = v->last - base;
        for (; fn_822DD640(&firstCopy, &lastCopy); fn_822DC2E0(&firstCopy)) {
            const char *matchEnd = firstCopy.matchEnd;
            const char *matchBegin = firstCopy.matchBegin;

            fn_82230300(&value, 0, 0);
            if (matchBegin != matchEnd) {
                fn_82230360(&value, matchBegin, matchEnd - matchBegin);
            }
            fn_822DD1B8(v, &value);
            fn_82230300(&value, 1, 0);
        }
        {
            String_822DCF58 *rotateMid = v->first + oldSize;
            String_822DCF58 *rotateFirst = v->first + offset;
            String_822DCF58 *rotateLast = v->last;

            if (rotateFirst != rotateMid && rotateMid != rotateLast) {
                fn_822DD750(rotateFirst, rotateMid, rotateLast);
            }
        }
    }
    fn_822DBD60(&firstCopy);
    fn_822DBD60(&lastCopy);
    fn_822DBD60(first);
    fn_822DBD60(last);
}
