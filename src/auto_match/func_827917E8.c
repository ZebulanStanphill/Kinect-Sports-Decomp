typedef struct { unsigned int pos; int x4; unsigned int end; unsigned int ch; } Reader_827917E8;
typedef struct { char pad0[8]; Reader_827917E8 reader; } Obj_827917E8;
extern char lbl_820094C8[];
extern int fn_826BCD88(const char *table, unsigned short ch);
extern void fn_82791560(Reader_827917E8 *r);

void fn_827917E8(Obj_827917E8 *self)
{
    Reader_827917E8 *r = &self->reader;
    while (r->pos < r->end && fn_826BCD88(lbl_820094C8, self->reader.ch) != 0) {
        fn_82791560(r);
    }
}
