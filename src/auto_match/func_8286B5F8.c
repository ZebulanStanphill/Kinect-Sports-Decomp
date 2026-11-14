typedef struct {
    unsigned char bytes[0x1c];
} String_8286B5F8;

extern void fn_82240378(String_8286B5F8 *dst, const String_8286B5F8 *src);
extern void fn_8286B448(String_8286B5F8 *first, int hole, int bottom, String_8286B5F8 *value);
extern void fn_82230300(String_8286B5F8 *s, int built, unsigned int new_size);

void fn_8286B5F8(String_8286B5F8 *first, String_8286B5F8 *last)
{
    int bottom = last - first;
    int hole;
    for (hole = bottom / 2; 0 < hole;) {
        String_8286B5F8 value;
        --hole;
        fn_82240378(&value, first + hole);
        fn_8286B448(first, hole, bottom, &value);
        fn_82230300(&value, 1, 0);
    }
}
