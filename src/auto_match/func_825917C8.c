// Lazy singleton getter registered under "background" in the object-type table lbl_8218ED40:
// constructs the static object on first use (the constructor returns its this) and returns it.
extern unsigned char lbl_83298FD0;
extern char lbl_83298FA4[];
extern void *fn_82591810(void *self);

void *fn_825917C8(void)
{
    void *p = lbl_83298FA4;
    if (!lbl_83298FD0) {
        p = fn_82591810(p);
        lbl_83298FD0 = 1;
    }
    return p;
}
