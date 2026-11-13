typedef struct Request_82BEA2F0 {
    char pad[0x10];
    int status;        /* 0x10 */
    char pad14[0x14];
    char list[1];      /* 0x28 */
} Request_82BEA2F0;

extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BEB628(void *mem, void *item);
extern int fn_82BE52B8(void *list, void *node);
extern int fn_82BE5240();
extern char lbl_82196582[];

int fn_82BEA2F0(Request_82BEA2F0 *r, void *item)
{
    void *mem;
    void *node;

    if (item == 0)
        return fn_82BE5240(r, 500, lbl_82196582);
    mem = fn_82BE56B0(0xc);
    if (mem != 0) {
        node = fn_82BEB628(mem, item);
    } else {
        node = 0;
    }
    if (node == 0) {
        r->status = 0;
        return fn_82BE5240(r, 0x65, "CMassiveListNode in PreSubscriberAdd");
    }
    fn_82BE52B8(r->list, node);
    return 0;
}
