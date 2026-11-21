typedef struct Source_82F487F8 Source_82F487F8;
typedef struct Obj_82F487F8 Obj_82F487F8;

typedef struct SourceVtbl_82F487F8 {
    void *slots00[11];
    int (*GetFormat)(Source_82F487F8 *self, void *format);         /* 0x2C */
    int (*GetCount)(Source_82F487F8 *self, unsigned short *count); /* 0x30 */
} SourceVtbl_82F487F8;

struct Source_82F487F8 {
    SourceVtbl_82F487F8 *vt;
};

typedef struct ObjVtbl_82F487F8 {
    void *slots00[20];
    int (*HasExtra)(Obj_82F487F8 *self); /* 0x50 */
} ObjVtbl_82F487F8;

struct Obj_82F487F8 {
    ObjVtbl_82F487F8 *vt; /* 0x00 */
    char pad04[0x10];
    Source_82F487F8 *source; /* 0x14 */
    unsigned short count;    /* 0x18 */
    char pad1A[2];
    unsigned int tableSize; /* 0x1C */
    char format[0xc];       /* 0x20 */
    void *table;            /* 0x2C */
    char pad30[0x2c];
    unsigned int recordSize; /* 0x5C */
};

void *memset(void *dst, int value, unsigned int size);
extern void fn_82E4FE40(void *p);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);

int fn_82F487F8(Obj_82F487F8 *self)
{
    int hr;
    unsigned int size;

    if (self->source == 0) {
        return 0xc00d36b2;
    }
    hr = self->source->vt->GetCount(self->source, &self->count);
    if (hr >= 0) {
        self->tableSize = self->count * 4;
        if (self->vt->HasExtra(self) != 0) {
            self->tableSize += 4;
        }
        self->recordSize = self->count * 8 + 4;
        if (self->vt->HasExtra(self) != 0) {
            self->recordSize += 2;
        }
        hr = self->source->vt->GetFormat(self->source, self->format);
        if (hr >= 0) {
            if (self->count > 0x7f) {
                hr = 0x80004005;
            } else {
                if (self->table != 0) {
                    fn_82E4FE40(self->table);
                }
                size = self->count * 8;
                self->table = 0;
                self->table = fn_82E50BE8(size, 0, 0, 0, 0);
                if (self->table == 0) {
                    hr = 0x8007000e;
                } else {
                    memset(self->table, 0, self->count * 8);
                }
            }
        }
    }
    return hr;
}
