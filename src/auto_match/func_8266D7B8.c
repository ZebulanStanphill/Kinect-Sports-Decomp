typedef struct Elem_8266D7B8 { int v[3]; } Elem_8266D7B8;

extern Elem_8266D7B8 *fn_8266D5C0(Elem_8266D7B8 *first1, Elem_8266D7B8 *last1, Elem_8266D7B8 *first2,
                                  Elem_8266D7B8 *last2, Elem_8266D7B8 *dest);
extern Elem_8266D7B8 *fn_8266D3E0(Elem_8266D7B8 *first, Elem_8266D7B8 *last, Elem_8266D7B8 *dest);

/* std::_Chunked_merge over 12-byte elements */
void fn_8266D7B8(Elem_8266D7B8 *first, Elem_8266D7B8 *last, Elem_8266D7B8 *dest, int chunk, int count)
{
    int chunk2;
    for (chunk2 = chunk * 2; chunk2 <= count; count -= chunk2) {
        Elem_8266D7B8 *mid1 = first + chunk;
        Elem_8266D7B8 *mid2 = mid1 + chunk;
        dest = fn_8266D5C0(first, mid1, mid1, mid2, dest);
        first = mid2;
    }
    if (count <= chunk) {
        fn_8266D3E0(first, last, dest);
    } else {
        Elem_8266D7B8 *mid = first + chunk;
        fn_8266D5C0(first, mid, mid, last, dest);
    }
}
