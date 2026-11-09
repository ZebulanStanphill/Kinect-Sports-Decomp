/* std::_Merge_backward (VC10) for a 12-byte element whose first two words are copied with
   fn_8256E1D8 and whose third word is the unsigned sort key; the tail is finished with the
   backward copy fn_8266D210. */
typedef struct {
    int a;
    int b;
    unsigned int key;
} Elem_8266D668;

extern void fn_8256E1D8(Elem_8266D668 *dest, int a, int b);
extern Elem_8266D668 *fn_8266D210(Elem_8266D668 *first, Elem_8266D668 *last, Elem_8266D668 *dest);

Elem_8266D668 *fn_8266D668(Elem_8266D668 *first1, Elem_8266D668 *last1,
                           Elem_8266D668 *first2, Elem_8266D668 *last2, Elem_8266D668 *dest)
{
    for (;;) {
        if (first1 == last1) {
            return fn_8266D210(first2, last2, dest);
        } else if (first2 == last2) {
            return fn_8266D210(first1, last1, dest);
        } else if ((--last2)->key < (--last1)->key) {
            --dest;
            fn_8256E1D8(dest, last1->a, last1->b);
            dest->key = last1->key;
            ++last2;
        } else {
            --dest;
            fn_8256E1D8(dest, last2->a, last2->b);
            dest->key = last2->key;
            ++last1;
        }
    }
}
