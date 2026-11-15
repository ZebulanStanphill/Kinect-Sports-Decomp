typedef struct Request_82FFA278 {
    unsigned int reserved;   /* 0x00 */
    unsigned int key;        /* 0x04 */
    unsigned int mode;       /* 0x08 */
    unsigned int size;       /* 0x0c */
    unsigned int flags;      /* 0x10 */
    unsigned int reserved14; /* 0x14 */
    unsigned short limit;    /* 0x18 */
} Request_82FFA278;

extern void fn_82FF8580(void *);
extern void fn_82FF8648(void *);
extern int fn_82FF86F0(void *, void *, unsigned int, unsigned int *);
extern int fn_82FF8B88(void *, unsigned int, unsigned int);
extern int fn_82FF8D30(void *, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int *fn_82FFE0F0(void *, unsigned int);

int fn_82FFA278(char *self, Request_82FFA278 *request, void *data)
{
    void *state = self + 4;
    unsigned int flags;
    unsigned int key;
    unsigned int limit;
    unsigned int mode;
    unsigned int *entry;
    unsigned int transferred;
    int result;
    fn_82FF8580(state);
    flags = request->flags >> 31;
    key = request->key;
    limit = request->limit;
    mode = request->mode;
    entry = fn_82FFE0F0(self + 0x41c, key);
    if (entry != 0) {
        result = fn_82FF8B88(state, *entry, mode);
    } else {
        result = fn_82FF8D30(state, key, mode, mode == 0 ? limit : 0, flags);
    }
    transferred = 0;
    if (result == 1) {
        result = fn_82FF86F0(state, data, request->size, &transferred);
        if (result == 1 && request->size != transferred) {
            result = 2;
        }
    }
    fn_82FF8648(state);
    return result;
}
