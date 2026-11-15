struct Selection_8295EBC8 {
    unsigned int flags;     /* 0x0 */
    int pad4;               /* 0x4 */
    unsigned int *indices;  /* 0x8 */
    int padC;               /* 0xc */
    unsigned int *selected; /* 0x10 */
};

struct Device_8295EBC8 {
    virtual void slot000();
    virtual void slot004();
    virtual void slot008();
    virtual void slot00c();
    virtual void slot010();
    virtual void slot014();
    virtual void slot018();
    virtual void slot01c();
    virtual void slot020();
    virtual void slot024();
    virtual void slot028();
    virtual void slot02c();
    virtual void slot030();
    virtual void slot034();
    virtual void slot038();
    virtual void slot03c();
    virtual void slot040();
    virtual void slot044();
    virtual void slot048();
    virtual void slot04c();
    virtual void slot050();
    virtual void slot054();
    virtual void slot058();
    virtual void slot05c();
    virtual void slot060();
    virtual void slot064();
    virtual void slot068();
    virtual void slot06c();
    virtual void slot070();
    virtual void slot074();
    virtual void slot078();
    virtual void slot07c();
    virtual void slot080();
    virtual void slot084();
    virtual void slot088();
    virtual void slot08c();
    virtual void slot090();
    virtual void slot094();
    virtual void slot098();
    virtual void slot09c();
    virtual void slot0a0();
    virtual void slot0a4();
    virtual void slot0a8();
    virtual void slot0ac();
    virtual void slot0b0();
    virtual void slot0b4();
    virtual void slot0b8();
    virtual void slot0bc();
    virtual void slot0c0();
    virtual void slot0c4();
    virtual void slot0c8();
    virtual void slot0cc();
    virtual void slot0d0();
    virtual void slot0d4();
    virtual void slot0d8();
    virtual void slot0dc();
    virtual void slot0e0();
    virtual void slot0e4();
    virtual void slot0e8();
    virtual void slot0ec();
    virtual void slot0f0();
    virtual void slot0f4();
    virtual void slot0f8();
    virtual void slot0fc();
    virtual void slot100();
    virtual void slot104();
    virtual void slot108();
    virtual void slot10c();
    virtual void slot110();
    virtual void slot114();
    virtual void slot118();
    virtual void slot11c();
    virtual void slot120();
    virtual void slot124();
    virtual void slot128();
    virtual void slot12c();
    virtual void slot130();
    virtual int finish();
    virtual int setFirst(unsigned int, unsigned int, unsigned int);
    virtual int setSecond(unsigned int, unsigned int, unsigned int);
    virtual int queryFirst(unsigned int, unsigned int *, unsigned int, unsigned int);
    virtual void slot144();
    virtual int querySecond(unsigned int, unsigned int *, unsigned int *);
    virtual int queryIndices(unsigned int *, unsigned int, unsigned int, unsigned int *);
    int pad4[4];                   /* 0x4 */
    unsigned int *table;           /* 0x14 */
    char pad18[0x104 - 0x18];      /* 0x18 */
    Selection_8295EBC8 *selection; /* 0x104 */
};

extern "C" int fn_8295D0A8(Device_8295EBC8 *, int);
extern "C" int fn_829548C8(Device_8295EBC8 *);

extern "C" int fn_8295EBC8(Device_8295EBC8 *self)
{
    unsigned int flags = self->selection->flags;
    unsigned int index = flags & 0xfffff;
    unsigned int mode = 0;
    unsigned int type = flags & 0xfff00000;
    unsigned int extra;
    unsigned int selected;
    unsigned int value;
    int result;
    switch (type) {
    case 0x73000000:
    case 0x73c00000:
        mode = 2;
        break;
    case 0x73900000:
        mode = 3;
        break;
    case 0x73a00000:
        mode = 4;
        break;
    case 0x73b00000:
        mode = 5;
        break;
    }
    result = fn_8295D0A8(self, (mode << 16) | 0x29);
    if (result < 0)
        goto done;
    result = self->querySecond(self->table[*self->selection->indices], &value, &extra);
    if (result < 0)
        goto done;
    result = self->queryIndices(self->selection->indices, index, 0xf0000, &selected);
    if (result < 0)
        goto done;
    result = self->setSecond(value, selected, extra);
    if (result < 0)
        goto done;
    result = self->querySecond(self->table[self->selection->indices[index]], &value, &extra);
    if (result < 0)
        goto done;
    result = self->queryIndices(self->selection->indices + index, index, 0xf0000, &selected);
    if (result < 0)
        goto done;
    result = self->setSecond(value, selected, extra);
    if (result < 0)
        goto done;
    result = self->finish();
    if (result < 0)
        goto done;
    result = fn_829548C8(self);
    if (result < 0)
        goto done;
    return 0;
done:
    return result;
}
