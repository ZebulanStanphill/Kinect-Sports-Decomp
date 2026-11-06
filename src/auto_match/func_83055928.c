typedef struct Obj_83055928 {
    char pad0[0x38];
    char cs[0xb0 - 0x38];
    unsigned __int64 size;
    unsigned char eof : 1;
    unsigned char busy : 1;
    unsigned char rest : 6;
} Obj_83055928;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int fn_83051330(Obj_83055928 *o, unsigned __int64 *pos, void *buf, unsigned int len,
                                unsigned char last);
extern void fn_830508A0(Obj_83055928 *o, unsigned __int64 size, unsigned __int64 pos);
extern void fn_83051C68(Obj_83055928 *o, int mode);

void fn_83055928(Obj_83055928 *o, void *notify, unsigned __int64 pos, void *buf, unsigned int len, int mode)
{
    unsigned char last;
    unsigned int n;

    RtlEnterCriticalSection(o->cs);
    last = mode == 1 && o->eof && len + pos >= o->size;
    n = fn_83051330(o, &pos, buf, len, last);
    o->eof = 0;
    if (notify != 0) {
        fn_830508A0(o, o->size, n + pos);
    }
    fn_83051C68(o, mode);
    o->busy = 0;
    RtlLeaveCriticalSection(o->cs);
}
