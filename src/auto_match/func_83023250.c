typedef struct Obj Obj;
typedef struct {
    void *f[10];
    int (*Init)(Obj *, void *, int, int, int, int, int);
} ObjVt;
struct Obj { ObjVt *vt; };

typedef struct {
    char pad[0x24];
    int count;
    unsigned int mask;
    Obj *obj;
    char data[4];
} S;

extern int fn_82A427B0(Obj **p, int a, int b);
extern void fn_8307DB88(void);
extern int XAudioGetSpeakerConfig(unsigned int *cfg);

int fn_83023250(S *s)
{
    unsigned int cfg;
    unsigned int m;
    int n;

    int hr;
    if (fn_82A427B0(&s->obj, 0, 4) != 0)
        hr = 0x80004005;
    else
        hr = s->obj->vt->Init(s->obj, s->data, 0, 48000, 0, 0, 0);
    if (hr < 0)
        return 2;
    if (XAudioGetSpeakerConfig(&cfg) != 0)
        return 2;
    fn_8307DB88();
    s->mask = 3;
    if (cfg & 1) {
        s->mask = 0x3f;
    } else if (cfg & 2) {
        s->mask = 3;
    } else if (cfg & 0x10000) {
        s->mask = 0x3f;
    }
    n = 0;
    for (m = s->mask; m != 0; m = (m - 1) & m)
        n++;
    s->count = n;
    return 1;
}
