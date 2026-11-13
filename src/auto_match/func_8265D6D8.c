typedef struct { int v; } Elem_8265D6D8;
extern void fn_8266ADE0(void *al, Elem_8265D6D8 *p, const Elem_8265D6D8 *val);
extern void fn_826686C8(void *al, Elem_8265D6D8 *p);

/* _Uninit_fill_n with allocator: the catch-all destroy loop is dead without EH
   (_TRY_BEGIN/_CATCH_ALL expand to `{` / `} if (0) {`). */
void fn_8265D6D8(Elem_8265D6D8 *first, unsigned int count, const Elem_8265D6D8 *val, void *al, void *valty, unsigned char tag)
{
    Elem_8265D6D8 *next = first;
    {
        for (; 0 < count; --count, ++first) {
            fn_8266ADE0(al, first, val);
        }
    }
    if (0) {
        for (; next != first; ++next) {
            fn_826686C8(al, next);
        }
    }
}
