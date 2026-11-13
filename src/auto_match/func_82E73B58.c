typedef struct Unk_82E73B58 Unk_82E73B58;
typedef struct UnkVt_82E73B58 {
    void *qi;
    int (*addref)(Unk_82E73B58 *u);
    int (*release)(Unk_82E73B58 *u);
} UnkVt_82E73B58;
struct Unk_82E73B58 { UnkVt_82E73B58 *vt; };
typedef struct Source_82E73B58 Source_82E73B58;
typedef struct SourceVt_82E73B58 {
    void *pad[2];
    int (*next)(Source_82E73B58 *s, Unk_82E73B58 **out);
} SourceVt_82E73B58;
struct Source_82E73B58 { SourceVt_82E73B58 *vt; };

int fn_82E73B58(void *self, Source_82E73B58 *s)
{
    Unk_82E73B58 *p;
    if (s == 0) {
        return 0x80070057;
    }
    p = 0;
    while (s->vt->next(s, &p) >= 0) {
        if (p != 0) {
            p->vt->release(p);
            p = 0;
        }
    }
    if (p != 0)
        p->vt->release(p);
    return 0;
}
