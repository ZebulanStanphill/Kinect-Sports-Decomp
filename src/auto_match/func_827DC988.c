/* NOTE: symbols.txt splits this function in two: fn_827DC9AC (size 0xC) is
   its loop-closing `bne` + `mr r3, r5` + `blr`. This source is the whole
   function (an uninitialized_copy of 4-byte elements); only the symbol
   boundary keeps it below 100%. */
int *fn_827DC988(int *first, int *last, int *dest)
{
    for (; first != last; first++, dest++) {
        if (dest != 0) {
            *dest = *first;
        }
    }
    return dest;
}
