/* CreateRequest-style init: stores the builder and flags, allocates the raw data buffer; errors are
   reported through fn_82BE5240. */
typedef struct Req_82BE6B58 {
    char pad00[0x2c];
    void *builder;
    char pad30[0x48 - 0x30];
    int flags;
} Req_82BE6B58;

extern void fn_82BE5240(Req_82BE6B58 *r, int code, const char *message, ...);
extern int fn_82BE6050(Req_82BE6B58 *r, int size);

int fn_82BE6B58(Req_82BE6B58 *r, void *builder, int size, int flags)
{
    if (builder == 0) {
        fn_82BE5240(r, 0x44c, "NULL builder pointer passed to CreateRequest");
        return 0;
    }
    r->builder = builder;
    r->flags = flags;
    if (fn_82BE6050(r, size) == 0) {
        fn_82BE5240(r, 0x65, "Could not allocate raw data buffer.");
        return 0;
    }
    return 1;
}
