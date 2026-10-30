// Returns 1 if x is in the range [r->begin, r->end), 0 if not or if r is null.
// self is unused.
typedef struct {
    unsigned int *begin;
    unsigned int *end;
} Range_8302EED8;

int fn_8302EED8(void *self, Range_8302EED8 *r, unsigned int x)
{
    int found = 0;

    if (r) {
        unsigned int *p = r->begin, *e = r->end;

        while (p != e) {
            if (*p == x) {
                found = 1;
                break;
            }
            ++p;
        }
    }
    return found;
}
