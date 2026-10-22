typedef struct Stream {
    char pad00[0x2c];
    int a;
    int b;
    int c;
} Stream;

typedef struct Obj {
    char pad00[0x14];
    char log[0x20 - 0x14];
    int ctx;
    char pad24[0x28 - 0x24];
    Stream stream;
    char pad[0x314 - 0x28 - sizeof(Stream)];
    Stream *cur;
} Obj;

extern int lbl_831E7E64;

int fn_826E7408(Stream *s);
char *fn_8267B890(int heap, int size, int flags);
char fn_826DF4E8(Obj *obj);
void fn_826D64E0(int ctx, char *buf, int n);
void fn_826A9280(void *log, const char *fmt, ...);
void fn_8267BE38(char *p);

void fn_826E0848(Obj *obj)
{
    Stream *s;
    int n;
    char *buf;
    int i;

    s = obj->cur;
    if (s == 0) {
        s = &obj->stream;
    }
    n = fn_826E7408(s);
    s = obj->cur;
    if (s == 0) {
        s = &obj->stream;
    }
    n = s->b - s->c - s->a + n;
    buf = fn_8267B890(lbl_831E7E64, n + 1, 0);
    if (buf != 0) {
        for (i = 0; i < n; i++) {
            buf[i] = fn_826DF4E8(obj);
        }
        fn_826D64E0(obj->ctx, buf, n);
        buf[n < 0xff ? n : 0xff] = 0;
        fn_826A9280(obj->log, "  metadata: %s\n", buf);
        fn_8267BE38(buf);
    }
}
