typedef struct Hull_82D10A80 Hull_82D10A80;

struct Hull_82D10A80 {
    struct {
        void (*destroy)(Hull_82D10A80 *, unsigned int);
    } *vtable;
};

typedef struct Options_82D10A80 {
    int enabled;
    float tolerance;
} Options_82D10A80;

extern void fn_82D10560(Hull_82D10A80 *, float, void *, void *);
extern Hull_82D10A80 *fn_82D0D770(Hull_82D10A80 *);
extern void fn_82D0EFF0(Hull_82D10A80 *, float, Options_82D10A80 *);
extern void fn_82D0FF18(Hull_82D10A80 *, void *, void *, float);
extern float lbl_821347A8;

void fn_82D10A80(Hull_82D10A80 *self, float radius, void *first, void *second)
{
    Hull_82D10A80 *copy;
    Options_82D10A80 options;
    fn_82D10560(self, radius, first, second);
    copy = fn_82D0D770(self);
    options.enabled = 1;
    options.tolerance = 1.1920928955078125e-7f;
    fn_82D0EFF0(copy, -radius, &options);
    fn_82D0FF18(copy, first, second, lbl_821347A8);
    if (copy != 0) {
        copy->vtable->destroy(copy, 1);
    }
}
