typedef struct Base_82723900 Base_82723900;

typedef struct BaseVtbl_82723900 {
    int pad[2];
    int (*getType)(Base_82723900 *self); /* 0x08 */
} BaseVtbl_82723900;

struct Base_82723900 {
    BaseVtbl_82723900 *vt;
};

typedef struct Obj_82723900 {
    char pad0[0xa0];
    void *table; /* 0xa0 */
} Obj_82723900;

typedef struct Value_82723900 {
    int pad0[2];
    int refs; /* 0x08 */
} Value_82723900;

typedef struct Ref_82723900 {
    int pad0;
    long refs; /* 0x04 */
} Ref_82723900;

typedef struct Text_82723900 {
    unsigned int tagged;
} Text_82723900;

typedef struct Env_82723900 {
    char pad0[0x78];
    char *context; /* 0x78 */
} Env_82723900;

typedef struct Self_82723900 {
    int a;                 /* 0x00 */
    unsigned char *result; /* 0x04 */
    Base_82723900 *base;   /* 0x08 */
    char padc[0x18 - 0xc];
    Env_82723900 *env; /* 0x18 */
    int count;         /* 0x1c */
} Self_82723900;

extern char lbl_82196582[];
extern long _InterlockedExchangeAdd(long volatile *addend, long value);
extern void *fn_826957D0(Self_82723900 *self, int index);
extern int fn_82697610(void *arg, Env_82723900 *env);
extern void fn_826959C8(unsigned char *result);
extern char *fn_827A16D8(void *table, int index, unsigned int *length);
extern Value_82723900 **fn_82681728(Value_82723900 **out, char *context, const char *text);
extern Value_82723900 **fn_8269A190(Value_82723900 **out, char *context, Text_82723900 *text);
extern void fn_82681838(unsigned char *result, Value_82723900 **value);
extern Text_82723900 *fn_8268B330(Text_82723900 *out);
extern void fn_8268B508(Text_82723900 *text, const char *str, unsigned int length);
extern void fn_826944C8(Value_82723900 *value);
extern void fn_8267BE38(Ref_82723900 *ref);

static __forceinline void ReleaseValue(Value_82723900 *value)
{
    if (--value->refs == 0)
        fn_826944C8(value);
}

void fn_82723900(Self_82723900 *self)
{
    if (self->base != 0) {
        if (self->base->vt->getType(self->base) == 4) {
            Obj_82723900 *o;
            Env_82723900 *env;
            int index;
            char *str;
            unsigned int length;
            Text_82723900 text;
            Ref_82723900 *ref;

            if (self->base != 0)
                o = (Obj_82723900 *)((char *)self->base - 0x68);
            else
                o = 0;
            if (self->count >= 1) {
                env = self->env;
                index = fn_82697610(fn_826957D0(self, 0), env);
                if (index < 0) {
                    unsigned char *result = self->result;
                    fn_826959C8(result);
                    *result = 0;
                    return;
                }
                length = 0;
                str = fn_827A16D8(o->table, index, &length);
                if (str != 0) {
                    Value_82723900 *value;

                    fn_8268B330(&text);
                    fn_8268B508(&text, str, length);
                    fn_8269A190(&value, self->env->context + 0x254, &text);
                    fn_82681838(self->result, &value);
                    ReleaseValue(value);
                    ref = (Ref_82723900 *)(text.tagged & ~3u);
                    if (_InterlockedExchangeAdd(&ref->refs, -1) - 1 == 0)
                        fn_8267BE38(ref);
                } else {
                    Value_82723900 *value;

                    fn_82681728(&value, self->env->context + 0x254, lbl_82196582);
                    fn_82681838(self->result, &value);
                    ReleaseValue(value);
                }
            }
        }
    }
}
