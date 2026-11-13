typedef struct Request_82BF8B70 {
    char pad[0x50];
    char *url;
} Request_82BF8B70;

extern char *fn_82BE19A0(const char *s);
extern void fn_82BE5240(Request_82BF8B70 *s, int code, char *msg);

unsigned char fn_82BF8B70(Request_82BF8B70 *r, const char *url)
{
    r->url = fn_82BE19A0(url);
    if (r->url == 0) {
        fn_82BE5240(r, 0x65, "Could not allocate buffer to store request URL");
        return 0;
    }
    return 1;
}
