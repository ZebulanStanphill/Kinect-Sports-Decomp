extern void *fn_8267B890(void *, unsigned, unsigned);
extern void *fn_82795B68(void *, void *, void *);
void *fn_827961E0(char *self, void *arg) {
    void *p = fn_8267B890(*(void **)(self+0x1c), 0x28, 0);
    void *result;
    if (p) result = fn_82795B68(p, arg, self);
    else result = 0;
    return result;
}
