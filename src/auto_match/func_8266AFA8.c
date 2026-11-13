typedef struct { int v[1]; } Elem_8266AFA8;
extern void fn_8266B060(void *al, Elem_8266AFA8 *p, const Elem_8266AFA8 *val);
extern void fn_826686C8(void *al, Elem_8266AFA8 *p);

/* _Uninit_copy with allocator: the catch-all destroy loop is dead without EH
   (_TRY_BEGIN/_CATCH_ALL expand to `{` / `} if (0) {`). */
Elem_8266AFA8 *fn_8266AFA8(Elem_8266AFA8 *first, Elem_8266AFA8 *last, Elem_8266AFA8 *dest, void *al, void *valty, unsigned char tag)
{
    Elem_8266AFA8 *next = dest;
    {
        for (; first != last; ++dest, ++first) {
            fn_8266B060(al, dest, first);
        }
    }
    if (0) {
        for (; next != dest; ++next) {
            fn_826686C8(al, next);
        }
    }
    return dest;
}
