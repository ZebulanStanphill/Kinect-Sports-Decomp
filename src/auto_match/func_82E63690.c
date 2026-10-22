typedef struct {
    unsigned int a, b, c, d;
} Guid;

typedef struct {
    unsigned short type;
    short pad2;
    int f4;
    Guid *guid;
} PropVar;

typedef struct {
    int f0;
    char lock[4];
} Store;

extern void fn_82E50F00(void *lock, int mode);
extern void fn_82E51028(void *lock, int mode);
extern PropVar *fn_82E52428(Store *s, void *key);

int fn_82E63690(Store *s, void *key, Guid *out)
{
    int hr;
    PropVar *v;

    hr = 0;
    fn_82E50F00(s->lock, 1);
    v = fn_82E52428(s, key);
    if (v != 0) {
        if (v->type == 0x48) {
            *out = *v->guid;
        } else {
            hr = 0xC00D36BD;
        }
    } else {
        hr = 0xC00D36E6;
    }
    fn_82E51028(s->lock, 1);
    return hr;
}
