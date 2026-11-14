typedef struct Sink_82E1E6E0 Sink_82E1E6E0;
typedef struct SinkVt_82E1E6E0 {
    void *f0;
    void (*write)(Sink_82E1E6E0 *self, const char *path, const void *data, unsigned int size);
} SinkVt_82E1E6E0;
struct Sink_82E1E6E0 { SinkVt_82E1E6E0 *vt; };

typedef struct Log_82E1E6E0 {
    const char *path;           /* 0x00 */
    char pad4[0x4c];
    Sink_82E1E6E0 *sink;        /* 0x50 */
} Log_82E1E6E0;

extern void *fn_82E20270(const char *path, const char *mode, int share);
extern unsigned int fn_82F67CF8(const void *data, unsigned int size, unsigned int count, void *file);
extern int fn_82F67988(void *file);

void fn_82E1E6E0(Log_82E1E6E0 *self, const void *data, unsigned int size)
{
    void *file;

    if (self->sink != 0) {
        self->sink->vt->write(self->sink, self->path, data, size);
        return;
    }
    file = fn_82E20270(self->path, "a+b", 1);
    if (file != 0) {
        fn_82F67CF8(data, 1, size, file);
        fn_82F67988(file);
    }
}
