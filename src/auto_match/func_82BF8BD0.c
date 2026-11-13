typedef struct Request_82BF8BD0 {
    char pad[0x30];
    void *hash;
    char pad2[0x14];
    int hashType;
} Request_82BF8BD0;

extern int fn_82BF8B70(Request_82BF8BD0 *r, const char *url);
extern void fn_82BE5240(Request_82BF8BD0 *r, int code, char *msg);
extern void fn_82BE64E0(Request_82BF8BD0 *r, int state);
extern int fn_82BE6B58(Request_82BF8BD0 *r, void *a, int b, int c);
extern void *(*lbl_831751D0)(unsigned int size);
extern char lbl_82196582[];
void *memcpy(void *dst, const void *src, unsigned int n);

int fn_82BF8BD0(Request_82BF8BD0 *r, void *body, const char *url, const void *hash, int hashType)
{
    if (body == 0 || url == 0 || hash == 0) {
        fn_82BE5240(r, 0x44c, lbl_82196582);
    } else if (fn_82BF8B70(r, url) != 0) {
        r->hash = lbl_831751D0(0x14);
        if (r->hash == 0) {
            fn_82BE5240(r, 0x65, "Hash buffer in CreateRequest()");
        } else {
            memcpy(r->hash, hash, 0x14);
            r->hashType = hashType;
            if (fn_82BE6B58(r, body, 0x100, hashType) != 0) {
                fn_82BE64E0(r, 2);
                return 1;
            }
        }
    }
    return 0;
}
