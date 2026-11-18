typedef struct Ctx_82ADD198 {
    char pad[0x2a8];
    unsigned int *links; /* 0x2a8 */
} Ctx_82ADD198;

extern int fn_82AA66A8(void *ctx, int code);

unsigned int fn_82ADD198(Ctx_82ADD198 *ctx, unsigned int id)
{
    unsigned int root;
    unsigned int next = ctx->links[id];

    if (next == 0 || next >= 0xffff) {
        return id;
    }
    root = next;
    if (next != id) {
        while ((next = ctx->links[root]) != 0 && next < 0xffff) {
            if (next == root) {
                return fn_82AA66A8(ctx, 0x12c0);
            }
            ctx->links[id] = next;
            root = next;
        }
    }
    return root;
}
