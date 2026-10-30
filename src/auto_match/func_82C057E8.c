typedef struct {
    char pad[0x30];
    int eof;
    int x34;
    unsigned __int64 start;
    unsigned __int64 length;
    char pad2[0x58 - 0x48];
    unsigned __int64 pos;
} Obj_82C057E8;

int fn_82C057E8(Obj_82C057E8 *o, __int64 delta)
{
    o->eof = (o->pos + delta > o->length + o->start || o->pos + delta < o->start) ? 1 : 0;
    o->pos += delta;
    return 0;
}
