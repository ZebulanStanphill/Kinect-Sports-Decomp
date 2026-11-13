/* Skips n bytes of a buffered reader: consumes what is buffered, reading single bytes through
   fn_82B50B00 when the buffer is empty. */
typedef struct Reader_82B80658 {
    int f0;
    unsigned int avail;
} Reader_82B80658;

extern int fn_82B50B00(Reader_82B80658 *r);

void fn_82B80658(Reader_82B80658 *r, unsigned int n)
{
    unsigned int avail;

    while (n != 0) {
        avail = r->avail;
        if (avail != 0) {
            if (avail >= n) {
                r->avail = avail - n;
                return;
            }
            n -= avail;
            r->avail = 0;
        } else {
            fn_82B50B00(r);
            n--;
        }
    }
}
