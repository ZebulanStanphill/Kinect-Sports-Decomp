typedef struct O O;
typedef struct S { char pad[0x14]; O *o; } S;
typedef struct Tag { int id; } Tag;
extern void *fn_8267BED0(S *s, int size, Tag *tag);
extern O *fn_8279C4B8(void *mem);

O *fn_8279C588(S *s)
{
    if (s->o == 0) {
        Tag t;
        void *mem;
        t.id = 0x144;
        mem = fn_8267BED0(s, 0xb0, &t);
        s->o = mem ? fn_8279C4B8(mem) : 0;
    }
    return s->o;
}
