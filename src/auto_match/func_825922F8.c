// Lazy singleton getter registered under "sceneControlObj" in the object-type table lbl_8218ED40:
// constructs the static object on first use (the constructor returns its this) and returns it.
extern unsigned char lbl_8329E65C;
extern char lbl_8329E628[];
extern void *fn_82592340(void *self);

void *fn_825922F8(void)
{
    void *p = lbl_8329E628;
    if (!lbl_8329E65C) {
        p = fn_82592340(p);
        lbl_8329E65C = 1;
    }
    return p;
}
