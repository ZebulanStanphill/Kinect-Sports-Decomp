extern void *lbl_83218C38;
extern void *fn_829F5368(unsigned);
extern void *fn_829F7F48(void);
extern unsigned fn_829F92C8(void *, unsigned *);
extern void fn_829F92C0(void *);
extern void fn_829F5370(void *);
unsigned fn_829F5298(unsigned *p) {
    unsigned hr = 0;
    void *ctx;
    if (lbl_83218C38 != 0) { hr = 0x4df; goto cleanup; }
    if (p == 0) { hr = 0x57; goto cleanup; }
    if (*p == 0) goto done;
    lbl_83218C38 = fn_829F5368(0x90) ? fn_829F7F48() : 0;
    if (lbl_83218C38 == 0) { hr = 0xe; goto cleanup; }
    hr = fn_829F92C8(lbl_83218C38,p);
    if (hr == 0) goto done;
cleanup:
    ctx = lbl_83218C38;
    if (ctx != 0) { fn_829F92C0(ctx); fn_829F5370(ctx); }
    lbl_83218C38 = 0;
done:
    return hr;
}
