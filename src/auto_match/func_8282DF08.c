typedef int (*Open)(void *, const char *);
typedef int (*Read)(void *, int, void *);
typedef int (*Close)(void *);
typedef struct {
    void *context;
    Open open;
    Read read;
    Close close;
} Callbacks;

extern Callbacks lbl_8320A798;

static __forceinline void setCallbacks_8282DF08(void *context, Open open, Read read, Close close)
{
    lbl_8320A798.context = context;
    lbl_8320A798.open = open;
    lbl_8320A798.read = read;
    lbl_8320A798.close = close;
}

void fn_8282DF08(void)
{
    setCallbacks_8282DF08(0, 0, 0, 0);
}
